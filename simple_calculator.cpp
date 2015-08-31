//Nama: Andhika Gilang K
//Kelas : IF-38-01
//NIM: 1301140361

#include <iostream>

using namespace std;

int main ()
{
    float x,y,jum;
    char z,b;

    cout << "start? Y/N" <<endl;
    cin >> b;
    while (b=='Y')
    {


    cout << "Pilih Operasi hitungan :" <<endl;
    cin>> z;


    cout << "Masukan angka ke-1 :" <<endl;
    cin >> x;

    cout << "Masukan angka ke-2 :" <<endl;
    cin>> y;


    if (z=='+')
        jum=x+y;

    else if (z=='-')
        jum=x-y;

    else if (z=='/')
        jum=x/y;

    else if (z=='*')
        jum=x*y;



    cout << "hasilnya: "<<jum <<endl;




    cout <<"Continue? Y/N" <<endl;
    cin>>b;

    }
    return 0;
}
