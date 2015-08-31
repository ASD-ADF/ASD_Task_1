#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
      float x,y,hasil;
      string aksi,kembali;
      cout<<"  ###################MUHAMMAD RASHIEF##################  "<<endl;
      cout<<" -- KALKULATOR SEDERHANA --"<<endl;
      cout<<" Bilangan 1 -> Masukkan angka "<<endl;
      cout<<" Bilangan 2 -> Masukkan angka "<<endl;
      cout<<" Aksi -> Masukkan simbol +,*,/,- ."<<endl;
      cout<<"  ####################MUHAMMAD RASHIEF#################  "<<endl;
      ulang:
      cout<<" Bilangan 1 = ";
      cin>>x;
      cout<<" Bilangan 2 = ";
      cin>>y;
      cout<<" Aksi = ";
      cin>>aksi;
      if(aksi == "+")
      {
        hasil = x+y;
            cout<<" Hasil Penjumlahan "<<x<<"+"<<y<<" adalah = "<<hasil;
      }
      else if(aksi == "-")
      {
        hasil = x-y;
            cout<<" Hasil Penngurangan "<<x<<"-"<<y<<" adalah = "<<hasil;
      }
      else if(aksi == "/")
      {
        hasil = x/y;
            cout<<" Hasil Pembagian "<<x<<"/"<<y<<" adalah = "<<hasil;
      }
      else if(aksi == "*")
      {
        hasil = x*y;
            cout<<" Hasil Perkalian "<<x<<"x"<<y<<" adalah = "<<hasil;
      }
      cout<<endl<<" Apakah anda ingin memasukkan bilangan lagi ? Y / T "<<endl;
      cin>>kembali;
      if(kembali == "Y")
        {
            goto ulang;
      }
      else if(kembali == "y")
        {
            goto ulang;
      }
      else{
            cout<<" Tekan apapun untuk keluar dari program ";
      }
      getch();
}
