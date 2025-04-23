#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->button_0, &QPushButton::clicked, this, [=]() { displayNumber(QString("0")); });
    connect(ui->button_1, &QPushButton::clicked, this, [=]() { displayNumber(QString("1")); });
    connect(ui->button_2, &QPushButton::clicked, this, [=]() { displayNumber(QString("2")); });
    connect(ui->button_3, &QPushButton::clicked, this, [=]() { displayNumber(QString("3")); });
    connect(ui->button_4, &QPushButton::clicked, this, [=]() { displayNumber(QString("4")); });
    connect(ui->button_5, &QPushButton::clicked, this, [=]() { displayNumber(QString("5")); });
    connect(ui->button_6, &QPushButton::clicked, this, [=]() { displayNumber(QString("6")); });
    connect(ui->button_7, &QPushButton::clicked, this, [=]() { displayNumber(QString("7")); });
    connect(ui->button_8, &QPushButton::clicked, this, [=]() { displayNumber(QString("8")); });
    connect(ui->button_9, &QPushButton::clicked, this, [=]() { displayNumber(QString("9")); });

    connect(ui->button_add, &QPushButton::clicked, this, [=]() { displayOpe(QString("+")); });
    connect(ui->button_minus, &QPushButton::clicked, this, [=]() { displayOpe(QString("-")); });
    connect(ui->button_div, &QPushButton::clicked, this, [=]() { displayOpe(QString("/")); });
    connect(ui->button_mul, &QPushButton::clicked, this, [=]() { displayOpe(QString("x")); });

    connect(ui->button_C, &QPushButton::clicked, this, &MainWindow::clearLast);
    connect(ui->button_CE, &QPushButton::clicked, this, &MainWindow::clearDisplay);

    connect(ui->button_equal, &QPushButton::clicked, this, &MainWindow::displayResult);
}

void MainWindow::displayNumber(const QString& num) {
    if (block.getInput().size() < 20) {
        block.append(num);
        ui->display_result->setText(block.getInput());
    }
}

void MainWindow::displayOpe(const QString& ope) {
    if (!block.getOperatorPresence() && block.getInput().size() > 0 && block.getInput().size() < 19) {
        block.setOperatorPresence(true);
        block.append(ope);
    }
    ui->display_result->setText(block.getInput());
}


void MainWindow::clearLast() {
    if (block.getInput().size() > 1) {
        block.pop();
        ui->display_result->setText(block.getInput());
    } else {
        block.clear();
        ui->display_result->setText("0");
    }

}

void MainWindow::clearDisplay() {
    block.clear();
    ui->display_result->setText("0");
}

void MainWindow::displayResult() {
    if (block.getOperatorPresence()) {
        block.evaluate();
        ui->display_result->setText(block.getResult());
    }
}

MainWindow::~MainWindow() {
    delete ui;
}
