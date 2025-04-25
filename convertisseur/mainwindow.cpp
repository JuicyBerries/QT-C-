#include "mainwindow.h"
#include "./ui_mainwindow.h"

#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), taux_{1.05}, dialog_(new Dialog)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &MainWindow::display_convertion);
    connect(ui->actionQuit, &QAction::triggered, this, &MainWindow::close);
    connect(ui->actionCr_dits, &QAction::triggered, this, &MainWindow::display_credits);
    connect(ui->actionTaux_de_change, &QAction::triggered, this, &MainWindow::open_dialog);
    connect(dialog_, &QDialog::finished, this, &MainWindow::get_taux_of_dialog);
}

QString create_taux_conv_label(double t)
{
    if (t >= 2) {
        return QString("1 Euro = %1 Dollars").arg(t);
    }
    return QString("1 Euro = %1 Dollar").arg(t);
}

void MainWindow::get_taux_of_dialog()
{
    taux_ = dialog_->get_taux();
    ui->label_taux_conversion->setText(create_taux_conv_label(taux_));
    display_convertion();
}

void MainWindow::open_dialog()
{
    dialog_->open();
}


void MainWindow::display_credits()
{
    QMessageBox::information(this, "GitHub", "https://github.com/JuicyBerries");
}

void MainWindow::display_convertion()
{
    ui->sb_dollars->setValue(ui->sb_euro->value() * taux_);
}

MainWindow::~MainWindow()
{
    delete ui;
}
