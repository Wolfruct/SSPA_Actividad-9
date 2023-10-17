/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *spinBox;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_4;
    QSpinBox *spinBox_2;
    QLabel *label_6;
    QSpinBox *spinBox_3;
    QLabel *label_5;
    QSpinBox *spinBox_4;
    QLabel *label_7;
    QSpinBox *spinBox_5;
    QLabel *label_8;
    QSpinBox *spinBox_6;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QFrame *frame_2;
    QPlainTextEdit *plainTextEdit;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(20, 10, 151, 431));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(frame);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        label_2 = new QLabel(frame);
        label_2->setObjectName("label_2");

        verticalLayout->addWidget(label_2);

        spinBox = new QSpinBox(frame);
        spinBox->setObjectName("spinBox");

        verticalLayout->addWidget(spinBox);

        label_3 = new QLabel(frame);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        doubleSpinBox = new QDoubleSpinBox(frame);
        doubleSpinBox->setObjectName("doubleSpinBox");

        verticalLayout->addWidget(doubleSpinBox);

        label_4 = new QLabel(frame);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        spinBox_2 = new QSpinBox(frame);
        spinBox_2->setObjectName("spinBox_2");

        verticalLayout->addWidget(spinBox_2);

        label_6 = new QLabel(frame);
        label_6->setObjectName("label_6");

        verticalLayout->addWidget(label_6);

        spinBox_3 = new QSpinBox(frame);
        spinBox_3->setObjectName("spinBox_3");

        verticalLayout->addWidget(spinBox_3);

        label_5 = new QLabel(frame);
        label_5->setObjectName("label_5");

        verticalLayout->addWidget(label_5);

        spinBox_4 = new QSpinBox(frame);
        spinBox_4->setObjectName("spinBox_4");

        verticalLayout->addWidget(spinBox_4);

        label_7 = new QLabel(frame);
        label_7->setObjectName("label_7");

        verticalLayout->addWidget(label_7);

        spinBox_5 = new QSpinBox(frame);
        spinBox_5->setObjectName("spinBox_5");

        verticalLayout->addWidget(spinBox_5);

        label_8 = new QLabel(frame);
        label_8->setObjectName("label_8");

        verticalLayout->addWidget(label_8);

        spinBox_6 = new QSpinBox(frame);
        spinBox_6->setObjectName("spinBox_6");

        verticalLayout->addWidget(spinBox_6);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(200, 60, 241, 191));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        plainTextEdit = new QPlainTextEdit(frame_2);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(10, 60, 221, 121));
        pushButton = new QPushButton(frame_2);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 20, 80, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(pushButton, &QPushButton::clicked, plainTextEdit, qOverload<>(&QPlainTextEdit::update));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">Capturar Neurona</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "ID:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Voltaje:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Posici\303\263n x:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Posici\303\263n y:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Red:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Green:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Blue:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "Insertar al inicio", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Insertar al final", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Mostrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
