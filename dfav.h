#ifndef DFAV_H
#define DFAV_H
#include<WS2tcpip.h>
#include<WinSock2.h>
#pragma comment(lib,"ws2_32.lib")
#include <QWidget>

namespace Ui {
class dfav;
}

class dfav : public QWidget
{
    Q_OBJECT

public:
    explicit dfav(SOCKET s, QWidget *parent = nullptr);
    ~dfav();

private slots:
    void on_VeziDoc_clicked();

    void on_Folder_clicked();

    void on_Muta_clicked();

    void on_Sterge_clicked();

    void on_Back_clicked();

    void on_Exit_clicked();

private:
    Ui::dfav *ui;
    SOCKET s;
};

#endif // DFAV_H
