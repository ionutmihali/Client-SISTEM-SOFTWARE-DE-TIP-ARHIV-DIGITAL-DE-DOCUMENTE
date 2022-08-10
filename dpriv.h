#ifndef DPRIV_H
#define DPRIV_H
#include<WS2tcpip.h>
#include<WinSock2.h>
#pragma comment(lib,"ws2_32.lib")
#include <QWidget>

namespace Ui {
class dpriv;
}

class dpriv : public QWidget
{
    Q_OBJECT

public:
    explicit dpriv(SOCKET s, QWidget *parent = nullptr);
    ~dpriv();

private slots:
    void on_Adauga_clicked();

    void on_VeziDoc_clicked();

    void on_Status_clicked();

    void on_Sterge_clicked();

    void on_Back_clicked();

    void on_Exit_clicked();

private:
    Ui::dpriv *ui;
    SOCKET s;
};

#endif // DPRIV_H
