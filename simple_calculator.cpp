#include <iostream>

using namespace std;

int main ()
{
    int x1,x2;
    char oprt;
    float f;
    string str;

    do{
    cout << "Masukkan Bilangan 1 .\n";
    cin >> x1;
    cout << "Bilangan 1:"<<x1<<".\n";
    cout << "Masukkan Bilangan 2.\n";
    cin >> x2;
    cout <<"Bilangan 2 :"<<x2<<".\n";
    cout << "Masukkan Bilangan Operator.\n";
    cin >> oprt;

    if (oprt=='+')
        f=x1+x2;
    else if (oprt=='-')
        f=x1-x2;
    else if (oprt=='*')
        f=x1*x2;
    else if (oprt=='/')
        f=x1/x2;

    cout<<"Hasil:"<<f<<".\n";
    cout<<"Ingin Menghitung lagi? ya/tidak .\n";
    cin>>str;
    }
    while (str!="tidak");
}
