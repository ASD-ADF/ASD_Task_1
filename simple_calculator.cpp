#include <iostream>

using namespace std;
int main ()

{
    string ops;
    int i1,i2;
    float hasil;
    char opr;

do {
    cout<<"Masukkan bilangan ke-1 .\n";
    cin>>i1;
    cout<<"Masukkan bilangan ke-2 .\n";
    cin>>i2;
    cout<<"Masukkan operator perhitungan (+,-,*,/) .\n";
    cin>>opr;
    ".\n";

if (opr=='+')
hasil=i1+i2;
else if (opr=='-')
     hasil=i1-i2;
     else if (opr=='*')
          hasil=i1*i2;
          else if (opr=='/')
               hasil=i1/i2;
               else
               cout<<"Maaf inputan operator tidak sesuai./n";

    cout<<"Inputan bilangan ke-1:"<<i1<<".\n";
    cout<<"Inputan bilangan ke-2:"<<i2<<".\n";
    cout<<"Hasil perhitungan:"<<hasil<<".\n";
    cout<<"Ulangi perhitungan?(y/n).\n";
    cin>>ops;}
    while(ops!="n");
}
