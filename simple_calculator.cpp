#include <iostream>
#include <conio.h>
#include <math.h>
#include <cstdlib>

using namespace std;

int main()
{
    int i,pilmen;
    float hasil, a,b;

do {
    cout<<"Menu \n";
    cout<<"1. Penjumlahan \n";
    cout<<"2. Pengurangan \n";
    cout<<"3. Perkalian \n";
    cout<<"4. Pembagian \n";
    cout<<"5. Pengakaran \n";
    cout<<"6. Perpangkatan \n";
    cout<<"7. Exit \n";
    cout<<"Pilih menu: "; cin>>pilmen;
    cin.ignore();
    if (pilmen==1) {
        cout<<"Masukkan angka pertama: ";
        cin>>a;
        cout<<"Masukkan angka kedua: ";
        cin>>b;
        hasil=a+b;
        cout<<"Hasil penjumlahan: "<<hasil;
        getch();
        system("CLS");
    }
    else if (pilmen==2) {
        cout<<"Masukkan angka pertama: ";
        cin>>a;
        cout<<"Masukkan angka kedua: ";
        cin>>b;
        hasil=a-b;
        cout<<"Hasil pengurangan: "<<hasil;
        getch();
        system("CLS");
    }
    else if (pilmen==3) {
        cout<<"Masukkan angka pertama: ";
        cin>>a;
        cout<<"Masukkan angka kedua: ";
        cin>>b;
        hasil=a*b;
        cout<<"Hasil perkalian: "<<hasil;
        getch();
        system("CLS");
    }
    else if (pilmen==4) {
        cout<<"Masukkan angka pertama: ";
        cin>>a;
        cout<<"Masukkan angka kedua: ";
        cin>>b;
        hasil=a/b;
        cout<<"Hasil pembagian: "<<hasil;
        getch();
        system("CLS");
    }
    else if (pilmen==5) {
        cout<<"Masukkan angka: ";
        cin>>a;
        hasil=sqrt(a);
        cout<<"Hasil pengakaran: "<<hasil;
        getch();
        system("CLS");
    }
     else if (pilmen==6) {
        cout<<"Masukkan angka: ";
        cin>>a;
        cout<<"Masukkan pangkat: ";
        cin>>b;
        hasil=1;
     for (i=1; i<=b; i++){
        hasil=hasil*a;
     }
     cout << "Hasil perpangkatan: " << hasil;
     getch();
        system("CLS");
    }
    else if (pilmen>7) {
        cout << "Maaf, menu yang Anda masukkan salah.";
        getch();
        system("CLS");
    }

}while(pilmen!=7);

if (pilmen==7){
    cout << "Sampai Jumpa";
}
return(0);
}
