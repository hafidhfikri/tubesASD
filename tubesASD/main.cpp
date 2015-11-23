#include <iostream>
#include "hider.h"

using namespace std;

int main()
{
    bool play = true;
    int opsi;

    do{
        cout<<"selamat datang di aplikasi penjadwalan kereta api"<<endl;
        cout<<"menu :"<<endl;
        cout<<"1. tambah jadwal"<<endl;
        cin>>opsi;
    }while(play);
    return 0;
}
