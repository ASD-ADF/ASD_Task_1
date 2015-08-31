#include <iostream>
#include <stdlib.h> //clear screen
#include <math.h> //khusus perhitungan
#include <conio.h>
using namespace std;

int main ()
{
    float menu,num1,num2,hasil;
    do
    {
    cout<<"Selamat Datang Di Program Kalkulator\n";
    cout<<"1. Penjumlahan\n";
    cout<<"2. Pengurangan\n";
    cout<<"3. Perkalian\n";
    cout<<"4. Pembagian\n";
    cout<<"5. Exit\n";
    cout<<"Pilih yang di inginkan :";
    cin>>menu;
    cin.ignore();
        if (menu==1)
        {
            system("cls");
            cout<<"Program Pertambahan \n";
            cout<<"masukkan angka pertama : ";
            cin>>num1;
            cin.ignore();
            cout<<"Masukkan angka kedua : ";
            cin>>num2;
            cin.ignore();
            hasil=num1+num2;
            cout<<"hasilnya adalah : " << hasil;
            getch();
            system ("cls");
        }
        else if (menu==2)
        {
            system("cls");
            cout<<"Program Pengurangan\n";
            cout<<"Masukkan angka pertama : ";
            cin>>num1;
            cin.ignore();
            cout<<"masukkan angka kedua : ";
            cin>>num2;
            cin.ignore();
            hasil=num1-num2;
            cout<<"hasilnya adalah : " << hasil;
            getch();
            system ("cls");
        }
        else if (menu==3)
        {
            system("cls");
            cout<<"Program Perkalian \n";
            cout<<"Masukkan angka pertama : ";
            cin>>num1;
            cin.ignore();
            cout<<"masukkan angka kedua : ";
            cin>>num2;
            cin.ignore();
            hasil=num1*num2;
            cout<<"Hasillnya adalah : " <<hasil ;
            getch();
            system ("cls");
        }
        else if (menu==4)
        {
            system("cls");
            cout<<"Program Pembagian\n";
            cout<<"Masukkan angka pertama : ";
            cin>>num1;
            cin.ignore();
            cout<<"Masukkan angka kedua : ";
            cin>>num2;
            cin.ignore();
            hasil=num1/num2;
            cout<<"Hasilnya adalah : " <<hasil;
            cin.ignore();
            system("cls");
        }
        else if (menu > 5)
        {
            system("cls");
            cout<<"Keyword Salah";
            cin.ignore();
            system("cls");

        }
        }
        while (menu != 5);
        return(0);
}
