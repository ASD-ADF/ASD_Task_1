#include<iostream>
#include<conio.h>
#include<cstdlib>
using namespace std;
int main()
{
int n,bil1,bil2;
float hasil;
cout<<"\t\t\t\tMARTA'S CALCULATOR"<<endl<<endl;
cout<<"==============================================================================="<<endl<<endl;
do {
cout<<"1. Penjumlahan"<<endl<<endl;
cout<<"2. Pengurangan"<<endl<<endl;
cout<<"3. Perkalian"<<endl<<endl;
cout<<"4. Pembagian"<<endl<<endl;
cout<<"Masukkan Nomor Sesuai dengan Operator yang Ingin Kamu Lakukan :";cin>>n;
cout<<"==============================================================================="<<endl<<endl;

if(n==1) {
    cout<<"Masukkan Bilangan ke-1: ";cin>>bil1;
    cout<<"Masukkan Bilangan ke-2: ";cin>>bil2;
    hasil=bil1+bil2;
    cout << "Hasil Penjumlahan : "<<hasil;
    getch();
    system("CLS");
    }
if(n==2){
    cout<<"Masukkan Bilangan ke-1: ";cin>>bil1;
    cout<<"Masukkan Bilangan ke-2: ";cin>>bil2;
    hasil=bil1-bil2;
    cout << "Hasil Pengurangan : "<< hasil;
    getch();
    system("CLS");
    }
if(n==3){
    cout<<"Masukkan Bilangan ke-1: ";cin>>bil1;
    cout<<"Masukkan Bilangan ke-2: ";cin>>bil2;
    hasil=bil1*bil2;
    cout <<  "Hasil Perkalian : "<<hasil;
    getch();
    system("CLS");
    }
if(n==4){
        cout<<"Masukkan Bilangan ke-1: ";cin>>bil1;
    cout<<"Masukkan Bilangan ke-2: ";cin>>bil2;
    hasil=bil1/bil2;
    cout <<  "Hasil Pembagian : "<<hasil;
    getch();
    system("CLS");
    }
else if (n > 4) {
    cout<<"Pilihan Salah ";
    getch();
    system("CLS");
    }
} while(n!=0);
return(0);
}
