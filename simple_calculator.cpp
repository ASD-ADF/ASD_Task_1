/*PROGRAM SimpleCalculator */
/* DHIVA AZHARA 1301144101 IF 38 01 */

#include<iostream>
using namespace std;
#include<string.h>

int main()
{
/* DEKLARASI */
    float a,b,hasil;
    int pilihan;
    string lagi;

cout<<"KALKULATOR SEDERHANA"<<endl;
cout<<"======================"<<endl;
cout<<"Menu Hitung"<<endl;
cout<<"1. Pertambahan Dua Bilangan"<<endl;
cout<<"2. Pengurangan Dua Bilangan"<<endl;
cout<<"3. Perkalian Dua Bilangan"<<endl;
cout<<"4. Pembagian Dua Bilangan"<<endl;

ulang:
cout<<"Masukkan pilihan anda: ";
cin>>pilihan;

cout<<"Masukkan angka pertama: ";
cin>>a;
cout<<"Masukkan angka kedua: ";
cin>>b;

if (pilihan == 1)
{
    hasil=a+b;
    cout<<"Hasil Penjumlahan: "<<hasil<<endl;
    }
if (pilihan == 2)
{
    hasil=a-b;
    cout<<"Hasil Pengurangan: "<<hasil<<endl;
    }
if (pilihan == 3)
{
    hasil=a*b;
    cout<<"Hasil Perkalian: "<<hasil<<endl;
    }
if (pilihan == 4)
{
    hasil=a/b;
    cout<<"Hasil Pembagian: "<<hasil<<endl;
    }

cout<<"Ingin menghitung lagi??? (tekan 'tidak' atau 'iya')"<<endl;
cin>>lagi;

if (lagi == "iya")
{
    goto ulang;

} else {cout<<"Tekan tombol apapun utk keluar...";
}
}
/* DHIVA AZHARA 1301144101 IF 38 01 */
