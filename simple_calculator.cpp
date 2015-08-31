#include <iostream>
using namespace std;

int main()
{
    float angka1,angka2,hasil;
    char lagi, ope;
	do
	{
		cout<<"Masukkan angka 1 : ";
		cin>>angka1;
		cout<<"Masukkan angka 2 : ";
		cin>>angka2;
		cout<<"Masukkan operator : "<<endl;
		cout<<"1. +  2. -  3. X  4. /  "<<endl;
		cin>>ope;
		if (ope == '+')
			{ hasil = angka1 + angka2; }
		else if (ope == '-')
			{ hasil = angka1 - angka2; }
		else if (ope == 'x')
			{ hasil = angka1 * angka2; }
		else if (ope == '/')
			{ hasil = angka1 / angka2; }
		cout<<"Hasilnya adalah : "<<hasil<<endl;
		cout<<"Hitung lagi?(Y/N) ";
		cin>>lagi;
		cout<<endl;
	} while (( lagi == 'y') or ( lagi == 'Y'));

	return 0;
}


