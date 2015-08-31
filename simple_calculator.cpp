#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float num1,num2,hasil;
    int pil;
    char pilihan;

    pilihan='y';
    do {
    cout << "Input number 1: "; cin >> num1;
    cout << "Input number 2: "; cin >> num2;
    cout << "Choose operator: "<<endl;
    cout << "1.Plus"<<endl;
    cout << "2.Minus"<<endl;
    cout << "3.Multiple"<<endl;
    cout << "4.Divide"<<endl;
    cout << "You choose: "; cin >> pil;
    if (pil==1) {
        hasil= num2+num1;
        cout << "The equals from "<<num1<<" + "<<num2<<" is " <<hasil<<endl;
    }
    else if (pil==2){
        hasil=num2-num1;
        cout << "The equals from "<<num1<<" - "<<num2<<" is " <<hasil<<endl;

    }
    else if (pil==3) {
        hasil=num2*num1;
        cout << "The equals from "<<num2<<" * "<<num1<<" is " <<hasil<<endl;
    }
    else if (pil==4) {
        hasil=num2/num1;
        cout << "The equals from "<<num2<<" / "<<num1<<" is " <<hasil<<endl;
    }
    else{
        cout<< "Invalid Input";
        getch();
        return 0;
    }

    cout<<"input again?(y/n) \n"<<endl;
        cin>>pilihan;
    }while (pilihan!='n');

    getch();
    return 0;
    }
