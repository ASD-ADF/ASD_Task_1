//Created By Hizas Sabilal Rasyad / 1301140251

#include <iostream>
#include <conio.h>
#include <cmath>
#include <windows.h>
using namespace std;

void menu()
{
    cout<<"=========================="<<endl;
    cout<<"||  Klavier Calculator  ||"<<endl;
    cout<<"=========================="<<endl;
}

void legend()
{
    cout<<"|| L || (1) Sum          |"<<endl;
    cout<<"|| E || (2) Minus        |"<<endl;
    cout<<"|| G || (3) Multiply     |"<<endl;
    cout<<"|| E || (4) Divide       |"<<endl;
    cout<<"|| N || (5) Power        |"<<endl;
    cout<<"|| D || (6) Root         |"<<endl;
    cout<<"=========================="<<endl;
    cout<<endl;
}

double sum(double a, double b){return (a+b);}
double mins(double a, double b){return (a-b);}
double mult(double a, double b){return (a*b);}
double divi(double a, double b){return (a/b);}
double power(double a, double b){return (pow(a,b));}
double root(double a, double b){return pow(a,(1/b));}

int main()
{
    char answer;
    bool loop;
    int oprtr;
    double opr1, opr2;

    menu();
    legend();
    do
    {
        loop = false;
        cout<<"Operan 1 : "; cin>>opr1;
        cout<<"Operator : "; cin>>oprtr;
        cout<<"Operan 2 : "; cin>>opr2;
        cout<<endl;
        switch(oprtr)
        {
            case 1 : cout<<opr1<<" + "<<opr2<<" = "<<sum(opr1,opr2); break;
            case 2 : cout<<opr1<<" - "<<opr2<<" = "<<mins(opr1,opr2); break;
            case 3 : cout<<opr1<<" X "<<opr2<<" = "<<mult(opr1,opr2); break;
            case 4 : cout<<opr1<<" : "<<opr2<<" = "<<divi(opr1,opr2); break;
            case 5 : cout<<opr1<<" Power "<<opr2<<" = "<<power(opr1,opr2); break;
            case 6 : cout<<opr1<<" Root "<<opr2<<" = "<<root(opr1,opr2); break;
        }
        cout<<endl;
        cout<<"Again ?(Press Y for again)";
        answer = _getch();
        cout<<endl;
        if ((answer == 'Y') or (answer == 'y')){ loop = true; cout<<endl; }

    } while (loop == true);
    system("cls");
    cout<<"Thanks for using this app :)";
    cout<<endl;
    return 0;
}
