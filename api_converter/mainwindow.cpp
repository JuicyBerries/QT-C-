#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QFile>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->convertButton, &QPushButton::clicked, this, &MainWindow::display_convertion);
    connect(ui->invertCurrenciesButton, &QPushButton::clicked, this, &MainWindow::invert_currencies);

    QString api_key = read_api_key("/api_key.txt");
    QString currencies = read_currencies("/currencies.txt");
    QString url = QString("https://api.exchangeratesapi.io/v1/latest?access_key=%1&base=EUR&symbols=%2")
                      .arg(api_key)
                      .arg(currencies);

    QNetworkAccessManager *manager = new QNetworkAccessManager(this);
    connect(manager, &QNetworkAccessManager::finished, this, &MainWindow::on_rates_fetched);
    manager->get(QNetworkRequest(QUrl(url)));

}

QString MainWindow::read_api_key(const QString &file_path) {
    QString api_key;
    QString path = QCoreApplication::applicationDirPath() + file_path;
    QFile file(path);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        api_key = in.readLine().trimmed();
        file.close();
    } else {
        qDebug() << "Impossible d'ouvrir le fichier :" << path;
    }
    return api_key;
}

QString MainWindow::read_currencies(const QString &file_path) {
    QStringList currencies;
    QString path = QCoreApplication::applicationDirPath() + file_path;
    QFile file(path);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        while (!in.atEnd()) {
            QString line = in.readLine().trimmed();
            if (!line.isEmpty())
                currencies.append(line);
        }
        file.close();
    } else {
        qDebug() << "Impossible d'ouvrir le fichier :" << path;
    }
    return currencies.join(",");
}

void MainWindow::add_currencies()
{
    if (!rates_.empty()) {
        for (const QString &key : rates_.keys()) {
            ui->comboBox_1->addItem(key);
            ui->comboBox_2->addItem(key);
        }
    }
}


void MainWindow::on_rates_fetched(QNetworkReply *reply)
{
    if (reply->error() == QNetworkReply::NoError) {
        QByteArray responseData = reply->readAll();
        QJsonDocument jsonDoc = QJsonDocument::fromJson(responseData);
        QJsonObject jsonObj = jsonDoc.object();

        if (jsonObj.contains("rates")) {
            rates_ = jsonObj["rates"].toObject();
            qDebug() << "rates :" << rates_;
            /*
            qDebug() << "Taux USD :" << rates["USD"].toDouble();
            qDebug() << "Taux AUD :" << rates["AUD"].toDouble();
            qDebug() << "Taux CAD :" << rates["CAD"].toDouble();
            qDebug() << "Taux PLN :" << rates["PLN"].toDouble();
            qDebug() << "Taux MXN :" << rates["MXN"].toDouble();
            */
        } else {
            qDebug() << "Réponse invalide ou clé 'rates' absente.";
        }
    } else {
        qDebug() << "Erreur réseau :" << reply->errorString();
    }
    add_currencies();
    reply->deleteLater();
}


void MainWindow::invert_currencies()
{
    int index1 = ui->comboBox_1->currentIndex();
    int index2 = ui->comboBox_2->currentIndex();

    QString text1 = ui->comboBox_1->itemText(index1);
    QString text2 = ui->comboBox_2->itemText(index2);

    int newIndex1 = ui->comboBox_1->findText(text2);
    int newIndex2 = ui->comboBox_2->findText(text1);

    if (newIndex1 != -1)
        ui->comboBox_1->setCurrentIndex(newIndex1);

    if (newIndex2 != -1)
        ui->comboBox_2->setCurrentIndex(newIndex2);
}



void MainWindow::display_convertion()
{
    QString currencyIn = ui->comboBox_1->currentText();
    QString currencyOut = ui->comboBox_2->currentText();
    double amount = ui->amountDoubleSpinBox_1->value();

    double rateIn = rates_.value(currencyIn).toDouble();
    double rateOut = rates_.value(currencyOut).toDouble();

    if (rateIn > 0) {
        double result = amount / rateIn * rateOut;
        ui->amountResult_1->display(result);
    } else {
        qDebug() << "Erreur : taux de conversion invalide";
    }

}





MainWindow::~MainWindow()
{
    delete ui;
}

