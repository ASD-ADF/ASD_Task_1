#include <iostream>
using namespace std;

int main()
{
    float a, b, hasil;
    char oper,lg;
    do
    {
    // operasi kalkulatornya
    cout << "Masukkan operasinya seperti 10+2" << endl;
    cin >> a >> oper >> b;


    switch(oper)
    {
    case '+':
        hasil = a + b;
        break;

    case '-':
        hasil = a - b;
        break;

    case '*':
        hasil = a * b;
        break;

    case '/':
        hasil = a / b;
        break;

    default:
        cout << "Operatornya salah, hanya +,-,*,/." << endl;
        return -1;

    }
    // Output hasilnya
    cout << hasil << endl;
    cout << "Apakah anda ingin menghitung lagi ? (y/n)" <<endl;
    cin >> lg;
    }
    while ((lg=='y') or (lg=='Y'));
        return 0;

}
