#define _CRT_SECURE_NO_WARNINGS
#include "dmele.h"
#include "ui_dmele.h"
#include <QMessageBox>
#include <QInputDialog>
#include <string>
#include <string.h>
using namespace std;

DMele::DMele(SOCKET s, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DMele)
{
    ui->setupUi(this);
    this->s=s;
    send(this->s, "3", 256, 0);
    char buff[1000];
    recv(this->s, buff, 1000, 0);
    char* p = strtok(buff, "|");
    int i = 0;
    if(strcmp(p, "0")==0)
    {
        p = strtok(NULL, "|\n");
        while(p!=NULL)
        {
            ui->doc->addItem(QString::number(i+1) + QString::fromLocal8Bit(". ") + QString::fromLocal8Bit(p));
            i++;
            p = strtok(NULL, "|\n");
        }
    }
    else if(strcmp(p, "1")==0)
    {
        QMessageBox ms;
        ms.setText("Nu exista documente!");
        ms.exec();
    }
    else if(strcmp(p, "2")==0)
    {
        QMessageBox ms;
        ms.setText("Eroare transmitere, reincearca!");
        ms.windowTitleChanged("Avertizare inchidere");
        ms.exec();
    }

}

DMele::~DMele()
{
    delete ui;
}

void DMele::on_VeziDoc_clicked()
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
    if(strcmp(p, "0")==0)
    {
        p = strtok(NULL, "|\n");
        while(p!=NULL)
        {
            strcat(buf, p);
            strcat(buf, "\n");
            p = strtok(NULL, "|\n");
        }
        ms.setText(buf);
        ms.exec();
    }
}


void DMele::on_Exit_clicked()
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


void DMele::on_Adauga_clicked()
{
    QString n = QInputDialog::getText(this, "Adaugare document", "Introduceti numele documentului: ");
    char sent[1000];
    strcpy(sent, "");
    strcat(sent, "5|");
    string nn = n.toStdString();
    strcat(sent, nn.c_str());
    strcat(sent, "|");
    char buff[256];
    FILE* f = fopen(nn.c_str(), "r+");
    while (fgets(buff, 1000, f))
    {
        strcat(sent, buff);
        strcat(sent, "*");
    }
    strcat(sent, "|");
    send(this->s, sent, 1000, 0);
    recv(this->s, buff, 1000, 0);
    if (strcmp(buff, "0") == 0)
    {
        QMessageBox ms;
        ms.setText("Operatiune executata cu succes!");
        ms.exec();
        on_Back_clicked();
    }
    else  if (strcmp(buff, "1") == 0)
    {
        QMessageBox ms;
        ms.setText("Operatiune esuata! Exista acest document!");
        ms.exec();
    }
}


void DMele::on_Folder_clicked()
{
    QString n = QInputDialog::getText(this, "Adaugare folder", "Introduceti numele folderului: ");
    char sent[1000], buff[1000];
    strcpy(sent, "");
    strcat(sent, "15|");
    string nn = n.toStdString();
    strcat(sent, nn.c_str());
    strcat(sent, "|");
    send(this->s, sent, 1000, 0);
    recv(this->s, buff, 1000, 0);
    if (strcmp(buff, "0") == 0)
    {
        QMessageBox ms;
        ms.setText("Operatiune executata cu succes!");
        ms.exec();
        on_Back_clicked();
    }
    else  if (strcmp(buff, "1") == 0)
    {
        QMessageBox ms;
        ms.setText("Operatiune esuata! Exista acest document!");
        ms.exec();
    }
}


void DMele::on_Fav_clicked()
{
    int n = QInputDialog::getInt(this, "Cerere document", "Introduceti numarul documentului: ");
    char sent[256], aux[20];
    strcpy(sent, "");
    strcat(sent, "11|");
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
    }
    else  if (strcmp(p, "1") == 0)
    {
        QMessageBox ms;
        ms.setText("Operatiune esuata!");
        ms.exec();
    }
}


void DMele::on_MutaDoc_clicked()
{
    int n = QInputDialog::getInt(this, "Cerere document", "Introduceti numarul documentului: ");
    QString m = QInputDialog::getText(this, "Cerere folder", "Introduceti destinatia documentului: ");
    char sent[256], aux[20];
    strcpy(sent, "");
    strcat(sent, "10|");
    itoa(n, aux, 10);
    string mm = m.toStdString();
    strcat(sent, aux);
    strcat(sent, "|");
    strcat(sent, mm.c_str());
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


void DMele::on_Status_clicked()
{

}


void DMele::on_Sterge_clicked()
{
    int n = QInputDialog::getInt(this, "Cerere document", "Introduceti numarul documentului: ");
    char sent[256], aux[20];
    strcpy(sent, "");
    strcat(sent, "6|");
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
        ms.setText("Operatiune esuata! Nu exista acest document!");
        ms.exec();
    }
}


void DMele::on_Back_clicked()
{
    close();
}

