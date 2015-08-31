#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
	float a,b,hasil;
	string hitung,kembali;
	cout<<"---------------Cara Menggunakan Kalkulator---------------"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"Bilangan 1: masukan bilangan pertama"<<endl;
	cout<<"Bilangan 2: masukan bilangan kedua"<<endl;
	cout<<"Operasi hitung: masukan operasi hitung yang mau digunakan"<<endl;
	cout<<"========================================================="<<endl;
	kerja:
	cout<<"Bilangan 1: "; cin>>a;
	cout<<"Bilangan 2: "; cin>>b;
	cout<<"Operasi Hitung: "; cin>>hitung;

	if (hitung=="+")
	{
		hasil = a+b;
		cout<<"Hasilnya "<<hasil;
	}
	else if (hitung=="-")
	{
		hasil = a-b;
		cout<<"Hasilnya "<<hasil;
	}
	else if (hitung=="*")
	{
		hasil = a*b;
		cout<<"Hasilnya "<<hasil;
	}
	else if (hitung=="/")
	{
		hasil = a/b;
		cout<<"Hasilnya "<<hasil<<endl;
	}
	else
	{
		cout<<"Operasi hitung yang Anda minta tidak terdaftar"<<endl;
		goto kerja;
	}
	cout<<"Hitung lagi? Y/N"<<endl; cin>>kembali;
	if (kembali=="Y")
	{
		goto kerja;
	}
	else
	{
		cout<<"Tekan Enter untuk keluar!"<<endl;
	}
	getch();
}
