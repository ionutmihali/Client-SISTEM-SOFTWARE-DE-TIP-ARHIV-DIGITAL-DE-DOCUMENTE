#include "ddes.h"
#include "ui_ddes.h"
#include <qmessagebox.h>

ddes::ddes(SOCKET s, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ddes)
{
    ui->setupUi(this);
    this->s = s;
}

ddes::~ddes()
{
    delete ui;
}

void ddes::on_VeziDoc_clicked()
{

}


void ddes::on_Folder_clicked()
{

}


void ddes::on_Muta_clicked()
{

}

void ddes::on_Back_clicked()
{
    close();
}


void ddes::on_Exit_clicked()
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

