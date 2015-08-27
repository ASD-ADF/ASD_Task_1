#include <iostream>
#include <conio.h>
#include <string.h>
#include <math.h>
using namespace std;

int main()
{
    double opr1, opr2;
    int opt;

    cout<<"Masukan operan 1: "; cin>>opr1;
    cout<<"Masukan operan 2: "; cin>>opr2;
    cout<<""<<endl;
    cout<<"1. Tambah"<<endl;
    cout<<"2. Kurang"<<endl;
    cout<<"3. Kali"<<endl;
    cout<<"4. Bagi"<<endl;
    cout<<"Pilih(1/2/3/4): "; cin>>opt;
    cout<<""<<endl;

    switch(opt){
    case 1 : cout<<"Hasil = "<<opr1+opr2;
        break;
    case 2 : cout<<"Hasil = "<<opr1-opr2;
        break;
    case 3 : cout<<"Hasil = "<<opr1*opr2;
        break;
    case 4 : cout<<"Hasil = "<<opr1/opr2;
        break;
    }

}
