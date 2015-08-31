#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a, b, menu;
    float hasil;
    cout << " Menu Calculator :\n";
    cout << "1. Jumlah\n";
    cout << "2. Kurang\n";
    cout << "3. Kali\n";
    cout << "4. Bagi\n";
    cout << " Masukkan Pilihan Menu : ";
    cin>>menu;

    switch(menu)
        { case 1:
                cout<<"Masukkan bilangan 1 = ";cin>>a;
                cout<<"Masukkan bilangan 2 = ";cin>>b;
            hasil=a+b;
            cout<<"Hasil Penjumlahannya = "<<hasil<<endl<<endl;
            break;
        case 2:
                cout<<"Masukkan bilangan 1 = ";cin>>a;
                cout<<"Masukkan bilangan 2 = ";cin>>b;
            hasil=a-b;
            cout<<"Hasil Pengurangannya = "<<hasil<<endl<<endl;
            break;
        case 3:
                cout<<"Masukkan bilangan 1 = ";cin>>a;
                cout<<"Masukkan bilangan 2 = ";cin>>b;
            hasil=a*b;
            cout<<"Hasil Perkaliannya = "<<hasil<<endl<<endl;
            break;
        case 4: 
                 cout<<"Masukkan bilangan 1 = ";cin>>a;
                cout<<"Masukkan bilangan 2 = ";cin>>b;
            hasil=a/b;
            cout<<"Hasil Pembagiannya = "<<hasil<<endl<<endl;
            break;
        default:
            cout<<"Menu Belum Ada";
        }
    return(0);
}
