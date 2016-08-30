#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

main()
{
    int x,y,hasil;
    cout<<"====KALKULATOR===="<<endl<<endl;
    cout<<"Daftar Operasi Aritmetika :"<<endl;
    string jumlah ="(1) penjumlahan (+)";
    cout<<jumlah<<endl;
    string pengurangan ="(2) pengurangan (-)";
    cout<<pengurangan<<endl;
    string perkalian ="(3) Perkalian (*)";
    cout<<perkalian<<endl;
    string pembagian ="(4) Pembagian (/)";
    cout<<pembagian<<endl<<endl;

    cout<<"Masukan Nilai A =";
    cin>>x;
    cout<<"Masukan Nilai B =";
    cin>>y;
    a:

    int z;
    cout<<"Masukan Operation Aritmetika=";
    cin>>z;

    if(z==1)
    {
       hasil=x+y;
       cout<<"Hasil Dari :"<<jumlah<<","<<x<<"+"<<y<<"="<<hasil<<endl;

    }
    else if(z==2)
    {
        hasil=x-y;
        cout<<"Hasil Dari :"<<pengurangan<<","<<x<<"-"<<y<<"="<<hasil<<endl;
    }
    else if (z==3)
    {
        hasil=x*y;
        cout<<"Hasil Dari :"<<perkalian<<","<<x<<"*"<<y<<"="<<hasil<<endl;


    }
    else if (z==4)
    {
        hasil=x/y;
        cout<<"Hasil Dari :"<<pembagian<<","<<x<<"/"<<y<<"="<<hasil<<endl;
    }
    else
    {
        cout<<"Operasi Aritmatika Tidak Valid"<<endl<<endl;

        goto a;
    }


}
