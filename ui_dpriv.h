/********************************************************************************
** Form generated from reading UI file 'dpriv.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DPRIV_H
#define UI_DPRIV_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dpriv
{
public:
    QListWidget *doc;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *Adauga;
    QPushButton *VeziDoc;
    QPushButton *Status;
    QPushButton *Sterge;
    QPushButton *Exit;
    QPushButton *Back;

    void setupUi(QWidget *dpriv)
    {
        if (dpriv->objectName().isEmpty())
            dpriv->setObjectName(QString::fromUtf8("dpriv"));
        dpriv->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagini/d.ico"), QSize(), QIcon::Normal, QIcon::Off);
        dpriv->setWindowIcon(icon);
        dpriv->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(9, 9, 213, 255), stop:1 rgba(255, 255, 255, 255));"));
        doc = new QListWidget(dpriv);
        doc->setObjectName(QString::fromUtf8("doc"));
        doc->setGeometry(QRect(50, 40, 551, 461));
        doc->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));
        layoutWidget = new QWidget(dpriv);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(630, 160, 134, 247));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Adauga = new QPushButton(layoutWidget);
        Adauga->setObjectName(QString::fromUtf8("Adauga"));
        Adauga->setAutoFillBackground(false);
        Adauga->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));

        verticalLayout->addWidget(Adauga);

        VeziDoc = new QPushButton(layoutWidget);
        VeziDoc->setObjectName(QString::fromUtf8("VeziDoc"));
        VeziDoc->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));

        verticalLayout->addWidget(VeziDoc);

        Status = new QPushButton(layoutWidget);
        Status->setObjectName(QString::fromUtf8("Status"));
        Status->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));

        verticalLayout->addWidget(Status);

        Sterge = new QPushButton(layoutWidget);
        Sterge->setObjectName(QString::fromUtf8("Sterge"));
        Sterge->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));

        verticalLayout->addWidget(Sterge);

        Exit = new QPushButton(dpriv);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(660, 540, 83, 29));
        Exit->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));
        Back = new QPushButton(dpriv);
        Back->setObjectName(QString::fromUtf8("Back"));
        Back->setGeometry(QRect(660, 500, 83, 29));
        Back->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));

        retranslateUi(dpriv);

        QMetaObject::connectSlotsByName(dpriv);
    } // setupUi

    void retranslateUi(QWidget *dpriv)
    {
        dpriv->setWindowTitle(QCoreApplication::translate("dpriv", "MyDrive", nullptr));
        Adauga->setText(QCoreApplication::translate("dpriv", "Adauga document", nullptr));
        VeziDoc->setText(QCoreApplication::translate("dpriv", "Deschide", nullptr));
        Status->setText(QCoreApplication::translate("dpriv", "Status", nullptr));
        Sterge->setText(QCoreApplication::translate("dpriv", "Sterge", nullptr));
        Exit->setText(QCoreApplication::translate("dpriv", "Exit", nullptr));
        Back->setText(QCoreApplication::translate("dpriv", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dpriv: public Ui_dpriv {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DPRIV_H
