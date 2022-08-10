/********************************************************************************
** Form generated from reading UI file 'dmele.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DMELE_H
#define UI_DMELE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DMele
{
public:
    QListWidget *doc;
    QPushButton *Exit;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *Adauga;
    QPushButton *VeziDoc;
    QPushButton *Folder;
    QPushButton *Fav;
    QPushButton *MutaDoc;
    QPushButton *Status;
    QPushButton *Sterge;
    QPushButton *Back;

    void setupUi(QWidget *DMele)
    {
        if (DMele->objectName().isEmpty())
            DMele->setObjectName(QString::fromUtf8("DMele"));
        DMele->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagini/d.ico"), QSize(), QIcon::Normal, QIcon::Off);
        DMele->setWindowIcon(icon);
        DMele->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(9, 9, 213, 255), stop:1 rgba(255, 255, 255, 255));"));
        doc = new QListWidget(DMele);
        doc->setObjectName(QString::fromUtf8("doc"));
        doc->setGeometry(QRect(50, 40, 551, 461));
        doc->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));
        Exit = new QPushButton(DMele);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(660, 540, 83, 29));
        Exit->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));
        layoutWidget = new QWidget(DMele);
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

        Folder = new QPushButton(layoutWidget);
        Folder->setObjectName(QString::fromUtf8("Folder"));
        Folder->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));

        verticalLayout->addWidget(Folder);

        Fav = new QPushButton(layoutWidget);
        Fav->setObjectName(QString::fromUtf8("Fav"));
        Fav->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));

        verticalLayout->addWidget(Fav);

        MutaDoc = new QPushButton(layoutWidget);
        MutaDoc->setObjectName(QString::fromUtf8("MutaDoc"));
        MutaDoc->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));

        verticalLayout->addWidget(MutaDoc);

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

        Back = new QPushButton(DMele);
        Back->setObjectName(QString::fromUtf8("Back"));
        Back->setGeometry(QRect(660, 500, 83, 29));
        Back->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));

        retranslateUi(DMele);

        QMetaObject::connectSlotsByName(DMele);
    } // setupUi

    void retranslateUi(QWidget *DMele)
    {
        DMele->setWindowTitle(QCoreApplication::translate("DMele", "MyDrive", nullptr));
        Exit->setText(QCoreApplication::translate("DMele", "Exit", nullptr));
        Adauga->setText(QCoreApplication::translate("DMele", "Adauga document", nullptr));
        VeziDoc->setText(QCoreApplication::translate("DMele", "Deschide", nullptr));
        Folder->setText(QCoreApplication::translate("DMele", "Creaza folder", nullptr));
        Fav->setText(QCoreApplication::translate("DMele", "Seteaza ca favorit", nullptr));
        MutaDoc->setText(QCoreApplication::translate("DMele", "Muta", nullptr));
        Status->setText(QCoreApplication::translate("DMele", "Status", nullptr));
        Sterge->setText(QCoreApplication::translate("DMele", "Sterge", nullptr));
        Back->setText(QCoreApplication::translate("DMele", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DMele: public Ui_DMele {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DMELE_H
