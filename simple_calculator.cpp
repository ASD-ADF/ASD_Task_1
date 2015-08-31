#include<iostream>
#include <cstdlib>
using namespace std;

int main()
{
    double num1,num2,hasil;
    char op,ulang;

    system("cls");

    cout<<"Nama : Friendly Halomoan Sipayung"<<endl;
    cout<<"NIM  : 1301144001"<<endl;
    cout<<endl<<endl;

    do
    {
    cout<<"Operator (+,-,*,/) : "; cin>>op;
    cout<<"Angka pertama :";cin>>num1;
    cout<<"Angka kedua   :";cin>>num2;


    switch (op)
    {
     case'+':
             hasil=num1+num2;
             break;
     case'-':
             hasil=num1-num2;
             break;
      case'*':
             hasil=num1*num2;
             break;
      case'/':
             if(num2==0)
             {
             cout<<"hasil tidak valid"<<endl;
             }
             else{hasil=(num1/num2);cout<<endl;}
             break;
      default:
              cout<<"operator salah"<<endl;

           }

    if(op=='+' || op=='-' || op=='*' || (op=='/' && num2!=0))
    {
        cout<<"Hasil " <<num1 <<op <<num2 <<"= " <<hasil <<endl;
    }

           cout<<"Ulangi Kalkulator (Y/N) : "; cin>>ulang;
           cout<<endl<<endl;
           }
           while(ulang=='y'||ulang=='Y');
            {
              system("cls");
              return 0;
            }
    }
