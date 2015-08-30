#include <iostream>
using namespace std;

int main()
{
    double x, y;
    int hasil;
    char ans='y';

    while (ans != 'n'){
        cout <<" Kalkulator \n";
        cout <<" angka 1 : "; cin>>x;
        cout <<" angka 2 : "; cin>>y;
        cout <<"1. Perkalian\n2. Pembagian\n3. Pertambahan\n4. Pengurangan\npilihan : "; cin >>hasil;
        cout <<"                             \n";
        switch (hasil){
        case 1 : cout<<"Hasilnya adalah : " <<x*y<<"\n";
        break;
        case 2 : cout<<"Hasilnya adalah : " <<x/y<<"\n";
        break;
        case 3 : cout<<"Hasilnya adalah : " <<x+y<<"\n";
        break;
        case 4 : cout<<"Hasilnya adalah : " <<x-y<<"\n";
        break;
        }
    cout<<"Apakah ingin menginput lagi? (y/n) : ";
    cin>>ans;
    }
    return 0;
}
