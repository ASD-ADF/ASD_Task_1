//Nama  : Muhammad Yuslan Abubakar
//NIM   : 1301141071
//Kelas : IF-38-01

#include <iostream>

using namespace std;

int main() {

    int menu1, menu2;
    float bil1, bil2;
    char ulang;

    cout<<"Selamat Datang Di Kalkulator Sederhana"<<endl;
    cout<<""<<endl;
awal :
    cout<<"Menu : 1. Penjumlahan"<<endl;
    cout<<"       2. Pengurangan"<<endl;
    cout<<"       3. Perkalian"<<endl;
    cout<<"       4. Pembagian"<<endl;
    cout<<""<<endl;
    cout<<"Masukkan Menu Yang Anda Inginkan : ";cin>>menu1;
    cout<<""<<endl;

    if (menu1==1) {
        cout<<"Masukkan Bilangan 1 : ";cin>>bil1;
        cout<<"Masukkan Bilangan 2 : ";cin>>bil2;
        cout<<"Hasil = ";
        cout<<bil1+bil2<<endl;
    }

    else if (menu1==2) {
        cout<<"Masukkan Bilangan 1 : ";cin>>bil1;
        cout<<"Masukkan Bilangan 2 : ";cin>>bil2;
        cout<<"Hasil = ";
        cout<<bil1-bil2<<endl;
    }

    else if (menu1==3) {
        cout<<"Masukkan Bilangan 1 : ";cin>>bil1;
        cout<<"Masukkan Bilangan 2 : ";cin>>bil2;
        cout<<"Hasil = ";
        cout<<bil1*bil2<<endl;
    }

    else if (menu1==4) {
        cout<<"Masukkan Bilangan 1 : ";cin>>bil1;
        cout<<"Masukkan Bilangan 2 : ";cin>>bil2;
        cout<<"Hasil = ";
        cout<<bil1/bil2<<endl;
    }

    else {
        cout<<"Menu Yang Anda Masukkan Tidak Ada"<<endl;
        cout<<""<<endl;
        cout<<"Apa Yang Akan Anda Lakukan? : 1. Ulangi"<<endl;
        cout<<"                              2. Keluar"<<endl;
        cout<<""<<endl;
        cout<<"Masukkan Pilihan Anda : ";cin>>menu2;
        cout<<""<<endl;
        if (menu2 == 1) {
            goto awal;
        }
        else {
            goto akhir;
        }
    }

    cout<<""<<endl;
    cout<<"Apakah Anda Ingin Menghitung Lagi? (Y/N) : ";cin>>ulang;
    if (ulang == 'Y' || ulang == 'y') {
        goto awal;
    }

    else if (ulang == 'N' || ulang == 'n') {

    }
    akhir :
    return 0;
}
