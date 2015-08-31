#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main ()
{
    float a,b,hsl;
    string pilih,balik;
    do

    {

        cout<<"----------"<<endl;
        cout<<"KALKULATOR"<<endl;
        cout<<"----------"<<endl;
        string jumlah="1.Penjumlahan";
        cout<<jumlah<<endl;
        cout<<"2.Pengurangan"<<endl;
        cout<<"3.Perkalian"<<endl;
        cout<<"4.Pembagian"<<endl;
        cout<<"Pilih metode: "<<endl;
        cin>>pilih;
        cout<<"Masukkan angka pertama: "<<endl;
        cin>>a;
        cout<<"Masukkan angka kedua: "<<endl;
        cin>>b;
        if (pilih=="1")
            hsl=a+b;
        else if (pilih=="2")
            hsl=a-b;
        else if (pilih=="3")
            hsl=a*b;
        else
            hsl=a/b;
        cout<<"Hasil Operasi: "<<endl;
        cout<<hsl<<endl;
        cout<<"Apakah anda akan menggunakan kalkulator lagi? (Y/T)"<<endl;
        cin>>balik;
    }
    while(balik!="T");
    getch();


}
