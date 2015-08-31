#include <iostream>
using namespace std;

int main()
{
	int pilih;
	float a,b,Hasil;
	string X;
	do
    {
        cout<<"Calculator"<<endl;
        cout<<"Menu :"<<endl;
        cout<<"1. Plus"<<endl;
        cout<<"2. Minus"<<endl;
        cout<<"3. Multiplied by"<<endl;
        cout<<"4. Divide by"<<endl;
        cout<<"Input Number :";
        cin>>pilih;
        cout<<"Input Number 1 :"; cin>>a;
        cout<<"Input Number 2 :"; cin>>b;
        switch (pilih)
        {
            case(1): Hasil=a+b; break;
            case(2): Hasil=a-b; break;
            case(3): Hasil=a*b; break;
            case(4): Hasil=a/b; break;
        }
        cout<<"Equals : "<<Hasil<<endl;
        cout<<"Are you wanna calculate again?(YES/NO)"<<endl;
        cin>>X;
    }
	while(X=="YES");
	return 0;
	}
