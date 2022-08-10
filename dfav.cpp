#include "dfav.h"
#include "ui_dfav.h"
#include <qmessagebox.h>
#include <QInputDialog>
#include <string>
#include <string.h>

dfav::dfav(SOCKET s, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dfav)
{
    ui->setupUi(this);
    this->s = s;
    send(this->s, "4", 256, 0);
    char buff[1000];
    recv(this->s, buff, 1000, 0);
    char* p = strtok(buff, "|");
    int i = 0;
    if (strcmp(p, "0") == 0)
    {
        p = strtok(NULL, "|\n");
        while (p != NULL)
        {
            ui->doc->addItem(QString::number(i + 1) + QString::fromLocal8Bit(". ") + QString::fromLocal8Bit(p));
            i++;
            p = strtok(NULL, "|\n");
        }
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

dfav::~dfav()
{
    delete ui;
}

void dfav::on_VeziDoc_clicked()
{
    int n = QInputDialog::getInt(this, "Cerere document", "Introduceti numarul documentului: ");
    char sent[256], aux[20];
    strcpy(sent, "");
    strcat(sent, "7|");
    itoa(n, aux, 10);
    strcat(sent, aux);
    strcat(sent, "|");
    send(this->s, sent, 256, 0);
    char buff[1000], buf[1000];
    recv(this->s, buff, 1000, 0);
    char* p = strtok(buff, "|");
    QMessageBox ms;
    strcpy(buf, "");
    if (strcmp(p, "0") == 0)
    {
        p = strtok(NULL, "|\n");
        while (p != NULL)
        {
            strcat(buf, p);
            strcat(buf, "\n");
            p = strtok(NULL, "|\n");
        }
        ms.setText(buf);
        ms.exec();
    }
}


void dfav::on_Folder_clicked()
{

}


void dfav::on_Muta_clicked()
{

}


void dfav::on_Sterge_clicked()
{
    int n = QInputDialog::getInt(this, "Cerere document", "Introduceti numarul documentului: ");
    char sent[256], aux[20];
    strcpy(sent, "");
    strcat(sent, "12|");
    itoa(n, aux, 10);
    strcat(sent, aux);
    strcat(sent, "|");
    send(this->s, sent, 256, 0);
    char buff[1000];
    recv(this->s, buff, 1000, 0);
    char* p = strtok(buff, "|");
    if (strcmp(p, "0") == 0)
    {
        QMessageBox ms;
        ms.setText("Operatiune executata cu succes!");
        ms.exec();
        on_Back_clicked();
    }
    else  if (strcmp(p, "1") == 0)
    {
        QMessageBox ms;
        ms.setText("Operatiune esuata!");
        ms.exec();
    }
}


void dfav::on_Back_clicked()
{
    close();
}


void dfav::on_Exit_clicked()
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

