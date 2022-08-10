#include "dpriv.h"
#include "ui_dpriv.h"
#include <qmessagebox.h>

dpriv::dpriv(SOCKET s, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dpriv)
{
    ui->setupUi(this);
}

dpriv::~dpriv()
{
    delete ui;
}

void dpriv::on_Adauga_clicked()
{

}


void dpriv::on_VeziDoc_clicked()
{

}


void dpriv::on_Status_clicked()
{

}


void dpriv::on_Sterge_clicked()
{

}


void dpriv::on_Back_clicked()
{
    close();
}


void dpriv::on_Exit_clicked()
{
    char buff[256];
    strcpy(buff, "");
    strcat(buff, "2");
    strcat(buff, "|");
    send(s, buff, 256, 0);
    recv(s, buff, 256, 0);
    if (strcmp(buff, "0") == 0)
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

