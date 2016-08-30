/*
    Nama : Arief Rachmat Ramadhan
    NIM  : 1301140096
*/
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;
 main ()
{
    int a,b,c,d,e,f,pilih;
    char jawab;
    cout<<"Angka pertama:"<<endl;
    cin>>a;
    cout<<"Angka kedua:"<<endl;
    cin>>b;


    cout<<"Pilihan Operasi"<<endl;
    cout<<"1.Penjumlahan"<<endl;
    cout<<"2.Pengurangan"<<endl;
    cout<<"3.Perkalian"<<endl;
    cout<<"4.Pembagian"<<endl;
    cin>>pilih;
    if (pilih==1)
    {
        c=a+b;
        cout <<"Hasil Penjumlahan "<<a<<"+"<<b<<" adalah ="<<c<<endl;
    }
    else if (pilih==2)
    {
        d=a+b;
        cout <<"Hasil Pengurangan "<<a<<"-"<<b<<" adalah ="<<c<<endl;
    }
    else if (pilih==3)
    {
        e=a*b;
        cout <<"Hasil Pengurangan "<<a<<"x"<<b<<" adalah ="<<c<<endl;
    }
    else if (pilih==4)
    {
        f=a/b;
        cout <<"Hasil Pengurangan "<<a<<"/"<<b<<" adalah ="<<c<<endl;
    }
    cout<<"Tekan Y jika ingin kembali ke menu";
    cin>>jawab;

    return 0;
}
