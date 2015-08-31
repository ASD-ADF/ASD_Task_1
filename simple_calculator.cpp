#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    float op1,op2,jml;
    int opt;
    char lg;
    lg='y';
    while (lg=='y' || lg=='Y')
    {
        cout << "Kalkulator Sederhana \n";
        cout << "Masukan bilangan pertama : ";
        cin >> op1;
        cout << "Masukan bilangan kedua : ";
        cin >> op2;
        cout << "Pilih operasi yang diinginkan : \n 1. + \n 2. - \n 3. x \n 4. : \n ";
        cin >> opt;
        cout << "\n";
        if (opt == 1)
            {
            jml = op1+op2;
            cout << "Hasil : " << jml ;
            }
        else if (opt == 2)
            {
            jml = op1-op2;
            cout << "Hasil : " << jml ;
            }
        else if (opt == 3)
            {
            jml = op1*op2;
            cout << "Hasil : " << jml ;
            }
        else if (opt == 4)
            {
            jml = op1/op2;
            cout << "Hasil : " << jml ;
            }
        else
            cout << "input salah";
        cout << "\n";
        cout << "Lagi ?";
        cin >> lg;
        system("cls");
    }
}
