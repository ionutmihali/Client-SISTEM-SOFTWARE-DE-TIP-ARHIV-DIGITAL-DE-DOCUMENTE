#include "Start.h"
#include "ui_Start.h"
#include <QMessageBox>

Start::Start(SOCKET sock, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Start)
{
    ui->setupUi(this);
    this->s = sock;
}

Start::~Start()
{
    delete ui;
}


void Start::on_Autentificare_clicked()
{
    a = new Autentif(s);
    a->show();
}

void Start::on_ContNou_clicked()
{
    c = new ContNou(s);
    c->show();
}

void Start::on_Exit_clicked()
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

