#include "detalii.h"
#include "ui_detalii.h"
#include <qmessagebox.h>

detalii::detalii(SOCKET s, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::detalii)
{
    ui->setupUi(this);
    this->s =s;
    send(this->s, "8", 256, 0);
    char buff[1000];
    recv(this->s, buff, 1000, 0);
    char* p = strtok(buff, "|");
    int i = 0;
    if (strcmp(p, "0") == 0)
    {
        p = strtok(NULL, "|\n");
        ui->doc->addItem(QString::fromLocal8Bit("Username: ") + QString::fromLocal8Bit(p));
        p = strtok(NULL, "|\n");
        ui->doc->addItem(QString::fromLocal8Bit("Abonament: ") + QString::fromLocal8Bit(p));
        p = strtok(NULL, "|\n");
        int aux = atoi(p);
        ui->doc->addItem(QString::fromLocal8Bit("Dimensiune maxima: ") + QString::number(aux, 10));
        p = strtok(NULL, "|\n");
        aux = atoi(p);
        ui->doc->addItem(QString::fromLocal8Bit("Dimensiune ocupata: ") + QString::number(aux, 10));
        p = strtok(NULL, "|\n");
        aux = atoi(p);
        ui->doc->addItem(QString::fromLocal8Bit("Pret abonament: ") + QString::number(aux, 10));
        p = strtok(NULL, "|\n");
    }
    else if (strcmp(p, "1") == 0)
    {
        QMessageBox ms;
        ms.setText("Nu exista documente!");
        ms.exec();
    }
    else if (strcmp(p, "2") == 0)
    {
        QMessageBox ms;
        ms.setText("Eroare transmitere, reincearca!");
        ms.windowTitleChanged("Avertizare inchidere");
        ms.exec();
    }
}

detalii::~detalii()
{
    delete ui;
}

void detalii::on_EditUser_clicked()
{

}


void detalii::on_EditParola_clicked()
{

}


void detalii::on_EditAbonament_clicked()
{
    send(this->s, "22", 256, 0);
    char buff[1000];
    QMessageBox ms;
    ms.setText("Solicitare de trecere la abonament premium!");
    ms.exec();

    recv(this->s, buff, 1000, 0);
    char* p = strtok(buff, "|");
    int i = 0;
    if (strcmp(p, "0") == 0)
    {
        QMessageBox ms;
        ms.setText("Solicitare aprobata!");
        ms.exec();
        on_Back_clicked();
    }
    else
    {
        QMessageBox ms;
        ms.setText("Solicitare de trecere la abonament premium!");
        ms.exec();
    }
}


void detalii::on_Card_clicked()
{

}


void detalii::on_Back_clicked()
{
    close();
}


void detalii::on_Exit_clicked()
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

