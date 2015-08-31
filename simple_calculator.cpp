#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

int main()
{
    float a;
    float b;
    char opr;
    char jwb;
    float val;

    do
    {
        system("cls");
        cout << "Masukkan angka 1 : ";
        cin >> a;
        cout << "Masukkan angka 2 : ";
        cin >> b;
        cout << "Masukkan operator : ";
        cin >> opr;
        if (opr == '+')
        {
            val = a+b;
        }
        else if (opr == '-')
        {
            val = a-b;
        }
        else if (opr == '/')
        {
            val = a/b;
        }
        else if (opr == '*')
        {
            val = a*b;
        }
        else
        {
            cout << "Operator SALAH" << endl;
        }
        if ((opr == '+') or (opr == '*') or (opr == '-') or (opr == '/'))
        {
            cout << "hasil dari " << a << " " << opr << " " << b << " adalah : " << val << endl;
        }
        cout << "hitung lagi (y/n) ? ";
        cin >> jwb;
    } while (jwb == 'y');
    getch();
}
