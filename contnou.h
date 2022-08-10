#ifndef CONTNOU_H
#define CONTNOU_H
#include<WS2tcpip.h>
#include<WinSock2.h>
#pragma comment(lib,"ws2_32.lib")
#include "paginaprincipala.h"
#include <QWidget>

namespace Ui {
class ContNou;
}

class ContNou : public QWidget
{
    Q_OBJECT

public:
    explicit ContNou(SOCKET s, QWidget *parent = nullptr);
    ~ContNou();

private slots:
    void on_Cont_clicked();

    void on_Exit_clicked();

private:
    Ui::ContNou *ui;
    SOCKET s;
    PaginaPrincipala* p;
};

#endif // CONTNOU_H
