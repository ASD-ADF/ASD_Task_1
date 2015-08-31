#include <iostream>

using namespace std;

int main()
{
double p,q;
int hasil;

cout <<"=====PROGRAM KALKULATOR=====\n";
cout <<"\n";
cout <<"\n";
cout <<"Masukkan Angka Pertama: ";cin>>p;
cout <<"Masukkan Angka Kedua: ";cin>>q;
cout <<"\n";
cout <<"\n";
cout <<"PILIH\n";
cout <<"1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\nMasukkan Pilihan diatas: ";cin>>hasil;
cout <<"\n";
cout <<"\n";
switch (hasil){
case 1 : cout<<"Hasilnya : "<<p+q<<"\n";
cout<<endl<<endl;
cout<<"*********************************************\n";
break;
case 2 : cout <<"Hasilnya : "<<p-q<<"\n";
cout<<endl<<endl;
cout<<"*********************************************\n";
break;
case 3 : cout <<"Hasilnya : "<<p*q<<"\n";
cout<<endl<<endl;
cout<<"*********************************************\n";
break;
case 4 : cout <<"Hasilnya : "<<p/q<<"\n";
cout<<endl<<endl;
cout<<"*********************************************\n";
break;
default : cout <<"Angka yang dimasukkan tidak ada dalam pilihan\n";
cout<<"**********************************************\n";

}

return 0;
}



