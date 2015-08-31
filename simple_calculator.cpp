#include <iostream>
using namespace std;
int main ()
{
    float a,b,c;
    string D,pl ;
    do {
    cout<<"pilihan penghitungan : a. perkalian b.pembagian c.pengurangan d.pertambahan";
    cin>>D;
    cout<<"masukkan angka a = ";
    cin>>a;
    cout<<"masukkan angka b = ";
    cin>>b;

     if (D=="a")
     {
        c=a*b;
     }
    else if (D=="b")
    {
        c=a/b;
    }
    else if (D=="c"){
        c=a-b;
    }
    else if (D=="d"){
        c=a+b;
    }
    cout<<"hasil penghitungan: "<<c;
    cout<<" Ulangi perhitungan? ";
    cin>>pl;
    }
    while ((pl=="y") or (pl=="Y"));
    return 0;
    }
