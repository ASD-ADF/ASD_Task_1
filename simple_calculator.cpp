#include <iostream>
#include <math.h>
#include <conio.h>
#include <cstdlib>

using namespace std;

int main ()
{
    int p,i;
    float hasil,a,b;
    char ch;

    do {


    cout << "o=========================MENU=========================o" << endl;
    cout << "		     1. Kali"<< endl;
    cout << "		     2. Bagi" << endl;
    cout << "		     3. Tambah" << endl;
    cout << "		     4. Kurang" << endl;
    cout << "		     5. Akar" << endl;
    cout << "		     6. Pangkat" << endl;
    cout << "		     7. Exit" << endl;
    cout << "o======================================================o" << endl;
    cout << "Menu Pilihan : "; cin >> p;

    	if (p ==1) {
    		cout << " Masukkan Angka Pertama : "; cin >> a;
    		cout << " Masukkan Angka Kedua : "; cin >> b;
    		hasil=a*b;
    		cout << "Hasilnya Adalah : " << hasil << endl;
    		getch();
            system("CLS");

    	}
    	if (p ==2) {
    		cout << " Masukkan Angka Pertama : "; cin >> a;
    		cout << " Masukkan Angka Kedua : "; cin >> b;
    		hasil=a/b;
    		cout << "Hasilnya Adalah : " << hasil << endl;
    		getch();
    		system("CLS");
    	}
    	if (p ==3) {
    		cout << " Masukkan Angka Pertama : "; cin >> a;
    		cout << " Masukkan Angka Kedua : "; cin >> b;
    		hasil=a+b;
    		cout << "Hasilnya Adalah : " << hasil << endl;
    		getch();
    		system("CLS");
    	}
    	if (p ==4) {
    		cout << " Masukkan Angka Pertama : "; cin >> a;
    		cout << " Masukkan Angka Kedua : "; cin >> b;
    		hasil=a-b;
    		cout << "Hasilnya Adalah : " << hasil << endl;
    		getch();
    		system("CLS");
    	}
    	if (p ==5) {
    		cout << " Masukkan Angka : "; cin >> a;
    		hasil=sqrt(a);
    		cout << "Hasilnya Adalah : " << hasil << endl;
    		getch();
    		system("CLS");
    	}
    	if (p ==6) {
    		cout << " Masukkan Angka  : "; cin >> a;
    		cout << " Masukkan Pangkat : "; cin >> b;
    		 hasil=1;
             for (i=1;i<=b;i++){
              hasil=hasil*a;
              }

            cout << "Pangkat dari " << a << " adalah " << hasil;
    		getch();
    		system("CLS");
    	}
    	else if (p>7) {
            cout << "Pilihan Menu Salah Silahkan Masukkan Kembali";
            getch();
    		system("CLS");
    	}
    	} while (p != 7);
    	if (p ==7) {
    		cout << "Sampai Jumpa" << endl;
    	}
return (0);
}
