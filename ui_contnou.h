/********************************************************************************
** Form generated from reading UI file 'contnou.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTNOU_H
#define UI_CONTNOU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ContNou
{
public:
    QPushButton *Cont;
    QLineEdit *nume;
    QTextEdit *textEdit;
    QTextEdit *p;
    QLineEdit *prenume;
    QTextEdit *user;
    QLineEdit *username;
    QTextEdit *parola;
    QLineEdit *parola_2;
    QPushButton *Exit;

    void setupUi(QWidget *ContNou)
    {
        if (ContNou->objectName().isEmpty())
            ContNou->setObjectName(QString::fromUtf8("ContNou"));
        ContNou->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagini/d.ico"), QSize(), QIcon::Normal, QIcon::Off);
        ContNou->setWindowIcon(icon);
        ContNou->setStyleSheet(QString::fromUtf8("background-color: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(9, 9, 213, 255), stop:1 rgba(255, 255, 255, 255));"));
        Cont = new QPushButton(ContNou);
        Cont->setObjectName(QString::fromUtf8("Cont"));
        Cont->setGeometry(QRect(340, 480, 83, 29));
        Cont->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        nume = new QLineEdit(ContNou);
        nume->setObjectName(QString::fromUtf8("nume"));
        nume->setGeometry(QRect(220, 130, 341, 28));
        nume->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        textEdit = new QTextEdit(ContNou);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(220, 80, 71, 31));
        textEdit->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        p = new QTextEdit(ContNou);
        p->setObjectName(QString::fromUtf8("p"));
        p->setGeometry(QRect(220, 180, 91, 31));
        p->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        prenume = new QLineEdit(ContNou);
        prenume->setObjectName(QString::fromUtf8("prenume"));
        prenume->setGeometry(QRect(220, 230, 341, 28));
        prenume->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        user = new QTextEdit(ContNou);
        user->setObjectName(QString::fromUtf8("user"));
        user->setGeometry(QRect(220, 280, 81, 31));
        user->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        username = new QLineEdit(ContNou);
        username->setObjectName(QString::fromUtf8("username"));
        username->setGeometry(QRect(220, 330, 341, 28));
        username->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        parola = new QTextEdit(ContNou);
        parola->setObjectName(QString::fromUtf8("parola"));
        parola->setGeometry(QRect(220, 380, 51, 31));
        parola->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        parola_2 = new QLineEdit(ContNou);
        parola_2->setObjectName(QString::fromUtf8("parola_2"));
        parola_2->setGeometry(QRect(220, 430, 341, 28));
        parola_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        parola_2->setEchoMode(QLineEdit::Password);
        Exit = new QPushButton(ContNou);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(680, 550, 83, 29));
        Exit->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));

        retranslateUi(ContNou);

        QMetaObject::connectSlotsByName(ContNou);
    } // setupUi

    void retranslateUi(QWidget *ContNou)
    {
        ContNou->setWindowTitle(QCoreApplication::translate("ContNou", "MyDrive", nullptr));
        Cont->setText(QCoreApplication::translate("ContNou", "Cont nou", nullptr));
        nume->setPlaceholderText(QCoreApplication::translate("ContNou", "Introduceti numele", nullptr));
        textEdit->setHtml(QCoreApplication::translate("ContNou", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Nume</p></body></html>", nullptr));
        p->setHtml(QCoreApplication::translate("ContNou", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Prenume</p></body></html>", nullptr));
        prenume->setPlaceholderText(QCoreApplication::translate("ContNou", "Introduceti prenumele", nullptr));
        user->setHtml(QCoreApplication::translate("ContNou", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Username</p></body></html>", nullptr));
        username->setPlaceholderText(QCoreApplication::translate("ContNou", "Introduceti username", nullptr));
        parola->setHtml(QCoreApplication::translate("ContNou", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Parola</p></body></html>", nullptr));
        parola_2->setPlaceholderText(QCoreApplication::translate("ContNou", "Introduceti parola", nullptr));
        Exit->setText(QCoreApplication::translate("ContNou", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ContNou: public Ui_ContNou {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTNOU_H
