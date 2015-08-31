#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
int main()
{
      float a,b,hasil ;
	  int pilih;
	  char c;
	  menu:
      cout<<"pilih operasi"<<endl;
	  cout<<" 1. tambah"<<endl;
	  cout<<" 2. kurang"<<endl;
	  cout<<" 3. kali"<<endl;
	  cout<<" 4. bagi"<<endl;
	  cout<<" 5. exit"<<endl;
	  cout<<"masukan pilihan anda"<<endl;
	  cin>>pilih;
	  switch(pilih)
			{
			case 1:
					  cout<<"Masukkan angka pertama"<<endl;
					  cin>>a;
					  cout<<"Masukkan angka kedua"<<endl;
					  cin>>b;
					  hasil=a+b;
					  cout<<"Hasil Penjumlahannya adalah = "<<hasil<<endl;
					  cout<<"lanjut [y/t]"<<endl;
					  cin>>c;
					  if(c=='y')
						goto menu;
						else goto exit;
			break;
			case 2:
					  cout<<"Masukkan angka pertama"<<endl;
					  cin>>a;
					  cout<<"Masukkan angka kedua"<<endl;
					  cin>>b;
					  hasil=a-b;
					  cout<<"Hasil Pengurangannya adalah = "<<hasil<<endl;
					  cout<<"lanjut [y/t]"<<endl;
					  cin>>c;
					  if(c=='y')
						goto menu;
						else goto exit;
			break;
			case 3:
					  cout<<"Masukkan angka pertama"<<endl;
					  cin>>a;
					  cout<<"Masukkan angka kedua"<<endl;
					  cin>>b;
					  hasil=a*b;
					  cout<<"Hasil Perkaliannya adalah = "<<hasil<<endl;
					  cout<<"lanjut [y/t]"<<endl;
					  cin>>c;
					  if(c=='y')
						goto menu;
						else goto exit;
			break;
			case 4:
					  cout<<"Masukkan angka pertama"<<endl;
					  cin>>a;
					  cout<<"Masukkan angka kedua"<<endl;
					  cin>>b;
					  hasil=a/b;
					  cout<<"Hasil pembagiannya adalah = "<<hasil<<endl;
					  cout<<"lanjut [y/t]"<<endl;
					  cin>>c;
					  if(c=='y')
						goto menu;
						else goto exit;
			break;
			case 5:
            exit:
            cout<< "Terima kasih";
			break;
			default:
            cout<< "Maaf input yang anda masukkan salah";
            goto menu;
            break;
    }
}
