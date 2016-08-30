#include <iostream>
using namespace std;
int main() {
 int bil1,bil2,hasil,x;
 char answer;

awal :
 cout<<"Operasi yang dapat dijalankan: "<<endl;
 cout<<"1. Penjumlahan"<<endl;
 cout<<"2. Pengurangan"<<endl;
 cout<<"3. Perkalian"<<endl;
 cout<<"4. Pembagian"<<endl;
 cout<<"Masukkan nomor operasi yang anda inginkan: ";
 cin>>x;

 if (x==1) {
    cout<<"Operasi yang anda pilih adalah penjumlahan";
 }  else if (x==2) {
    cout<<"Operasi yang anda pilih adalah pengurangan";
 }  else if (x==3) {
    cout<<"Operasi yang anda pilih adalah perkalian";
 }  else if (x==4) {
    cout<<"Operasi yang anda pilih adalah pembagian";
 }  else {
    cout<<"Error 404 Not Found";
 }
 cout<<endl;
 cout<<endl;

 cout<<"Masukkan bilangan pertama: ";
 cin>>bil1;
 cout<<"Masukkan bilangan kedua: ";
 cin>>bil2;
 if (x==1) {
    cout<<"Hasil dari operasi tersebut adalah "<<bil1+bil2;
 }  else if (x==2) {
    cout<<"Hasil dari operasi tersebut adalah "<<bil1-bil2;
 }  else if (x==3) {
    cout<<"Hasil dari operasi tersebut adalah "<<bil1*bil2;
 }  else if (x==4) {
    cout<<"Hasil dari operasi tersebut adalah "<<bil1/bil2;
 }

cout<<endl;
cout<<"Apakah Anda ingin melakukan perhitungan lagi?(Y/N): ";
cin>>answer;
if (answer=='Y') {
        goto awal;
}else if (answer=='N') {
        cout<<"TERIMA KASIH TELAH MENGGUNAKAN KALKULATOR INI";
}
 return 0;
}
