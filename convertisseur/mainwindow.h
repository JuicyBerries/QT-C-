#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"

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
    void display_convertion();
    void display_credits();
    void open_dialog();
    void get_taux_of_dialog();
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Dialog *dialog_;
    double taux_;
};
#endif // MAINWINDOW_H
