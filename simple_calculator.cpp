#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main() {
	int a,b,c;
    char d;

    d='y';
    while (d=='y' || d=='Y'){
        cout<<"Masukkan angka ke-1 : ";
        cin>>a;
        cout<<"Masukkan angka ke-2 : ";
        cin>>b;

        cout<<"Pilih operasi aritmatika yang ingin anda lakukan : "<<endl;
        cout<<" 1. Penjumlahan "<<endl;
        cout<<" 2. Pengurangan "<<endl;
        cout<<" 3. Perkalian "<<endl;
        cout<<" 4. Pembagian "<<endl;
        cout<<"Pilihan anda : ";
        cin>>c;
        cout<<endl;

        if (c==1)
            cout<<"Hasilnya : "<<a+b;
        else if (c==2)
            cout<<"Hasilnya : "<<a-b;
        else if (c==3)
            cout<<"Hasilnya : "<<a*b;
        else if (c==4)
            cout<<"Hasilnya : "<<a/b;
        else
            cout<<"Operasi yang anda masukkan salah"<<endl;
        cout<<endl;

        cout<<"Apakah anda ingin melakukan perhitungan lagi ? (Y/N)";
        cin>>d;
        cout<<endl;
    }
    return 0;
}
