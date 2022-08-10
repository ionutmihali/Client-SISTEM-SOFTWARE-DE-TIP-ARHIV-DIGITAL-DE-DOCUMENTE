/********************************************************************************
** Form generated from reading UI file 'autentif.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUTENTIF_H
#define UI_AUTENTIF_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Autentif
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QPushButton *Exit;
    QPushButton *AmUitat;

    void setupUi(QWidget *Autentif)
    {
        if (Autentif->objectName().isEmpty())
            Autentif->setObjectName(QString::fromUtf8("Autentif"));
        Autentif->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagini/d.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Autentif->setWindowIcon(icon);
        Autentif->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(9, 9, 213, 255), stop:1 rgba(255, 255, 255, 255));"));
        pushButton = new QPushButton(Autentif);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(320, 440, 94, 29));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 85, 255);"));
        lineEdit = new QLineEdit(Autentif);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(242, 350, 271, 28));
        lineEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        lineEdit->setEchoMode(QLineEdit::Password);
        lineEdit_2 = new QLineEdit(Autentif);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(240, 270, 271, 28));
        lineEdit_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        textBrowser = new QTextBrowser(Autentif);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(240, 220, 91, 31));
        textBrowser->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        textBrowser_2 = new QTextBrowser(Autentif);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(240, 310, 91, 31));
        textBrowser_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        Exit = new QPushButton(Autentif);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(650, 530, 83, 29));
        Exit->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        AmUitat = new QPushButton(Autentif);
        AmUitat->setObjectName(QString::fromUtf8("AmUitat"));
        AmUitat->setGeometry(QRect(290, 400, 161, 21));
        AmUitat->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));

        retranslateUi(Autentif);

        QMetaObject::connectSlotsByName(Autentif);
    } // setupUi

    void retranslateUi(QWidget *Autentif)
    {
        Autentif->setWindowTitle(QCoreApplication::translate("Autentif", "MyDrive", nullptr));
        pushButton->setText(QCoreApplication::translate("Autentif", "Autentificare", nullptr));
        lineEdit->setText(QString());
        lineEdit_2->setText(QString());
        textBrowser->setHtml(QCoreApplication::translate("Autentif", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Username</p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("Autentif", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Parola</p></body></html>", nullptr));
        Exit->setText(QCoreApplication::translate("Autentif", "Exit", nullptr));
        AmUitat->setText(QCoreApplication::translate("Autentif", "Am uitat parola", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Autentif: public Ui_Autentif {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUTENTIF_H
