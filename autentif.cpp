#define _CRT_SECURE_NO_WARNINGS
#include "autentif.h"
#include "ui_autentif.h"
#include <string.h>
#include <QMessageBox>

Autentif::Autentif(SOCKET s, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Autentif)
{
    ui->setupUi(this);
    this->s = s;

    ui->lineEdit_2->setPlaceholderText("Introduceti numele de utilizator");
    ui->lineEdit->setPlaceholderText("Introduceti parola");
}

Autentif::~Autentif()
{
    delete ui;
}

void Autentif::on_pushButton_clicked()
{
    QString username = ui->lineEdit_2->text();
    QString parola = ui->lineEdit->text();

    QByteArray b1 = username.toLatin1();
    QByteArray b2 = parola.toLatin1();
    char buff[256];
    strcpy(buff, "");
    strcat(buff, "0");
    strcat(buff,"|");
    strcat(buff, b1.data());
    strcat(buff,"|");
    strcat(buff, b2.data());
    strcat(buff,"|");
    send(s, buff, 256, 0);

    recv(s,buff,256,0);
    char * p = strtok(buff, "|\n");
    if(strcmp(p, "0")==0)
    {
        QMessageBox ms;
        ms.setText("Autentificare realizata cu succes!");
        ms.exec();
        hide();
        this->p = new PaginaPrincipala(s);
        this->p->show();
    }
    else if (strcmp(p, "1") == 0)
    {
        QMessageBox ms;
        ms.setText("Parola gresita, mai incearca o data!");
        ms.exec();
    }
    else if (strcmp(p, "2") == 0)
    {
        QMessageBox ms;
        ms.setText("Acest nume de utilizator nu exista!");
        ms.exec();
    }
}


void Autentif::on_Exit_clicked()
{
    char buff[256];
    strcpy(buff, "");
    strcat(buff, "2");
    strcat(buff,"|");
    send(s, buff, 256, 0);
    recv(s, buff, 256, 0);
    if(strcmp(buff, "0")==0)
    {
        QMessageBox ms;
        ms.setText("Pagina se va inchide!");
        ms.windowTitleChanged("Avertizare inchidere");
        ms.exec();
        close();
    }
    else
    {
        QMessageBox ms;
        ms.setText("Eroare transmitere, reincearca!");
        ms.windowTitleChanged("Avertizare inchidere");
        ms.exec();
    }
}


void Autentif::on_AmUitat_clicked()
{

}

