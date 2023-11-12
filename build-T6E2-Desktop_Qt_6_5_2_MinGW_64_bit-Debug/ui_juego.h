/********************************************************************************
** Form generated from reading UI file 'juego.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JUEGO_H
#define UI_JUEGO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Juego
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;

    void setupUi(QMainWindow *Juego)
    {
        if (Juego->objectName().isEmpty())
            Juego->setObjectName("Juego");
        Juego->setEnabled(true);
        Juego->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(200);
        sizePolicy.setVerticalStretch(200);
        sizePolicy.setHeightForWidth(Juego->sizePolicy().hasHeightForWidth());
        Juego->setSizePolicy(sizePolicy);
        Juego->setMinimumSize(QSize(800, 600));
        Juego->setStyleSheet(QString::fromUtf8("background-image: url(:/new/prefix1/fondoInicio.jpg);"));
        centralwidget = new QWidget(Juego);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(true);
        Juego->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Juego);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        Juego->setMenuBar(menubar);

        retranslateUi(Juego);

        QMetaObject::connectSlotsByName(Juego);
    } // setupUi

    void retranslateUi(QMainWindow *Juego)
    {
        Juego->setWindowTitle(QCoreApplication::translate("Juego", "Juego", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Juego: public Ui_Juego {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUEGO_H
