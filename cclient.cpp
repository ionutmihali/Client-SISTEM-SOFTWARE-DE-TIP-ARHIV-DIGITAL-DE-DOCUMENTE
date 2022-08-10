#define _CRT_SECURE_NO_WARNINGS
#include "cclient.h"

CClient::CClient(string s, int p)
{
    this->ipaddress = s;
    this->port = p;
}

void CClient::initWIN()
{
    //init winsock
    WSAData data;
    WORD ver = MAKEWORD(2, 2);
    int wsResult = WSAStartup(ver, &data);
    if (wsResult != 0)
    {
        cout << "Can t start winsock!" << wsResult << endl;
    }
}

SOCKET CClient::createSocket()
{
    SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == INVALID_SOCKET)
    {
        cout << "Can t create socket" << WSAGetLastError() << endl;
        WSACleanup();
        return 0;
    }

    //fill in hint structure
    sockaddr_in hint;
    hint.sin_family = AF_INET;
    hint.sin_port = htons(port);
    inet_pton(AF_INET, ipaddress.c_str(), &hint.sin_addr);

    //connect to server
    int connResult = connect(sock, (sockaddr*)&hint, sizeof(hint));
    if (connResult == SOCKET_ERROR)
    {
        cout << "Can t connect to server " << WSAGetLastError() << endl;
        closesocket(sock);
        WSACleanup();
        return 0;
    }
    return sock;
}

void CClient::communication(SOCKET& sock)
{
    //char buf[4096];
    string buf = "0|Cerere conectare!";
    send(sock, buf.c_str(), buf.size() + 1, 0);

    char rec[100];
    recv(sock, rec,	100, 0);
    char* p = strtok(rec, "|\n");
    if (strcmp(p, "0") == 0)
        cout << "Conectare reusita!" << endl;
    else
        cout << "Conectare esuata!" << endl;
}
//	do
//	{
//		//prompt the user for some text
//
//		if (userInput.size() > 0)
//		{
//			//send the text
//			//int sendresult = send(sock, userInput.c_str(), userInput.size() + 1, 0);
//			//if (sendresult != SOCKET_ERROR)
//			//{
//
//			//	//wait for response
//			//	ZeroMemory(buf, 4096);
//			//	//int bytesReceived = recv(sock, buf, 4096, 0);
//			//	//if (bytesReceived > 0)
//			//	//{
//			//	//	//echo response to console
//			//	//	std::cout << "SERVER> " << std::string(buf, 0, bytesReceived) << std::endl;
//			//	//}
//
//			//}
//		}
//
//	} while (userInput.size() > 0);

//}

void CClient::clean(SOCKET sock)
{
    closesocket(sock);
    WSACleanup();
}


