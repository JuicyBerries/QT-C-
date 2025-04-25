#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->pushButton, &QPushButton::clicked, this, &Dialog::read_taux);
}

void Dialog::read_taux()
{
    taux_dialog_ = ui->doubleSpinBox->value();
    close();
}

double Dialog::get_taux()
{
    return taux_dialog_;
}

Dialog::~Dialog()
{
    delete ui;
}
