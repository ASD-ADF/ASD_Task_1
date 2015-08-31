//Nama  : Annisa Rizki Pratiwi Wibowo
//NIM   : 1301144391
//Kelas : IF-38-01

#include <iostream>

using namespace std;

int main() {
    int pil;
    float a, b;
    char rep;

    cout<<"Kalkulator Sederhana"<<endl;
    cout<<endl;

    menu:
    cout<<"Menu"<<endl;
    cout<<"1. Penjumlahan"<<endl;
    cout<<"2. Pengurangan"<<endl;
    cout<<"3. Perkalian"<<endl;
    cout<<"4. Pembagian"<<endl;
    cout<<"5. Keluar"<<endl;
    cout<<"Masukan pilihan: "; cin>>pil;
    cout<<endl;

    if (pil==1) {
        cout<<"Masukkan Bilangan 1: "; cin>>a;
        cout<<"Masukkan Bilangan 2: "; cin>>b;
        cout<<"Hasil : "<<a+b<<endl;
    }

    else if (pil==2) {
        cout<<"Masukkan Bilangan 1: "; cin>>a;
        cout<<"Masukkan Bilangan 2: "; cin>>b;
        cout<<"Hasil : "<<a-b<<endl;
    }

    else if (pil==3) {
        cout<<"Masukkan Bilangan 1: "; cin>>a;
        cout<<"Masukkan Bilangan 2: "; cin>>b;
        cout<<"Hasil : "<<a*b<<endl;
    }

    else if (pil==4) {
        cout<<"Masukkan Bilangan 1: "; cin>>a;
        cout<<"Masukkan Bilangan 2: "; cin>>b;
        cout<<"Hasil : "<<a/b<<endl;
    }

    else if (pil==5) {
        cout<<"Terima Kasih"<<endl;
        goto selesai;
    }

    else {
        cout<<"Maaf, angka yang Anda masukkan salah"<<endl;
        goto menu;
    }

    cout<<"Apakah Anda ingin menghitung lagi (Y/N)? "; cin>>rep;
    if (rep=='Y' || rep=='y') {
        goto menu;
    }

    else if (rep=='N' || rep=='n') {
        cout<<endl;
        cout<<"Terima Kasih"<<endl;

    }
    selesai: ;
}
