#include "Start.h"
#include "cclient.h"
#include <iostream>
using namespace std;
#include<WS2tcpip.h>
#include<WinSock2.h>
#pragma comment(lib,"ws2_32.lib")
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CClient c("172.16.7.34", 53000);
    c.initWIN();
    SOCKET sock = c.createSocket();
    send(sock, "M-am conectat!", 256, 0);
    Start w(sock);
    w.show();
    return a.exec();
}
