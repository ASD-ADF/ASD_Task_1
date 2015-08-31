#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{

    float a,b,c;
    string operation,kembali;
    cout<<"             CALCULATOR        "<<endl;
    cout<<"Description"<<endl;
    cout<<"Angka ke 1: Masukkan angka pertama"<<endl;
    cout<<"Angkat ke 2: Masukkan angka kedua"<<endl;
    cout<<"Operation: Masukkan simbol +,*,/,- untuk operasi menghitungnya."<<endl;
    cout<<" "<<endl;
    ulang:
    cout<<"Angka ke 1: ";
    cin>>a;
    cout<<"Angka ke 2: ";
    cin>>b;
    cout<<"Operation: ";
    cin>>operation;
    if(operation=="+")
    {
        c=a+b;
        cout<<"Hasil dari "<<a<<"+"<<b<<"= "<<c;
    }
    else if(operation=="-")
    {
        c=a=b;
        cout<<"Hasil dari "<<a<<"-"<<b<<"= "<<c;
    }
    else if(operation=="*")
    {
        c=a*b;
        cout<<"Hasil dari "<<a<<"*"<<b<<"= "<<c;
    }
    else if(operation=="/")
    {
        c=a/b;
        cout<<"Hasil dari "<<a<<"/"<<b<<"= "<<c;
    }
    cout<<endl;
    cout<<"Apakah anda ingin menggunakan kalkulator lagi? Y/N"<<endl;
    cin>>kembali;
    if(kembali=="Y")
    {
        goto ulang;
     }
     else
     {
         cout<<"Press any button to exit";
     }
     _getch();
}
