#include <iostream>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    float a, bil1, bil2;
    int pil;
    char pilihan= 'y';
    do {
        system("cls");
    cout<<"Kalkulator Uya"<<endl;
    cout<<"Masukkan bilangan pertama: ";
    cin>>bil1;
    cout<<"Masukkan bilangan kedua: ";
    cin>>bil2;

    cout<<"1. Penjumlahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Perkalian"<<endl;
    cout<<"4. Pembagian"<<endl;
    cout<<"Pilihan operasi: ";
    cin>>pil;

    switch (pil) {
        case 1:
            a = bil1+bil2;
            cout<<"Hasil penjumlahan "<<bil1<<" + "<<bil2<<" adalah: "<<a;
            break;
        case 2:
            a = bil1-bil2;
            cout<<"Hasil pengurangan "<<bil1<<" - "<<bil2<< " adalah: "<<a;
            break;
        case 3:
            a = bil1*bil2;
            cout<<"Hasil perkalian "<<bil1<<" x "<<bil2<< " adalah: "<<a;
            break;
        case 4:
            a = bil1/bil2;
            cout<<"Hasil pembagian "<<bil1<<" / "<<bil2<< " adalah: "<<a;
        default:
            cout<<"Pilihan invalid";

    }
    cout<<"\nIngin melakukan operasi bilangan kembali (y/n) ? ";
    cin>>pilihan;
    }while (pilihan != 'n' );

    return 0;
}
