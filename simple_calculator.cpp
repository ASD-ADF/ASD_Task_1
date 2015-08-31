#include <iostream>
using namespace std;
int main () {
    int a,b,d,hasil;
    char c;
kembali :
    cout<<"Selamat Datang di Aplikasi Kalkulator Sederhana"<<endl;
    cout<<"menu"<<endl;
    cout<<"1. Penjumlahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Perkalian"<<endl;
    cout<<"4. Pembagian"<<endl;
    cout<<"masukan pilihan operasi perhitungan : ";cin>>d;
    if (d==1){
        cout<<"Masukan Angka Pertama : ";cin>>a;
        cout<<"Masukan Angka Kedua : ";cin>>b;
        cout<<"Hasil Penjumlahan adalah ";cout<<a+b;
    }
    if (d==2){
        cout<<"Masukan Angka Pertama : ";cin>>a;
        cout<<"Masukan Angka Kedua : ";cin>>b;
        cout<<"Hasil Pengurangan adalah ";cout<<a-b;
    }
    if (d==3){
        cout<<"Masukan Angka Pertama : ";cin>>a;
        cout<<"Masukan Angka Kedua : ";cin>>b;
        cout<<"Hasil Perkalian adalah ";cout<<a*b;
    }
    if (d==4){
        cout<<"Masukan Angka Pertama : ";cin>>a;
        cout<<"Masukan Angka Kedua : ";cin>>b;
        cout<<"Hasil Pembagian adalah ";cout<<a/b;
    }
    cout<<endl;
    cout<<"ingin Menggunakan SimpleCalc Lagi? (y/n)";cin>>c;
    if (c=='y') {
        goto kembali;
    }

    else
return 0;
}
