#include <iostream>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <cstdlib>
using namespace std;

int main(){
cout<<"Program Kalkulator"<<endl;
int pilihan;
int operan1,operan2;
float hasil;
char jawab;

do{
cout<<"Pilih operasi yang akan dilakukan: "<<endl;
cout<<"1. Penjumlahan"<<endl;
cout<<"2. Pengurangan"<<endl;
cout<<"3. Perkalian"<<endl;
cout<<"4. Pembagian"<<endl;
cin>>pilihan;

switch(pilihan){
case 1: cout<<"Masukkan angka pertama: "<<endl;
        cin>>operan1;
        cout<<"Masukkan angka kedua: "<<endl;
        cin>>operan2;
        hasil=operan1+operan2;
        cout<<"Hasil penjumlahan adalah "<<hasil<<endl;
        break;
case 2: cout<<"Masukkan angka pertama: "<<endl;
        cin>>operan1;
        cout<<"Masukkan angka kedua: "<<endl;
        cin>>operan2;
        hasil=operan1-operan2;
        cout<<"Hasil pengurangan adalah "<<hasil<<endl;
        break;
case 3: cout<<"Masukkan angka pertama: "<<endl;
        cin>>operan1;
        cout<<"Masukkan angka kedua: "<<endl;
        cin>>operan2;
        hasil=operan1*operan2;
        cout<<"Hasil perkalian adalah "<<hasil<<endl;
        break;
case 4: cout<<"Masukkan angka pertama: "<<endl;
        cin>>operan1;
        cout<<"Masukkan angka kedua: "<<endl;
        cin>>operan2;
        hasil=operan1/operan2;
        cout<<"Hasil pembagian adalah "<<hasil<<endl;
        cin.get();
        return 0;
        break;
}
    cout<<"Ulangi menggunakan kalkulator?(y/n)"<<endl;
    cin>>jawab;
    }while (jawab=='y');

    cin.get();
    return 0;
}


