#ifndef PAGINAPRINCIPALA_H
#define PAGINAPRINCIPALA_H
#include<WS2tcpip.h>
#include<WinSock2.h>
#pragma comment(lib,"ws2_32.lib")
#include <QWidget>
#include "dmele.h"
#include "dfav.h"
#include "dcos.h"
#include "detalii.h"
#include "ddes.h"
#include "dpriv.h"

namespace Ui {
class PaginaPrincipala;
}

class PaginaPrincipala : public QWidget
{
    Q_OBJECT

public:
    explicit PaginaPrincipala(SOCKET s, QWidget *parent = nullptr);
    ~PaginaPrincipala();

private slots:
    void on_cautare_clicked();

    void on_Detalii_clicked();

    void on_Exit_clicked();

    void on_mele_clicked();

    void on_favorit_clicked();

    void on_descarcat_clicked();

    void on_privat_clicked();

    void on_cos_clicked();

    void on_Logout_clicked();

private:
    Ui::PaginaPrincipala *ui;
    SOCKET s;
    DMele* d;
    dfav* f;
    dcos* c;
    detalii* det;
    ddes* des;
    dpriv* p;

};

#endif // PAGINAPRINCIPALA_H
