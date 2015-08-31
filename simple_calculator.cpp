#include <iostream>
using namespace std;
int main()
{
    int    x,y,hasil ;
    char operation,i,t,z;
    awal :
    cout<<"Mau tambah(+),Kurang (-),Kali (*),Atau bagi (/)?"<<endl;
    cin >> operation;
    cout<<"Masukkan angka 1 :"<<endl;
    cin >> x;
    cout<<"Masukkan angka 2 :"<<endl;
    cin >> y;
    if (operation=='+'){
        cout<<"Hasilnya "<<x+y<<endl;
    }
    if (operation== '-') {
        cout<<"Hasilnya"<<x-y<<endl;

    }
    if (operation== '*') {
        cout<<"Hasilnya"<<x*y <<endl;

    }
    if (operation== '/') {
        cout<<"Hasilnya"<<x/y<<endl;

    }
    cout<<"Mau ngitung lagi ga ? (i/t)"<<endl;
    cin>> z;
    if (z== 'i') {
        goto awal;
    }
    else if (z== 't') {
        cout<<"Terima Kasih"<<endl;

    return 0;
    }
    else {}
    return 0;
}
