#include <iostream>
using namespace std;
int main()
{   int x1,x2;
    char t;
    float n;
    string k;

    do{
    cout<<"selamat datang di aplikasi kalkulator sederhana .\n";
    cout<<"masukan bilangan pertama: .\n";
    cin>>x1;
    cout<<"bilangan pertama:" <<x1<< ".\n";
    cout<<"masukan bilangan kedua: .\n";
    cin>>x2;
    cout<<"bilangan kedua: " <<x2<< " .\n";
    cout<<" masukan bilangan operator .\n";
    cin>>t;

    if (t=='+')
        n=x1+x2;

    else if (t=='-')
        n=x1-x2;

    else if(t=='*')
        n=x1*x2;

    else if (t=='/')
        n=x1/x2;

    cout<< "hasil:"<<n<<" .\n";
    cout<< "hitung lagi? yes/no .\n";
    cin>> k;
    }
    while(k!="no");
}
