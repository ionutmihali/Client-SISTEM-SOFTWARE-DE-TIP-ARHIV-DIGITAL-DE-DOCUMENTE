/********************************************************************************
** Form generated from reading UI file 'detalii.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETALII_H
#define UI_DETALII_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_detalii
{
public:
    QListWidget *doc;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *EditUser;
    QPushButton *EditParola;
    QPushButton *EditAbonament;
    QPushButton *Card;
    QPushButton *Back;
    QPushButton *Exit;

    void setupUi(QWidget *detalii)
    {
        if (detalii->objectName().isEmpty())
            detalii->setObjectName(QString::fromUtf8("detalii"));
        detalii->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagini/d.ico"), QSize(), QIcon::Normal, QIcon::Off);
        detalii->setWindowIcon(icon);
        detalii->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(9, 9, 213, 255), stop:1 rgba(255, 255, 255, 255));"));
        doc = new QListWidget(detalii);
        doc->setObjectName(QString::fromUtf8("doc"));
        doc->setGeometry(QRect(50, 40, 551, 461));
        doc->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));
        layoutWidget = new QWidget(detalii);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(630, 160, 148, 247));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        EditUser = new QPushButton(layoutWidget);
        EditUser->setObjectName(QString::fromUtf8("EditUser"));
        EditUser->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));

        verticalLayout->addWidget(EditUser);

        EditParola = new QPushButton(layoutWidget);
        EditParola->setObjectName(QString::fromUtf8("EditParola"));
        EditParola->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));

        verticalLayout->addWidget(EditParola);

        EditAbonament = new QPushButton(layoutWidget);
        EditAbonament->setObjectName(QString::fromUtf8("EditAbonament"));
        EditAbonament->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));

        verticalLayout->addWidget(EditAbonament);

        Card = new QPushButton(layoutWidget);
        Card->setObjectName(QString::fromUtf8("Card"));
        Card->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));

        verticalLayout->addWidget(Card);

        Back = new QPushButton(detalii);
        Back->setObjectName(QString::fromUtf8("Back"));
        Back->setGeometry(QRect(660, 500, 83, 29));
        Back->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));
        Exit = new QPushButton(detalii);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(660, 540, 83, 29));
        Exit->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));

        retranslateUi(detalii);

        QMetaObject::connectSlotsByName(detalii);
    } // setupUi

    void retranslateUi(QWidget *detalii)
    {
        detalii->setWindowTitle(QCoreApplication::translate("detalii", "MyDrive", nullptr));
        EditUser->setText(QCoreApplication::translate("detalii", "Editeaza username", nullptr));
        EditParola->setText(QCoreApplication::translate("detalii", "Schimba parola", nullptr));
        EditAbonament->setText(QCoreApplication::translate("detalii", "Schimba abonament", nullptr));
        Card->setText(QCoreApplication::translate("detalii", "Adauga card", nullptr));
        Back->setText(QCoreApplication::translate("detalii", "Back", nullptr));
        Exit->setText(QCoreApplication::translate("detalii", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class detalii: public Ui_detalii {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETALII_H
