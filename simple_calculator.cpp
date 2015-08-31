#include <iostream>

using namespace std;

int main() {
	int a,b,c;
    char d;
    d='y';
    while (d=='y' || d=='Y'){
        cout<<"Masukkan Angka Pertama : ";
        cin>>a;
        cout<<"Masukkan Angka Kedua : ";
        cin>>b;

        cout<<"Pilih Perhitungan Yang Ingin Anda Lakukan : "<<endl;
        cout<<" 1. Perkalian "<<endl;
        cout<<" 2. Pembagian "<<endl;
        cout<<" 3. Pertambahan "<<endl;
        cout<<" 4. Pengurangan "<<endl;
        cout<<"Pilihan anda : ";
        cin>>c;
        cout<<endl;

        if (c==1)
            cout<<"Hasilnya : "<<a*b;
        else if (c==2)
            cout<<"Hasilnya : "<<a/b;
        else if (c==3)
            cout<<"Hasilnya : "<<a+b;
        else if (c==4)
            cout<<"Hasilnya : "<<a-b;
        else
            cout<<"Pilihan yang anda masukkan salah"<<endl;
        cout<<endl;

        cout<<"Apakah anda ingin melakukan perhitungan lagi ? (Y/N)";
        cin>>d;
        cout<<endl;
    }
    return 0;
}
