#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main()
{   float l, j, k,angk1, angk2;
    int pil;
    char pil1 = 'y';
    do {
        system("cls");
        cout << "KALKULATOR MAGIC" << endl;
    cout << "Masukan angka pertama: ";
    cin >>angk1;
    cout << "Masukan angka kedua: ";
    cin >>angk2;
    cout << "Pilih operasi bilangan: "<< endl;
    cout << "1.Penjumlahan"<< endl;
    cout << "2.Pengurangan"<< endl;
    cout << "3.Pembagian"<< endl;
    cout<< "4.Perkalian"<< endl;
    cout<< "pilihan: ";
    cin>>pil;
    if (pil == 1){
        l= angk1+angk2;
        cout<<"Hasil penjumlahan dari "<<angk1<<" + "<<angk2<<" adalah "<<l;
    }
    else if (pil==2){
        l= angk1-angk2;
        cout<<"Hasil pengurangan dari "<<angk1<<" - "<<angk2<<" adalah "<<l;
    }
     else if (pil==3){
        l= angk1/angk2;
        cout<<"Hasil pembagian dari "<<angk1<<" / "<<angk2<<" adalah "<<l;
    }
     else if (pil==4){
        l= angk1*angk2;
        cout<<"Hasil perkalian dari "<<angk1<<" * "<<angk2<<" adalah "<<l;
    }
    //system("cls");
    cout<<"\nIngin Menghitung Lagi (y/n) ? ";
    cin>>pil1;
    }while (pil1 != 'n' );


    return 0;
}
