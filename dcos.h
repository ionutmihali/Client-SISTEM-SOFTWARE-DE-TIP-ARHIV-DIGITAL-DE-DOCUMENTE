#ifndef DCOS_H
#define DCOS_H
#include<WS2tcpip.h>
#include<WinSock2.h>
#pragma comment(lib,"ws2_32.lib")
#include <QWidget>

namespace Ui {
class dcos;
}

class dcos : public QWidget
{
    Q_OBJECT

public:
    explicit dcos(SOCKET s, QWidget *parent = nullptr);
    ~dcos();

private slots:
    void on_Restaureaza_clicked();

    void on_Sterge_clicked();

    void on_Goleste_clicked();

    void on_Back_clicked();

    void on_Exit_clicked();

private:
    Ui::dcos *ui;
    SOCKET s;
};

#endif // DCOS_H
