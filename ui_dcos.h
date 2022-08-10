/********************************************************************************
** Form generated from reading UI file 'dcos.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DCOS_H
#define UI_DCOS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dcos
{
public:
    QListWidget *doc;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *Restaureaza;
    QPushButton *Sterge;
    QPushButton *Goleste;
    QPushButton *Back;
    QPushButton *Exit;

    void setupUi(QWidget *dcos)
    {
        if (dcos->objectName().isEmpty())
            dcos->setObjectName(QString::fromUtf8("dcos"));
        dcos->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagini/d.ico"), QSize(), QIcon::Normal, QIcon::Off);
        dcos->setWindowIcon(icon);
        dcos->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(9, 9, 213, 255), stop:1 rgba(255, 255, 255, 255));"));
        doc = new QListWidget(dcos);
        doc->setObjectName(QString::fromUtf8("doc"));
        doc->setGeometry(QRect(50, 30, 551, 461));
        doc->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));
        layoutWidget = new QWidget(dcos);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(630, 150, 134, 247));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Restaureaza = new QPushButton(layoutWidget);
        Restaureaza->setObjectName(QString::fromUtf8("Restaureaza"));
        Restaureaza->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));

        verticalLayout->addWidget(Restaureaza);

        Sterge = new QPushButton(layoutWidget);
        Sterge->setObjectName(QString::fromUtf8("Sterge"));
        Sterge->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));

        verticalLayout->addWidget(Sterge);

        Goleste = new QPushButton(layoutWidget);
        Goleste->setObjectName(QString::fromUtf8("Goleste"));
        Goleste->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));

        verticalLayout->addWidget(Goleste);

        Back = new QPushButton(dcos);
        Back->setObjectName(QString::fromUtf8("Back"));
        Back->setGeometry(QRect(660, 490, 83, 29));
        Back->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));
        Exit = new QPushButton(dcos);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(660, 530, 83, 29));
        Exit->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));

        retranslateUi(dcos);

        QMetaObject::connectSlotsByName(dcos);
    } // setupUi

    void retranslateUi(QWidget *dcos)
    {
        dcos->setWindowTitle(QCoreApplication::translate("dcos", "MyDrive", nullptr));
        Restaureaza->setText(QCoreApplication::translate("dcos", "Restaureaza", nullptr));
        Sterge->setText(QCoreApplication::translate("dcos", "Sterge definitiv", nullptr));
        Goleste->setText(QCoreApplication::translate("dcos", "Goleste cos", nullptr));
        Back->setText(QCoreApplication::translate("dcos", "Back", nullptr));
        Exit->setText(QCoreApplication::translate("dcos", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dcos: public Ui_dcos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DCOS_H
