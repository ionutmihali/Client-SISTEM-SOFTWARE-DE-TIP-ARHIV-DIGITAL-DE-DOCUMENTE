/********************************************************************************
** Form generated from reading UI file 'dfav.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DFAV_H
#define UI_DFAV_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dfav
{
public:
    QListWidget *doc;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *VeziDoc;
    QPushButton *Folder;
    QPushButton *Muta;
    QPushButton *Sterge;
    QPushButton *Exit;
    QPushButton *Back;

    void setupUi(QWidget *dfav)
    {
        if (dfav->objectName().isEmpty())
            dfav->setObjectName(QString::fromUtf8("dfav"));
        dfav->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagini/d.ico"), QSize(), QIcon::Normal, QIcon::Off);
        dfav->setWindowIcon(icon);
        dfav->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(9, 9, 213, 255), stop:1 rgba(255, 255, 255, 255));"));
        doc = new QListWidget(dfav);
        doc->setObjectName(QString::fromUtf8("doc"));
        doc->setGeometry(QRect(60, 40, 551, 461));
        doc->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));
        layoutWidget = new QWidget(dfav);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(640, 160, 134, 247));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
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

        Muta = new QPushButton(layoutWidget);
        Muta->setObjectName(QString::fromUtf8("Muta"));
        Muta->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));

        verticalLayout->addWidget(Muta);

        Sterge = new QPushButton(layoutWidget);
        Sterge->setObjectName(QString::fromUtf8("Sterge"));
        Sterge->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));

        verticalLayout->addWidget(Sterge);

        Exit = new QPushButton(dfav);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(670, 540, 83, 29));
        Exit->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));
        Back = new QPushButton(dfav);
        Back->setObjectName(QString::fromUtf8("Back"));
        Back->setGeometry(QRect(670, 500, 83, 29));
        Back->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));

        retranslateUi(dfav);

        QMetaObject::connectSlotsByName(dfav);
    } // setupUi

    void retranslateUi(QWidget *dfav)
    {
        dfav->setWindowTitle(QCoreApplication::translate("dfav", "MyDrive", nullptr));
        VeziDoc->setText(QCoreApplication::translate("dfav", "Deschide", nullptr));
        Folder->setText(QCoreApplication::translate("dfav", "Creaza folder", nullptr));
        Muta->setText(QCoreApplication::translate("dfav", "Muta", nullptr));
        Sterge->setText(QCoreApplication::translate("dfav", "Demarcheaza favorit", nullptr));
        Exit->setText(QCoreApplication::translate("dfav", "Exit", nullptr));
        Back->setText(QCoreApplication::translate("dfav", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dfav: public Ui_dfav {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DFAV_H
