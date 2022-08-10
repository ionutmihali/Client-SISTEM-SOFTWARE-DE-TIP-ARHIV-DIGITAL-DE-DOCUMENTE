#ifndef ICLIENT_H
#define ICLIENT_H
#pragma once
#include<WS2tcpip.h>
#include<WinSock2.h>
#pragma comment(lib,"ws2_32.lib")


class IClient
{
public:
    virtual void initWIN() = 0;
    virtual SOCKET createSocket() = 0;
    virtual void communication(SOCKET&) = 0;
    virtual void clean(SOCKET) = 0;
};

#endif // ICLIENT_H
