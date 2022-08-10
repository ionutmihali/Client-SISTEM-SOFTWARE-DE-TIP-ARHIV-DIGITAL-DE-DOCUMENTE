#ifndef CCLIENT_H
#define CCLIENT_H
#pragma once
#include "iclient.h"
#include<WS2tcpip.h>
#include<WinSock2.h>
#pragma comment(lib,"ws2_32.lib")
#include <string>
#include <iostream>
using namespace std;

class CClient :
    public IClient
{
private:
    string ipaddress;
    int port;
public:
    CClient(string s, int p);
    void initWIN();
    SOCKET createSocket();
    void communication(SOCKET&);
    void clean(SOCKET);
};

#endif // CCLIENT_H
