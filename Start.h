#ifndef START_H
#define START_H
#include<WS2tcpip.h>
#include<WinSock2.h>
#pragma comment(lib,"ws2_32.lib")
#include <QWidget>
#include "autentif.h"
#include "contnou.h"
QT_BEGIN_NAMESPACE
namespace Ui { class Start; }
QT_END_NAMESPACE

class Start : public QWidget
{
    Q_OBJECT

public:
    Start(SOCKET sock, QWidget *parent = nullptr);
    ~Start();

private slots:
    void on_Autentificare_clicked();

    void on_ContNou_clicked();

    void on_Exit_clicked();

private:
    Ui::Start *ui;
    SOCKET s;
    Autentif* a;
    ContNou* c;
};
#endif // START_H
