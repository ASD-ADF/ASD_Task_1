//Nama  : Muhammad Azhari Rahman
//Nim   : 1301144116
//Kelas : IF-38-06

#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
using namespace std;

int main(){
    string lagi;
    lagi = "Y";
    int pil,i;
    int a,b;
    float hasil;
    while (lagi=="Y"){
        system("cls");
        i=1;
        hasil=0;
        cout << "Simple Calculator" << endl << endl;
        cout << "Silahkan pilih operator yang diinginkan" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Bilangan m pangkat n" << endl;
        cout << "6. Exit \n \n";
        cout << "Masukkan pilihan anda (1,2,3,4,5,6) : ";
            cin >> pil;
        while (pil!=1 && pil!=2 && pil !=3 && pil!=4 && pil!=5 && pil!=6){
            cout << "Masukkan pilihan anda (1,2,3,4,5,6) : ";
            cin >> pil;}
        switch (pil){
            case 1 : system("cls");
                     cout << "Operasi Penjumlahan" << endl;
                     cout << "Masukkan angka pertama : ";
                     cin >> a;
                     cout << "Masukkan angka kedua   : ";
                     cin >> b;
                     hasil=a+b;
                     break;

            case 2 : system("cls");
                     cout << "Operasi Pengurangan \n";
                     cout << "Masukkan angka pertama : ";
                     cin >> a;
                     cout << "Masukkan angka kedua   : ";
                     cin >> b;
                     hasil=a-b;
                     break;

            case 3 : system("cls");
                     cout << "Operasi Perkalian \n";
                     cout << "Masukkan angka pertama : ";
                     cin >> a;
                     cout << "Masukkan angka kedua   : ";
                     cin >> b;
                     hasil=a*b;
                     break;

            case 4 : system("cls");
                     cout << "Operasi Pembagian \n";
                     cout << "Masukkan angka pertama : ";
                     cin >> a;
                     cout << "Masukkan angka kedua   : ";
                     cin >> b;
                     hasil=a/b;
                     break;

            case 5 : system("cls");
                     hasil = 1;
                     cout << "Operasi m pangkat n \n";
                     cout << "Masukkan angka   : ";
                     cin >> a;
                     cout << "Masukkan pangkat : ";
                     cin >> b;
                     while (i<=b){
                        hasil=hasil*a;
                        ++i;
                     }
                     break;

            case 6 : break;
            }
        cout << endl;
        if (pil!=6){
            cout << "Hasilnya adalah : " << hasil << endl;
            cout << "Apakah anda ingin melakukan penghitungan dengan operator lain ? (Y/N): ";
            cin >> lagi;
            while (lagi!="Y" && lagi!="N"){
                cout << "Apakah anda ingin melakukan penghitungan dengan operator lain ? (Y/N): ";
                cin >> lagi;}
        }
        else{
            lagi="N";
        }
    }
    cout << endl;
    cout << "Terima Kasih";
    getch();
    return 0;
}
