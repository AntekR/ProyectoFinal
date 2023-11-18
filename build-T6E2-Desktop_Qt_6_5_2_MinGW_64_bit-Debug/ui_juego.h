/********************************************************************************
** Form generated from reading UI file 'juego.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JUEGO_H
#define UI_JUEGO_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Juego
{
public:
    QWidget *centralwidget;
    QPushButton *bottonComenzar;

    void setupUi(QMainWindow *Juego)
    {
        if (Juego->objectName().isEmpty())
            Juego->setObjectName("Juego");
        Juego->setEnabled(true);
        Juego->resize(800, 800);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(200);
        sizePolicy.setVerticalStretch(200);
        sizePolicy.setHeightForWidth(Juego->sizePolicy().hasHeightForWidth());
        Juego->setSizePolicy(sizePolicy);
        Juego->setMinimumSize(QSize(800, 800));
        Juego->setAutoFillBackground(false);
        Juego->setStyleSheet(QString::fromUtf8("background-image: url(:/fotos/fondoInicio.jpg);\n"
"font: 9pt \"Franklin Gothic Heavy\";"));
        Juego->setLocale(QLocale(QLocale::Spanish, QLocale::Spain));
        Juego->setUnifiedTitleAndToolBarOnMac(false);
        centralwidget = new QWidget(Juego);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(true);
        bottonComenzar = new QPushButton(centralwidget);
        bottonComenzar->setObjectName("bottonComenzar");
        bottonComenzar->setGeometry(QRect(370, 400, 75, 23));
        bottonComenzar->setStyleSheet(QString::fromUtf8("background-color: rgb(255,255,255);"));
        Juego->setCentralWidget(centralwidget);

        retranslateUi(Juego);

        QMetaObject::connectSlotsByName(Juego);
    } // setupUi

    void retranslateUi(QMainWindow *Juego)
    {
        Juego->setWindowTitle(QCoreApplication::translate("Juego", "T6E2 Rick and Morty", nullptr));
        bottonComenzar->setText(QCoreApplication::translate("Juego", "Comenzar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Juego: public Ui_Juego {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JUEGO_H
