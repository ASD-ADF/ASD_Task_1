#include <iostream>

using namespace std;
int main()

{
    int x,y;
    float hasil;
    char a,b;

    b='y';

    while (b=='y')
    {
        cout<<"KALKULATOR CERDAS v1.0"<<endl<<"pilih"<<endl<<"1. penjumlahan"<<endl<<"2. pengurangan"<<endl<<"3. perkalian"<<endl<<"4. pembagian"<<endl;
        cin>>a;

        if (a=='1')
        {
            cout<<"anda memilih penjumlahan"<<endl<<"masukkan angka pertama :"<<endl;
            cin>>x;
            cout<<"masukkan angka kedua :"<<endl;
            cin>>y;
            hasil=x+y;
            cout<<"hasilnya : "<<hasil;
        }
        else if (a=='2')
        {
            cout<<"anda memilih pengurangan"<<endl<<"masukkan angka pertama :"<<endl;
            cin>>x;
            cout<<"masukkan angka kedua :"<<endl;
            cin>>y;
            hasil=x-y;
            cout<<"hasilnya : "<<hasil;
        }
        else if (a=='3')
        {
            cout<<"anda memilih perkalian"<<endl<<"masukkan angka pertama :"<<endl;
            cin>>x;
            cout<<"masukkan angka kedua :"<<endl;
            cin>>y;
            hasil=x*y;
            cout<<"hasilnya : "<<hasil;
        }
        else if (a=='4')
        {
            cout<<"anda memilih oembagian"<<endl<<"masukkan angka pertama :"<<endl;
            cin>>x;
            cout<<"masukkan angka kedua :"<<endl;
            cin>>y;
            hasil=x/y;
            cout<<"hasilnya : "<<hasil;
        }
        else
        {
            cout<<"Maaf program tidak mengenal inputan anda";
        }
        cout<<endl<<"apakah anda ingin memakai kalkulator lagi?(y/n)"<<endl;
        cin>>b;
    }
    return 0;
}
