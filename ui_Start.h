/********************************************************************************
** Form generated from reading UI file 'Start.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_START_H
#define UI_START_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Start
{
public:
    QWidget *widget;
    QPushButton *Autentificare;
    QPushButton *ContNou;
    QPushButton *Exit;
    QTextEdit *textEdit;

    void setupUi(QWidget *Start)
    {
        if (Start->objectName().isEmpty())
            Start->setObjectName(QString::fromUtf8("Start"));
        Start->resize(800, 600);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagini/d.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Start->setWindowIcon(icon);
        Start->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"border-color: rgb(0, 0, 127);"));
        widget = new QWidget(Start);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(200, 130, 401, 291));
        widget->setStyleSheet(QString::fromUtf8("image: url(:/imagini/p.jpg);"));
        Autentificare = new QPushButton(Start);
        Autentificare->setObjectName(QString::fromUtf8("Autentificare"));
        Autentificare->setGeometry(QRect(130, 450, 94, 29));
        Autentificare->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);"));
        ContNou = new QPushButton(Start);
        ContNou->setObjectName(QString::fromUtf8("ContNou"));
        ContNou->setGeometry(QRect(370, 450, 80, 29));
        ContNou->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);"));
        Exit = new QPushButton(Start);
        Exit->setObjectName(QString::fromUtf8("Exit"));
        Exit->setGeometry(QRect(580, 450, 80, 29));
        Exit->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);"));
        textEdit = new QTextEdit(Start);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(true);
        textEdit->setGeometry(QRect(200, 30, 401, 101));
        QFont font;
        font.setKerning(true);
        textEdit->setFont(font);
        textEdit->setStyleSheet(QString::fromUtf8("border-color: rgb(85, 170, 255);\n"
"selection-color: rgb(85, 170, 255);\n"
"border-left-color: rgb(85, 170, 255);\n"
"border-bottom-color: rgb(85, 170, 255);\n"
"border-right-color: rgb(85, 170, 255);\n"
"border-top-color: rgb(85, 170, 255);\n"
"gridline-color: rgb(85, 170, 255);"));

        retranslateUi(Start);

        QMetaObject::connectSlotsByName(Start);
    } // setupUi

    void retranslateUi(QWidget *Start)
    {
        Start->setWindowTitle(QCoreApplication::translate("Start", "MyDrive", nullptr));
        Autentificare->setText(QCoreApplication::translate("Start", "Autentificare", nullptr));
        ContNou->setText(QCoreApplication::translate("Start", "Cont nou", nullptr));
        Exit->setText(QCoreApplication::translate("Start", "EXIT", nullptr));
        textEdit->setHtml(QCoreApplication::translate("Start", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt; color:#0000ff;\">MyDRIVE</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Start: public Ui_Start {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_START_H
