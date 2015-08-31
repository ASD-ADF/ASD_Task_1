#include <iostream>
#include<math.h>
#include<conio.h>
#include <conio.h>
#include <cstdlib>


using namespace std;

int main()
{
    int menu,c,d;
    float a,b,hasil,phi=22/7;
    do {
    cout << "============================pilihan============================ \n";
    cout << "                         1.penjumlahan \n";
    cout << "                         2.pengurangan \n";
    cout << "                         3.pembagian \n";
    cout << "                         4.perkalian \n";
    cout << "                         5.luas segi empat \n";
    cout << "                         6.luas segitiga \n";
    cout << "                         7.luas lingkaran \n";
    cout << "                         0.exit\n";
    cout << "================================================================ \n";
    cout << "\n";
    cout << "masukkan pilihan anda: "; cin >> menu;

        if (menu==1) {
            cout << "masukkan angka pertama: "; cin >> a;
            cout << "masukkan angka kedua: "; cin >> b;
            hasil=a+b;
            cout << a << " + " << b << " = " << hasil;
            cout <<  "\n";
            getch();
            system("CLS");
            }
        else if (menu==2) {
            cout << "masukkan angka pertama: "; cin >> a;
            cout << "masukkan angka kedua: "; cin >> b;
            hasil=a-b;
            cout << a << " - " << b << " = " << hasil;
            cout <<  "\n";
            getch();
            system("CLS");
            }
        else if (menu==3) {
            cout << "masukkan angka pertama: "; cin >> a;
            cout << "masukkan angka kedua: "; cin >> b;
            hasil=a/b;
            cout << a << " : " << b << " = " << hasil;
            cout <<  "\n";
            getch();
            system("CLS");
            }
        else if (menu==4) {
            cout << "masukkan angka pertama: "; cin >> a;
            cout << "masukkan angka kedua: "; cin >> b;
            hasil=a*b;
            cout << a << " x " << b << " = " << hasil;
            cout <<  "\n";
            getch();
            system("CLS");
            }
        else if (menu==5) {
            cout << "masukkan sisi persegi: "; cin >> a;
            hasil=a*a;
            cout << "luas persiga tersebut adalah: " << hasil << endl;
            cout <<  "\n";
            getch();
            system("CLS");
            }
        else if (menu==6) {
            cout << "masukkan alas segitiga: "; cin >> a;
            cout << "masukkan tinggi segitiga: "; cin >> b;
            hasil=(a*b)/2;
            cout << "luas segitiga tersebut adalah: " << hasil << endl;
            cout <<  "\n";
            getch();
            system("CLS");
            }
        else if (menu==7) {
            cout << "masukkan jari jari lingkaran: "; cin >> a;
            hasil=a*a*phi;
            cout << "luas lingkaran tersebut adalah: " << hasil << endl;
            cout <<  "\n";
            getch();
            system("CLS");
            }
        else if (menu>7) {
            cout << "\n                   pilihan tidak ada sayang :(  \n";
            getch();
            system("CLS");
        }
    } while (menu!=0);
    cout << "\n                           terima kasih sayang :) \n";
    return (0);
}
