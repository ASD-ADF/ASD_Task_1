#include <iostream>
using namespace std;

int main ()
{
    float x,y,hasil;
    int pil;
    char jwb;

    jwb='y';
    while(jwb=='y')
    {
        cout<<"KALKULATOR"<<endl;
        cout<<"1.Penjumlahan"<<endl;
        cout<<"2.Pengurangan"<<endl;
        cout<<"3.Perkalian"<<endl;
        cout<<"4.Pembagian"<<endl;
        cout<<"Masukkan pilihan : ";
        cin>>pil;
        if(pil < 5)
        {
            cout<<"============"<<endl;
            switch(pil)
            {
                case 1: cout<<"Angka pertama : ";
                        cin>>x;
                        cout<<"Angka kedua : ";
                        cin>>y;
                        hasil=x+y;
                        cout<<"Hasil : "<<hasil;
                        break;

                case 2: cout<<"Angka pertama : ";
                        cin>>x;
                        cout<<"Angka kedua : ";
                        cin>>y;
                        hasil=x-y;
                        cout<<"Hasil : "<<hasil;
                        break;

                case 3: cout<<"Angka pertama : ";
                        cin>>x;
                        cout<<"Angka kedua : ";
                        cin>>y;
                        hasil=x*y;
                        cout<<"Hasil : "<<hasil;
                        break;

                case 4: cout<<"Angka pertama : ";
                        cin>>x;
                        cout<<"Angka kedua : ";
                        cin>>y;
                        hasil=x/y;
                        cout<<"Hasil : "<<hasil;
                        break;
            }
        }
        else
        {
            cout<<"INPUT SALAH";
        }
        cout<<endl;
        cout<<"Apakah Anda ingin menghitung lagi ? (y/n) : ";
        cin>>jwb;
        cout<<endl;
    }
    cout<<"============"<<endl;
    cout<<"SELESAI"<<endl;
    cout<<"============"<<endl;
    return 0;
}
