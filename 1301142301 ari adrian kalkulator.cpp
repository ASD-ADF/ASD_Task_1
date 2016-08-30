#include <iostream>
using namespace std;
int main ()
{
    float x,y,z;
    string pil;
    do
    {
        cout<<"Input Angka 1 : ";
        cin>>x;
        cout<<"Input Angka 2 : ";
        cin>>y;
        cout<<"Pilihan Kalkulasi"<<endl;
        cout<<"A. Kali B. Bagi C. Tambah D. Kurang"<<endl;
        cin>>pil;
        if (pil=="a") {
            z = x*y;
        }
        else if (pil=="b") {
            z = x/y;
        }
        else if (pil=="c") {
            z = x+y;
        }
        else if (pil=="d") {
            z = x-y;
        }
        cout<<"Hasilnya : "<<z<<endl;
        cout<<"Ulangi ?(Y/N)"<<endl;
        cin>>pil;
    } while ((pil == "y") or (pil == "Y"));
    return 0;

}
