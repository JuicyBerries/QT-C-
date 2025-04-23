/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *display_result;
    QGridLayout *gridLayout;
    QPushButton *button_3;
    QPushButton *button_8;
    QPushButton *button_div;
    QPushButton *button_9;
    QPushButton *button_7;
    QPushButton *button_4;
    QPushButton *button_CE;
    QPushButton *button_add;
    QPushButton *button_C;
    QPushButton *button_mul;
    QPushButton *button_equal;
    QPushButton *button_6;
    QPushButton *button_minus;
    QPushButton *button_1;
    QPushButton *button_2;
    QPushButton *button_5;
    QPushButton *button_0;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(879, 483);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        display_result = new QLabel(centralwidget);
        display_result->setObjectName("display_result");
        QFont font;
        font.setFamilies({QString::fromUtf8("LM Sans 10")});
        font.setPointSize(60);
        font.setBold(true);
        font.setKerning(true);
        display_result->setFont(font);
        display_result->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        display_result->setMargin(10);

        verticalLayout->addWidget(display_result);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        button_3 = new QPushButton(centralwidget);
        button_3->setObjectName("button_3");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(button_3->sizePolicy().hasHeightForWidth());
        button_3->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button_3, 4, 2, 1, 1);

        button_8 = new QPushButton(centralwidget);
        button_8->setObjectName("button_8");
        sizePolicy.setHeightForWidth(button_8->sizePolicy().hasHeightForWidth());
        button_8->setSizePolicy(sizePolicy);
        button_8->setIconSize(QSize(16, 16));

        gridLayout->addWidget(button_8, 0, 1, 1, 1);

        button_div = new QPushButton(centralwidget);
        button_div->setObjectName("button_div");
        sizePolicy.setHeightForWidth(button_div->sizePolicy().hasHeightForWidth());
        button_div->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button_div, 3, 3, 1, 1);

        button_9 = new QPushButton(centralwidget);
        button_9->setObjectName("button_9");
        sizePolicy.setHeightForWidth(button_9->sizePolicy().hasHeightForWidth());
        button_9->setSizePolicy(sizePolicy);
        button_9->setIconSize(QSize(16, 16));

        gridLayout->addWidget(button_9, 0, 2, 1, 1);

        button_7 = new QPushButton(centralwidget);
        button_7->setObjectName("button_7");
        sizePolicy.setHeightForWidth(button_7->sizePolicy().hasHeightForWidth());
        button_7->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button_7, 0, 0, 1, 1);

        button_4 = new QPushButton(centralwidget);
        button_4->setObjectName("button_4");
        sizePolicy.setHeightForWidth(button_4->sizePolicy().hasHeightForWidth());
        button_4->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button_4, 3, 0, 1, 1);

        button_CE = new QPushButton(centralwidget);
        button_CE->setObjectName("button_CE");
        sizePolicy.setHeightForWidth(button_CE->sizePolicy().hasHeightForWidth());
        button_CE->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button_CE, 0, 3, 1, 1);

        button_add = new QPushButton(centralwidget);
        button_add->setObjectName("button_add");
        sizePolicy.setHeightForWidth(button_add->sizePolicy().hasHeightForWidth());
        button_add->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button_add, 5, 3, 1, 1);

        button_C = new QPushButton(centralwidget);
        button_C->setObjectName("button_C");
        sizePolicy.setHeightForWidth(button_C->sizePolicy().hasHeightForWidth());
        button_C->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button_C, 0, 4, 1, 1);

        button_mul = new QPushButton(centralwidget);
        button_mul->setObjectName("button_mul");
        sizePolicy.setHeightForWidth(button_mul->sizePolicy().hasHeightForWidth());
        button_mul->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button_mul, 3, 4, 1, 1);

        button_equal = new QPushButton(centralwidget);
        button_equal->setObjectName("button_equal");
        sizePolicy.setHeightForWidth(button_equal->sizePolicy().hasHeightForWidth());
        button_equal->setSizePolicy(sizePolicy);
        button_equal->setAutoDefault(false);

        gridLayout->addWidget(button_equal, 4, 4, 2, 1);

        button_6 = new QPushButton(centralwidget);
        button_6->setObjectName("button_6");
        sizePolicy.setHeightForWidth(button_6->sizePolicy().hasHeightForWidth());
        button_6->setSizePolicy(sizePolicy);
        button_6->setIconSize(QSize(16, 16));
        button_6->setCheckable(false);
        button_6->setFlat(false);

        gridLayout->addWidget(button_6, 3, 2, 1, 1);

        button_minus = new QPushButton(centralwidget);
        button_minus->setObjectName("button_minus");
        sizePolicy.setHeightForWidth(button_minus->sizePolicy().hasHeightForWidth());
        button_minus->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button_minus, 4, 3, 1, 1);

        button_1 = new QPushButton(centralwidget);
        button_1->setObjectName("button_1");
        sizePolicy.setHeightForWidth(button_1->sizePolicy().hasHeightForWidth());
        button_1->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button_1, 4, 0, 1, 1);

        button_2 = new QPushButton(centralwidget);
        button_2->setObjectName("button_2");
        sizePolicy.setHeightForWidth(button_2->sizePolicy().hasHeightForWidth());
        button_2->setSizePolicy(sizePolicy);
        button_2->setIconSize(QSize(16, 16));

        gridLayout->addWidget(button_2, 4, 1, 1, 1);

        button_5 = new QPushButton(centralwidget);
        button_5->setObjectName("button_5");
        sizePolicy.setHeightForWidth(button_5->sizePolicy().hasHeightForWidth());
        button_5->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button_5, 3, 1, 1, 1);

        button_0 = new QPushButton(centralwidget);
        button_0->setObjectName("button_0");
        sizePolicy.setHeightForWidth(button_0->sizePolicy().hasHeightForWidth());
        button_0->setSizePolicy(sizePolicy);

        gridLayout->addWidget(button_0, 5, 0, 1, 3);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        button_6->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        display_result->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button_CE->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        button_add->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        button_C->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        button_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        button_equal->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
