#include <iostream>
#include <string.h>
#include <conio.h>

using namaspace std;
int main ()

{
    float x,y,z;
    string operasi,kembali;
    cout<<"SIMPLE CALCULATOR"<<endl;
    cout<<"Operator (+,-,*,/) : "<<endl;
    endl;
    start;
    cout<<"Operan1 : ";
    cin>>x;
    cout<<"Operan2 : ";
    cin>>y;
    cout<<"Operator : ";
    cin>>operasi;
    if(operasi=="+")
    {
      z=x+y;
      cout<<x<<" + "<<y<<"= "<<z;
    }
    else if(operasi=="-")
    {
        z=x-y;
        cout<<x<<" - "<<y<<"= "<<z;
    }
    else if(operasi=="*")
    {
        z=x*y;
        cout<<x<<" X "<<y<<"= "<<z;
    }
    else if(operasi=="/")
    {
        z=x/y;
        cout<<x<<" / "<<y<<"= "<<z;
    }
    cout<<endl<<"Again ? Y / N"<<end;
    cin>>
        kembali;
        if(kembali=="Y")
        {
            goto start;
        }
        else if(kembali=="N")
            getch();
}
