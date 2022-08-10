#ifndef DMELE_H
#define DMELE_H
#include <QWidget>
#include<WS2tcpip.h>
#include<WinSock2.h>
#pragma comment(lib,"ws2_32.lib")

namespace Ui {
class DMele;
}

class DMele : public QWidget
{
    Q_OBJECT

public:
    explicit DMele(SOCKET s, QWidget *parent = nullptr);
    ~DMele();

private slots:

    void on_VeziDoc_clicked();

    void on_Exit_clicked();

    void on_Adauga_clicked();

    void on_Folder_clicked();

    void on_Fav_clicked();

    void on_MutaDoc_clicked();

    void on_Status_clicked();

    void on_Sterge_clicked();

    void on_Back_clicked();

private:
    Ui::DMele *ui;
    SOCKET s;
};

#endif // DMELE_H
