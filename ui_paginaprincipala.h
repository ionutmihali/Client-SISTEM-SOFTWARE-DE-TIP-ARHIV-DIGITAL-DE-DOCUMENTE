/********************************************************************************
** Form generated from reading UI file 'paginaprincipala.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGINAPRINCIPALA_H
#define UI_PAGINAPRINCIPALA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PaginaPrincipala
{
public:
    QWidget *widget;
    QPushButton *Exit;
    QLineEdit *search;
    QPushButton *cautare;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *mele;
    QPushButton *favorit;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *descarcat;
    QPushButton *privat;
    QPushButton *cos;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QPushButton *Logout;
    QPushButton *Detalii;

    void setupUi(QWidget *PaginaPrincipala)
    {
        if (PaginaPrincipala->objectName().isEmpty())
            PaginaPrincipala->setObjectName(QString::fromUtf8("PaginaPrincipala"));
        PaginaPrincipala->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagini/d.ico"), QSize(), QIcon::Normal, QIcon::Off);
        PaginaPrincipala->setWindowIcon(icon);
        PaginaPrincipala->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(9, 9, 213, 255), stop:1 rgba(255, 255, 255, 255));"));
        widget = new QWidget(PaginaPrincipala);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(180, 140, 381, 231));
        widget->setStyleSheet(QString::fromUtf8("image: url(:/imagini/p.jpg);"));
        Exit = new QPushButton(PaginaPrincipala);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(650, 490, 80, 29));
        Exit->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        search = new QLineEdit(PaginaPrincipala);
        search->setObjectName(QString::fromUtf8("search"));
        search->setGeometry(QRect(190, 80, 351, 28));
        search->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        cautare = new QPushButton(PaginaPrincipala);
        cautare->setObjectName(QString::fromUtf8("cautare"));
        cautare->setGeometry(QRect(560, 80, 81, 21));
        cautare->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        layoutWidget = new QWidget(PaginaPrincipala);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(170, 380, 399, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        mele = new QPushButton(layoutWidget);
        mele->setObjectName(QString::fromUtf8("mele"));
        mele->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));

        horizontalLayout->addWidget(mele);

        favorit = new QPushButton(layoutWidget);
        favorit->setObjectName(QString::fromUtf8("favorit"));
        favorit->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));

        horizontalLayout->addWidget(favorit);

        layoutWidget1 = new QWidget(PaginaPrincipala);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(170, 430, 406, 31));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        descarcat = new QPushButton(layoutWidget1);
        descarcat->setObjectName(QString::fromUtf8("descarcat"));
        descarcat->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));

        horizontalLayout_2->addWidget(descarcat);

        privat = new QPushButton(layoutWidget1);
        privat->setObjectName(QString::fromUtf8("privat"));
        privat->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));

        horizontalLayout_2->addWidget(privat);

        cos = new QPushButton(layoutWidget1);
        cos->setObjectName(QString::fromUtf8("cos"));
        cos->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));

        horizontalLayout_2->addWidget(cos);

        widget1 = new QWidget(PaginaPrincipala);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(30, 20, 88, 67));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Logout = new QPushButton(widget1);
        Logout->setObjectName(QString::fromUtf8("Logout"));
        Logout->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));

        verticalLayout->addWidget(Logout);

        Detalii = new QPushButton(widget1);
        Detalii->setObjectName(QString::fromUtf8("Detalii"));
        Detalii->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));

        verticalLayout->addWidget(Detalii);


        retranslateUi(PaginaPrincipala);

        QMetaObject::connectSlotsByName(PaginaPrincipala);
    } // setupUi

    void retranslateUi(QWidget *PaginaPrincipala)
    {
        PaginaPrincipala->setWindowTitle(QCoreApplication::translate("PaginaPrincipala", "MyDrive", nullptr));
        Exit->setText(QCoreApplication::translate("PaginaPrincipala", "Exit", nullptr));
        search->setPlaceholderText(QCoreApplication::translate("PaginaPrincipala", "Cauta document", nullptr));
        cautare->setText(QCoreApplication::translate("PaginaPrincipala", "Cautare", nullptr));
        mele->setText(QCoreApplication::translate("PaginaPrincipala", "Documentele mele", nullptr));
        favorit->setText(QCoreApplication::translate("PaginaPrincipala", "Documente favorite", nullptr));
        descarcat->setText(QCoreApplication::translate("PaginaPrincipala", "Documente descarcate", nullptr));
        privat->setText(QCoreApplication::translate("PaginaPrincipala", "Documente private", nullptr));
        cos->setText(QCoreApplication::translate("PaginaPrincipala", "Cos", nullptr));
        Logout->setText(QCoreApplication::translate("PaginaPrincipala", "Logout", nullptr));
        Detalii->setText(QCoreApplication::translate("PaginaPrincipala", "Detalii cont", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PaginaPrincipala: public Ui_PaginaPrincipala {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGINAPRINCIPALA_H
