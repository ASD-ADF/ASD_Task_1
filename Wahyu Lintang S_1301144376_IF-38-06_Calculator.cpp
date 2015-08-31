#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    double a, b, jwb;
    int pil;
    char x;

    do{
    system("CLS");
    cout << "Pilih Operasi Hitung" << endl << endl;
    cout << "1.Penjumlahan" << endl;
    cout << "2.Pengurangan" << endl;
    cout << "3.Perkalian" << endl;
    cout << "4.Pembagian" << endl;
    cout << "5.Keluar" << endl;
    cin >> pil;


    switch(pil){
        case 1:
        cout << "Masukkan bilangan pertama: ";
        cin >> a;
        cout << "Masukkan bilangan kedua : ";
        cin >> b;
        jwb = a + b;
        cout << "Hasil: " << a << " + " << b << " = " << jwb << endl;
        break;
        case 2:
        cout << "Masukkan bilangan pertama: ";
        cin >> a;
        cout << "Masukkan bilangan kedua : ";
        cin >> b;
        jwb = a - b;
        cout << "Hasil: " << a << " - " << b << " = " << jwb << endl;
        break;
        case 3:
        cout << "Masukkan bilangan pertama: ";
        cin >> a;
        cout << "Masukkan bilangan kedua : ";
        cin >> b;
        jwb = a * b;
        cout << "Hasil: " << a << " * " << b << " = " << jwb << endl;
        break;
        case 4:
        cout << "Masukkan bilangan pertama: ";
        cin >> a;
        cout << "Masukkan bilangan kedua : ";
        cin >> b;
        jwb = a / b;
        cout << "Hasil: " << a << " / " << b << " = " << jwb << endl;
        break;
        case 5:
        cout << "Terimakasih!" << endl << endl;
        cin.get();
        return 0;
        break;


    }
    cout << "Ingin menggunakan kalkulator lagi?(y or n)";
    cin >> x;
    }while(x == 'y' ||x == 'Y');

    cin.get();
    return 0;
}
