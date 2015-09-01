#include <iostream>
using namespace std;

int main() {
    int oprNum;
    float num1, num2;
    bool repeatVar = true;
    do {
        cout<<"Input Operan 1 : "; cin>>num1;
        cout<<"Input Operan 2 : "; cin>>num2;
        cout<<"1. Sum (+)"<<endl;
        cout<<"2. Min (-)"<<endl;
        cout<<"3. Multiply (*)"<<endl;
        cout<<"4. Divide (/)"<<endl;
        cout<<"Modulus, Power etc Coming Soon"<<endl;
        cout<<"Select Operator : "; cin>>oprNum;

        switch(oprNum) {
        case 1 : cout<<"Hasil : "<<num1 + num2<<endl; break;
        case 2 : cout<<"Hasil : "<<num1 - num2<<endl; break;
        case 3 : cout<<"Hasil : "<<num1 * num2<<endl; break;
        case 4 : cout<<"Hasil : "<<num1 / num2<<endl; break;
        }

        //Quit Confirmation
        cout<<endl;
        cout<<"Calculate Again??"<<endl;
        cout<<"1. Yes"<<endl;
        cout<<"2. No"<<endl; cin>>oprNum;
        if (oprNum == 2)
            repeatVar = false;

    } while(repeatVar == true);

    return 0;
}
