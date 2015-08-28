#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

int main()
{
    int number,number1,hasil;
    char pil,pil1;

    pil1='y';
    do {
        system("cls");
        cout << "Calculator aja :v \n";
        cout << "Input number 1 : ";
        cin >> number;
        cin.ignore();
        cout << "Input number 2 : ";
        cin >> number1;
        cin.ignore();
        cout << "Choose Operator (*,-,+,/) : ";
        cin >> pil;
        cin.ignore();
        if (pil == '+') {
            hasil = number1 + number;
        }
        else if (pil == '-') {
            hasil = number1 - number;
        }
        else if (pil == '*') {
            hasil = number1 * number;
        }
        else if (pil == '/') {
            hasil = number1 / number;
        }
        else {
            cout << "Pilihan tidak ada \n";
            return 0;
        }
        cout << "The Equation from " << number1 << pil << number << " is " << hasil << "\n";
        cin.get();
        cout<<"Ingin menghitung lagi ? (y/n) : ";
        cin>>pil1;
    }while(pil1=='y');
    cout<<"\nThank's for using this calculator ^^. this program is created by Muhammad Wildan Iskandar";
    getch();
}
