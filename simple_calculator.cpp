#include <iostream>
using namespace std;

int main()
{
    float a,b,c;
    string tanda, lagi;
    cout << "Selamat Datang di Kalkulator Sederhana"<< endl;
    masukkanlagi:
    cout << "Masukkan bilangan pertama : ";cin >> a;
    cout << "Masukkan bilangan kedua : ";cin >> b;
    cout << "Ketikkan + atau - atau * atau / : ";cin >> tanda;
    if (tanda=="+")
    {
        c=a+b;
        cout << "Hasil penjumlahannya adalah "<<a<<"+"<<b<<" adalah "<<c<<endl;
    }else if(tanda=="-")
    {
        c=a-b;
        cout<<"Hasil pengurangannya adalah "<<a<<"-"<<b<<" adalah "<<c<<endl;
    }else if(tanda=="*")
    {
        c=a*b;
        cout << "Hasil perkaliannya adalah "<<a<<"*"<<b<<" adalah "<<c<<endl;
    }else if(tanda=="/")
    {
        c=a/b;
        cout<<"Hasil pembagiannya adalah "<<a<<"/"<<b<<" adalah "<<c<<endl;
    }else
    {
        cout <<"Operator yang anda masukkan salah"<<endl;
    }
    cout << "Apakah anda akan menggunakan kalkulator ini lagi Y/T ? ";cin>>lagi;
    if (lagi == "Y" || lagi == "y")
    {
        goto masukkanlagi;
    }else
    {
        cout << "Ketikkan apapun untuk keluar";
    }
}
