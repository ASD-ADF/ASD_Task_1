#include <iostream>
using namespace std;

int main()
{
	int pilih;
	float a,b,Hasil;
	string X;
	do
    {
        cout<<"Kalkulator"<<endl;
        cout<<"Menu :"<<endl;
        cout<<"1. Tambah"<<endl;
        cout<<"2. Kurang"<<endl
        cout<<"3. Kali"<<endl;
        cout<<"4. Bagi"<<endl;
        cout<<"Masukan Nomer :";
        cin>>pilih;
        cout<<"Masukan Bilangan ke 1 :"; cin>>a;
        cout<<"Masukan Bilangan ke 2 :"; cin>>b;
        switch (pilih)
        {
            case(1): Hasil=a+b; break;
            case(2): Hasil=a-b; break;
            case(3): Hasil=a*b; break;
            case(4): Hasil=a/b; break;
        }
        cout<<"Hasil : "<<Hasil<<endl;
        cout<<"Apakah anda ingin menghitung kembali?(YA/TIDAK)"<<endl;
        cin>>X;
    }
	while(X=="YA");
	return 0;
	}
