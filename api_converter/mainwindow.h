#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>
#include <QDebug>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    QString read_api_key(const QString &file_path);
    QString read_currencies(const QString &file_path);
    void add_currencies();
    void on_rates_fetched(QNetworkReply *reply);
    void invert_currencies();
    void display_convertion();
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QJsonObject rates_;
};
#endif // MAINWINDOW_H
