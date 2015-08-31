#include<iostream>
#include<string.h>
#include<conio.h>

using namespace std;
int main()
{
      awal:
      string pilih,kembali,ulang;
      float x,y,h;
      cout<<"==================================================="<<endl;
      cout<<"=============== KALKULATOR SEDERHANA==============="<<endl;
      cout<<"==================================================="<<endl;
      cout<<"            Nama : Muhamad Rifky Adhani            "<<endl;
      cout<<"                 Nim : 1103134368                  "<<endl;
      cout<<"==================================================="<<endl;
      cout<<" "<<endl;
      ulang:
      cout<<"  Masukkan Angka Ke-1 : ";
      cin>>x;
      cout<<"  Masukkan Angka Ke-2 : ";
      cin>>y;
      cout<<" "<<endl;
      cout<<"   Menu Pilihan Operasi Hitung "<<endl;
      cout<<"   1. Tambah "<<endl;
      cout<<"   2. Kurang "<<endl;
      cout<<"   3. Bagi "<<endl;
      cout<<"   4. Kali "<<endl;
      cout<<" "<<endl;
      cout<<"  Masukkan Pilihan : ";
      cin>>pilih;
      cout<<" "<<endl;
      kembali:
      cout<<" "<<endl;
      if(pilih == "1")
      {
            h = x+y;
            cout<<"  Hasil Penjumlahan "<<x<<"+"<<y<<" adalah = "<<h;
            cout<<" "<<endl;
      }
      else if(pilih == "2")
      {
            h = x-y;
            cout<<"  Hasil Penngurangan "<<x<<"-"<<y<<" adalah = "<<h;
            cout<<" "<<endl;
      }
      else if(pilih == "3")
      {
            h = x/y;
            cout<<"  Hasil Pembagian "<<x<<"/"<<y<<" adalah = "<<h;
            cout<<" "<<endl;
      }
      else if(pilih == "4")
      {
            h = x*y;
            cout<<"  Hasil Perkalian "<<x<<"x"<<y<<" adalah = "<<h;
            cout<<" "<<endl;
      }
      else
            {
            cout<<"  Maaf Pilihan Yang Anda Masukkan Salah ! "<<endl;;
            goto kembali ;
            }
      cout<<"Apakah anda ingin mengulang : [Y/N] ? "  ;
    char masuk ;
    cin>>masuk;
        if (masuk == 'Y')
            goto awal ;
        else if (masuk == 'N')
            {
            cout<<" ";
            goto akhir;
            }
        else
            {
            cout<<"Maaf Keyword Yang Anda Masukkan Salah "<<endl;
            goto kembali;
            }
akhir:

getch ();
return 0;
}

