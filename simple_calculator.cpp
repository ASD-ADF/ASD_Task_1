#include <iostream>

using namespace std;

int main ()
{  
    int o1,o2;
    char oper;
    float r;
    string c;

        cout << "Welcome to the basic calculator .\n";

    do {
    cout << "Insert the first number  .\n";
    cin >> o1;
    cout << "First Number :"<< o1 << ".\n";
    cout << "Insert the operator ! ";
    cin >> oper;
    cout << "Insert the second number .\n";
    cin >> o2;
    cout << "Second Number : "<< o2 << ".\n";


    if(oper=='+')
        r=o1+o2;
    else if (oper=='-')
        r=o1-o2;
    else if (oper=='/')
        r=o1/o2;
    else if (oper=='*')
        r=o1*o2;

    cout << "Result :" << r << ".\n";
    cout << "Try again? yes/no .\n";
    cin >> c;
    }
    while (c!="no");
}

