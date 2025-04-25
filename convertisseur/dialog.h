#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(QWidget *parent = nullptr);
    void read_taux() ;
    double get_taux();
    ~Dialog();

private:
    Ui::Dialog *ui;
    double taux_dialog_;
};

#endif // DIALOG_H
