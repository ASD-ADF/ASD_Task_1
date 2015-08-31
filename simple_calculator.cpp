#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a,b,pilihan;
    float hasil;
    cout<<"KALKULATOR SEDERHANA DUA BILANGAN\n";
    cout<<" \n";
    cout<<"Menu: \n";
    cout<<"1. Penjumlahan\n";
    cout<<"2. Pengurangan\n";
    cout<<"3. Perkalian\n";
    cout<<"4. Pembagian\n";
    cout<<"Masukkan pilihan: ";
    cin>>pilihan;
    cout<<" \n";
    cout<<"Angka 1: ";
    cin>>a;
    cout<<"Angka 2: ";
    cin>>b;

    switch(pilihan)

        {case 1:
            hasil=a+b;
            cout<<"Hasil: "<<hasil<<endl<<endl;
            break;
        case 2:
            hasil=a-b;
            cout<<"Hasil: "<<hasil<<endl<<endl;
            break;
        case 3:
            hasil=a*b;
            cout<<"Hasil: "<<hasil<<endl<<endl;
            break;
        case 4:
            hasil=a/b;
            cout<<"Hasil: "<<hasil<<endl<<endl;
            break;
    }
    return 0;
}
