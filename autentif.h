#ifndef AUTENTIF_H
#define AUTENTIF_H
#include<WS2tcpip.h>
#include<WinSock2.h>
#pragma comment(lib,"ws2_32.lib")
#include <QWidget>
#include "paginaprincipala.h"

namespace Ui {
class Autentif;
}

class Autentif : public QWidget
{
    Q_OBJECT

public:
    explicit Autentif(SOCKET s, QWidget *parent = nullptr);
    ~Autentif();

private slots:
    void on_pushButton_clicked();

    void on_Exit_clicked();

    void on_AmUitat_clicked();

private:
    Ui::Autentif *ui;
    SOCKET s;
    PaginaPrincipala* p;
};

#endif // AUTENTIF_H
