#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "block.h"
#include <QMainWindow>

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

        void displayNumber(const QString&);
        void displayOpe(const QString&);
        void displayResult();
        void clearDisplay();
        void clearLast();


        ~MainWindow();

    private:
        Ui::MainWindow *ui;
        Block block;
};
#endif // MAINWINDOW_H

