#include "paginaprincipala.h"
#include "ui_paginaprincipala.h"
#include <QMessageBox>

PaginaPrincipala::PaginaPrincipala(SOCKET s, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PaginaPrincipala)
{
    ui->setupUi(this);
    this->s=s;
}

PaginaPrincipala::~PaginaPrincipala()
{
    delete ui;
}

void PaginaPrincipala::on_cautare_clicked()
{

}


void PaginaPrincipala::on_Detalii_clicked()
{
    det = new detalii(s);
    det->show();
}


void PaginaPrincipala::on_Exit_clicked()
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


void PaginaPrincipala::on_mele_clicked()
{
    d = new DMele(s);
    d->show();
}

void PaginaPrincipala::on_favorit_clicked()
{
    f= new dfav(s);
    f->show();
}


void PaginaPrincipala::on_descarcat_clicked()
{
    des = new ddes(s);
    des->show();
}


void PaginaPrincipala::on_privat_clicked()
{
    p = new dpriv(s);
    p->show();
}


void PaginaPrincipala::on_cos_clicked()
{
    c = new dcos(s);
    c->show();
}


void PaginaPrincipala::on_Logout_clicked()
{
    QMessageBox ms;
    ms.setText("Delogare reusita!");
    ms.exec();
    close();
}

