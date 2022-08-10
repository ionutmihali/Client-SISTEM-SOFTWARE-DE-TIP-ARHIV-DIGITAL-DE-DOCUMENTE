#include "contnou.h"
#include "ui_contnou.h"
#include <QMessageBox>

ContNou::ContNou(SOCKET s, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ContNou)
{
    ui->setupUi(this);
    this->s=s;
}

ContNou::~ContNou()
{
    delete ui;
}

void ContNou::on_Cont_clicked()
{
    QString username1 = ui->username->text();
    QByteArray b1 = username1.toLatin1();
    QString parola1 = ui->parola_2->text();
    QByteArray b2 = parola1.toLatin1();

    char buff[256];
    strcpy(buff, "");
    strcat(buff, "1");
    strcat(buff,"|");
    strcat(buff, b1.data());
    strcat(buff,"|");
    strcat(buff, b2.data());
    strcat(buff, "|");
    send(s, buff, 256, 0);

    recv(s,buff,256,0);
    char * p = strtok(buff, "|\n");
    if(strcmp(p, "0")==0)
    {
        hide();
        this->p = new PaginaPrincipala(s);
        this->p->show();
        QMessageBox ms;
        ms.setText("Cont creat cu succes!");
        ms.exec();
    }
    else if (strcmp(p, "1") == 0)
    {
        QMessageBox ms;
        ms.setText("Acest nume de utilizator exista!");
        ms.exec();
    }
}

void ContNou::on_Exit_clicked()
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

