#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;
int main()
{
    float num1,num2,pilih;
    float hsl;

    do{
    cout <<"    Kalkulator Simpel\n";
    cout <<"Pilihlah menu di bawah ini :\n";
    cout <<"[1] Penjumlahan\n";
    cout <<"[2] Pengurangan\n";
    cout <<"[3] Perkalian\n";
    cout <<"[4] Pembagian\n";
    cout <<"[5] Keluar\n";
    cout <<"Masukkan pilihan anda : ";
    cin>>pilih;

    if (pilih == 1)
    {
        cout<<"input bilangan pertama :";cin>>num1;
        cout<<"input bilangan kedua :";cin>>num2;
        hsl = num1+num2;
        cout<<"Hasilnya : " <<hsl<< endl;
        cout<<"Tekan Enter untuk memilih menu lagi";
        getch();
        system("CLS");
    }

    if (pilih == 2)
    {
        cout<<"input bilangan pertama :";cin>>num1;
        cout<<"input bilangan kedua :";cin>>num2;
        hsl = num1-num2;
        cout<<"Hasilnya : " <<hsl<< endl;
        cout<<"Tekan Enter untuk memilih menu lagi";
        getch();
        system("CLS");
    }

    if (pilih == 3 )
    {
        cout<<"input bilangan pertama :";cin>>num1;
        cout<<"input bilangan kedua :";cin>>num2;
        hsl = num1*num2;
        cout<<"Hasilnya : " <<hsl<< endl;
        cout<<"Tekan Enter untuk memilih menu lagi";
        getch();
        system("CLS");
    }

    if (pilih == 4 )
    {
        cout<<"input bilangan pertama :";cin>>num1;
        cout<<"input bilangan kedua :";cin>>num2;
        hsl = num1/num2;
        cout<<"Hasilnya : " <<hsl<< endl;
        cout<<"Tekan Enter untuk memilih menu lagi";
        getch();
        system("CLS");
    }

    else if (pilih > 5)
    {
        cout<<"Masukkan tidak valid\n";
        cout<<"Tekan Enter untuk memilih menu lagi";
        getch();
        system("CLS");
    }
    } while (pilih !=5);
    if (pilih == 5)
    {
        cout<<"TerimaKasih";
        getch();
        system("CLS");
    }
}
