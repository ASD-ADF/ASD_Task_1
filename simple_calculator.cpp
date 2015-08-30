//Nama  : Febby Febriansyah
//Kelas : IF-38-01
//NIM   : 1301140371
#include <iostream>
using namespace std;
int main() {

    float input1,input2,output;
    int operasi;
    char ulang;

    cout<<"Selamat Datang Di Program Simple Calculator"<<endl;
    cout<<"==========================================="<<endl;
    cout<<endl;
lagi :
    cout<<"Masukkan angka pertama : ";cin>>input1;
    cout<<"Masukkan angka kedua : ";cin>>input2;
pilih :
    cout<<endl;
    cout<<"Pilih operator di bawah ini!"<<endl;
    cout<<"============================"<<endl;
    cout<<"1.Penjumlahan(+)"<<endl;
    cout<<"2.Pengurangan(-)"<<endl;
    cout<<"3.Perkalian(*)"<<endl;
    cout<<"4.Pembagian(/)"<<endl;
    cout<<"Masukkan nomor operasi yang Anda inginkan : ";cin>>operasi;
    cout<<endl;
    if (operasi==1) {
        output=input1+input2;
        cout<<"Hasil : "<<output<<endl;
    }
    else if (operasi==2) {
        output=input1-input2;
        cout<<"Hasil : "<<output<<endl;
    }
    else if (operasi==3) {
        output=input1*input2;
        cout<<"Hasil : "<<output<<endl;
    }
    else if (operasi==4) {
        output=input1/input2;
        cout<<"Hasil : "<<output<<endl;
    }
    else {
        cout<<endl;
        cout<<"Maaf nomor operasi yang Anda inputkan salah!, silahkan masukkan nomor operasi sesuai dengan menu yang ada. Tekan Enter!"<<endl;
        goto pilih;
    }
    cout<<endl;
    cout<<"Apakah Anda ingin mencoba lagi (Y/N) : ";cin>>ulang;
    if (ulang=='Y' || ulang=='y'){
        goto  lagi;
        cout<<endl;
    }
    else {}

    return 0;



}
