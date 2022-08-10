#ifndef DDES_H
#define DDES_H
#include<WS2tcpip.h>
#include<WinSock2.h>
#pragma comment(lib,"ws2_32.lib")
#include <QWidget>

namespace Ui {
class ddes;
}

class ddes : public QWidget
{
    Q_OBJECT

public:
    explicit ddes(SOCKET s, QWidget *parent = nullptr);
    ~ddes();

private slots:
    void on_VeziDoc_clicked();

    void on_Folder_clicked();

    void on_Muta_clicked();

    void on_Back_clicked();

    void on_Exit_clicked();

private:
    Ui::ddes *ui;
    SOCKET s;
};

#endif // DDES_H
