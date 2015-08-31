#include <iostream>
#include <conio.h>

//tugas membuat program kalkulator sederhana dari c++ untuk memenuhi tugas

using namespace std;

int main()
{
    int a,b,hasil;
	string kalku;
	
	cout << "Angka 1 : " << endl;
    cin >> a;
    cout << "Angka 2 : " << endl;
    cin >> b;
    
    cout << "===============" << endl;
    cout << "Nama	: I Putu Prima Ananda" << endl;
    cout << "NIM	: 1301144291" << endl;
    cout << "Kelas	: IF 38 01"	<< endl;
    cout << "===============" << endl;
	cout << "Kalkulator" << endl;
	cout << "Pilih Menu" << endl;
	cout << "1. Tambah." << endl;
	cout << "2. Kurang." << endl;
	cout << "3. Kali." << endl;
	cout << "4. Bagi." << endl;
	cout << "===============" << endl;
	cout << " " << endl;
	cin >> kalku;
	cout << " " << endl;
	
	if(kalku =="1")
	{
		hasil=a+b;
		cout<<"Hasil Tambah : "<<hasil;
		cout<<""<<endl;
	}
    else if(kalku =="2")
	{
		hasil=a-b;
		cout<<"Hasil Kurang : "<<hasil;
		cout<<""<<endl;
	}
    else if(kalku =="3")
	{
		hasil=a*b;
		cout<<"Hasil Kali : "<<hasil;
		cout<<""<<endl;
	}
    else if(kalku =="4")
	{
		hasil=a/b;
		cout<<"Hasil Bagi : "<<hasil;
		cout<<""<<endl;
	}
        
    return 0;
}
