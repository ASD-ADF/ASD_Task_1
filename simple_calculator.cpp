#include <iostream>

using namespace std;

int main()
{
    float x,y,h;
    int o;

    cout<<"===========KALKULATOR===========";
    cout<<"            \n";
    cout<<"            \n";
    cout<<"Bilangan 1 : ";
    cin>>x;
    cout<<"Bilangan 2 : ";
    cin>>y;
    cout<<"            \n";
    cout<<"Pilih pengoperasian:\n1.Penjumlahan\n2.Pengurangan\n3.Pengalian\n4.Pembagian\n ";
    cout<<"            \n";
    cout<<"Pilihan : ";
    cin>>o;
    switch (o)
    {
    case 1:
        h=x+y;
        cout<<"Hasilnya : "<<h<< "";
    break;
     case 2:
        h=x-y;
        cout<<"Hasilnya : "<<h<< "";
    break;
     case 3:
        h=x*y;
        cout<<"Hasilnya : "<<h<< "";
    break;
     case 4:
        h=x/y;
        cout<<"Hasilnya : "<<h<< "";
    break;
    }
   return 0;
}
