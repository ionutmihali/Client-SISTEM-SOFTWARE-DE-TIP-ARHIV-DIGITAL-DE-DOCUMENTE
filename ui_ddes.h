/********************************************************************************
** Form generated from reading UI file 'ddes.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DDES_H
#define UI_DDES_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ddes
{
public:
    QListWidget *doc;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *VeziDoc;
    QPushButton *Folder;
    QPushButton *Muta;
    QPushButton *Back;
    QPushButton *Exit;

    void setupUi(QWidget *ddes)
    {
        if (ddes->objectName().isEmpty())
            ddes->setObjectName(QString::fromUtf8("ddes"));
        ddes->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagini/d.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ddes->setWindowIcon(icon);
        ddes->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(9, 9, 213, 255), stop:1 rgba(255, 255, 255, 255));"));
        doc = new QListWidget(ddes);
        doc->setObjectName(QString::fromUtf8("doc"));
        doc->setGeometry(QRect(40, 40, 551, 461));
        doc->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));
        layoutWidget = new QWidget(ddes);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(620, 160, 134, 247));
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

        Back = new QPushButton(ddes);
        Back->setObjectName(QString::fromUtf8("Back"));
        Back->setGeometry(QRect(650, 500, 83, 29));
        Back->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 170, 255);"));
        Exit = new QPushButton(ddes);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(650, 540, 83, 29));
        Exit->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(0, 170, 255);"));

        retranslateUi(ddes);

        QMetaObject::connectSlotsByName(ddes);
    } // setupUi

    void retranslateUi(QWidget *ddes)
    {
        ddes->setWindowTitle(QCoreApplication::translate("ddes", "MyDrive", nullptr));
        VeziDoc->setText(QCoreApplication::translate("ddes", "Deschide", nullptr));
        Folder->setText(QCoreApplication::translate("ddes", "Creaza folder", nullptr));
        Muta->setText(QCoreApplication::translate("ddes", "Muta", nullptr));
        Back->setText(QCoreApplication::translate("ddes", "Back", nullptr));
        Exit->setText(QCoreApplication::translate("ddes", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ddes: public Ui_ddes {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DDES_H
