#include <iostream>;
#include <stdlib.h>;

using namespace std;

int main()
{
int op1,op2,cus;
float res;
string yn;

	cout << "==========================";
	cout << "SELAMAT DATANG DI CALCULATOR";
	cout << "==========================";
    do
	{
	cout << "masukan angka pertama : ";
	cin >> op1;
	cout << "masukan angka kedua : ";
	cin >> op2;
	cout << "Operation List : \n";
	cout << "1. penjumlahan + \n";
	cout << "2. Pengurangan - \n";
	cout << "3. Pengalian x \n";
	cout << "4. Pembagian : \n";
	cout << "Masukan angka pilihan operasi anda : ";
	cin >> cus ;

	if (cus == 1)
		{
		res = op1 + op2;
		cout << "Hasil dari Penjumlahan tersebut adalah : \n" << res << "\n";
		}
	else if (cus == 2)
		{
		res = op1 - op2;
		cout << "Hasil dari Pengurangan tersebut adalah : " << res << "\n";
		}
	else if (cus == 3)
		{
		res = op1 * op2;
		cout << "Hasil dari Perkalian tersebut adalah : " << res << "\n";
		}
	else if (cus == 4)
		{
		res = op1 / op2;
		cout << "Hasil dari Pembagian tersebut adalah : " << res << "\n";
		}
    else
        {
        cout << "pilihan diluar yang disediakan";
        }
    cout << "apakah anda ingin menggunakan kalkulator lagi ? (y/n)";
    cin >> yn;

    }
	while (yn !="n");

return(0);

}
