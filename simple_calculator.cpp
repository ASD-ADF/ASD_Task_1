#include <iostream>
#include <stdio.h>
using namespace std;
using std::cout;

int main()
{
char again;
int a, b, pilihan;
float c;
menu:

    cout << "Kalkulator sederhana\n";
   	cout << "1.Pertambahan\n";
   	cout << "2.Pengurangan\n";
   	cout << "3.Perkalian\n";
   	cout << "4.Pembagian\n";

   	cout << "Pilihan anda : ";
   	cin >> pilihan;

   	if (pilihan==1)
{
	cout << "Masukkan angka pertama :";
	cin>> a;
	cout << endl;
	cout << "Masukkan angka kedua :";
	cin >> b;
	cout << endl;
	c= a+b;
	cout << "Hasil = ";
	cout << c;


}
	else if (pilihan==2)
{
	cout << "Masukan angka pertama :";
	cin>> a;
	cout << endl;
	cout << "Masukan angka kedua : ";
	cin >> b;
	cout << endl;
	c= a-b;
	cout << "Hasil =  ";
	cout << c;
}

	else if (pilihan==3)
{
	cout << "Masukan angka pertama :";
	cin>> a;
	cout << endl;
	cout << "Masukan angka kedua :";
	cin >> b;
	cout << endl;
	c= a*b;
	cout << "Hasil =  ";
	cout << c;
}

	else if (pilihan==4)
{
	cout << "Masukan angka pertama :";
	cin>> a;
	cout << endl;
	cout << "Masukan angka kedua :";
	cin >> b;
	cout << endl;
	c= a/b;
	cout << "Hasil =  ";
	cout << c;
}

}
