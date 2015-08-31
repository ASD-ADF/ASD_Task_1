/*  Nama : Thoriq Abdul Aziz M
    Nim  : 1301144341
    kelas: If-38-01 */

#include <iostream>

using namespace std;

int main()
{
    int pilih;
    float a,b,hasil;
    char x;
    do{
    cout<<"KALKULATOR"<<endl<<"Menu :"<<endl;
    cout<<"1. Penjumlahan"<<endl<<"2. Pengurangan"<<endl<<"3. Perkalian"<<endl<<"4. Pembagian"<<endl;
    cout<<"masukan nomor yang diinginkan :";
    cin>>pilih;
    cout<<"Masukan Bilangan 1 :"; cin>>a;
    cout<<"Masukan Bilangan 2 :"; cin>>b;
    switch (pilih){
        case(1): hasil=a+b; break;
        case(2): hasil=a-b; break;
        case(3): hasil=a*b; break;
        case(4): hasil=a/b; break;
    }
    cout<<"hasil :"<<hasil<<endl;
    cout<<"Apakah anda ingin untuk melakukan kalkulasi kembali?(y/n)"<<endl;
    cin>>x;
    }
    while(x=='y');
    cout<<"------TERIMAKASIH------"<<endl;
    return 0;
}
