#ifndef DETALII_H
#define DETALII_H
#include<WS2tcpip.h>
#include<WinSock2.h>
#pragma comment(lib,"ws2_32.lib")
#include <QWidget>

namespace Ui {
class detalii;
}

class detalii : public QWidget
{
    Q_OBJECT

public:
    explicit detalii(SOCKET s, QWidget *parent = nullptr);
    ~detalii();

private slots:
    void on_EditUser_clicked();

    void on_EditParola_clicked();

    void on_EditAbonament_clicked();

    void on_Card_clicked();

    void on_Back_clicked();

    void on_Exit_clicked();

private:
    Ui::detalii *ui;
    SOCKET s;
};

#endif // DETALII_H
