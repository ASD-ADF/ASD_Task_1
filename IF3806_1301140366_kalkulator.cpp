#include <iostream>
using namespace std;

int main ()
{
    int i1,i2;
    bool cek;
    char opt;
    float hasil;
    string a;

    do {
    cout << "Masukan Bilangan Pertama \n";
    cin >> i1;
    cout << "Bilangan 1 :"<< i1 << "\n";
    cout << "Masukan Bilangan Kedua \n";
    cin >> i2;
    cout << "Bilangan 2 :" << i2 << "\n";
    cout << "Masukkan Operator tambah,bagi,kurang,atau kali \n";
    cin >> opt;

    if (opt=='+')
        hasil = i1 + i2;
    else if ( opt=='-')
        hasil = i1 - i2;
    else if (opt =='*')
        hasil =i1 * i2;
    else if (opt =='/')
        hasil =i1/i2;
    cout << "Hasil Perhitungan :" << hasil << "\n";
    cek = false;
    do
    {   cout << "Hitung lagi? y/n \n";
        cin >> a ;
        if (a == "y" or a == "n")
            cek = true;
        else
            cout << "Hanya Masukkan y atau n. \n";
    } while (cek != true);

    } while (a != "n");
}
