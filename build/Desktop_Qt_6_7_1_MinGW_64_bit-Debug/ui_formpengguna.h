/********************************************************************************
** Form generated from reading UI file 'formpengguna.ui'
**
** Created by: Qt User Interface Compiler version 6.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMPENGGUNA_H
#define UI_FORMPENGGUNA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_formPengguna
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *formPengguna)
    {
        if (formPengguna->objectName().isEmpty())
            formPengguna->setObjectName("formPengguna");
        formPengguna->resize(800, 600);
        centralwidget = new QWidget(formPengguna);
        centralwidget->setObjectName("centralwidget");
        formPengguna->setCentralWidget(centralwidget);
        menubar = new QMenuBar(formPengguna);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 17));
        formPengguna->setMenuBar(menubar);
        statusbar = new QStatusBar(formPengguna);
        statusbar->setObjectName("statusbar");
        formPengguna->setStatusBar(statusbar);

        retranslateUi(formPengguna);

        QMetaObject::connectSlotsByName(formPengguna);
    } // setupUi

    void retranslateUi(QMainWindow *formPengguna)
    {
        formPengguna->setWindowTitle(QCoreApplication::translate("formPengguna", "formPengguna", nullptr));
    } // retranslateUi

};

namespace Ui {
    class formPengguna: public Ui_formPengguna {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMPENGGUNA_H
