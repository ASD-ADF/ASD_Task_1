#include <iostream>
#include <stdio.h>
using namespace std;
using std::cout;

int main()
{
char again;
int a, b, cho;
float c;


menu:


    cout << "Welcome to my program\n";
   	cout << "This is CALCULATOR progam\n";
   	cout << "You can only user +,-,*,/ operator\n";
   	cout << "Choose one 1-4 as you want:\n";  
   	cout << "1.Pertambahan\n";
   	cout << "2.Pengurangan\n";
   	cout << "3.Perkalian\n";
   	cout << "4.Pembagian\n";

   	cout << "Chose one! : ";
   	cin >> cho;


   	if (cho==1) 
{
	Pertambahan:
	cout << "Masukan nilai Pertama :";
	cin>> a;
	cout << endl;
	cout << "M#include <cstdlib>asukan nilai Kedua :";
	cin >> b;
	cout << endl;
	c= a+b;
	cout << "Hasilnya adalah =";
	cout << c;

	cout << "\nAgain? [Y/T] =  ";
	cin >> again;

	
}
	else if (cho==2) 
{
	Pengurangan:
	cout << "Masukan nilai Pertama :";
	cin>> a;
	cout << endl;
	cout << "Masukan nilai Kedua :";
	cin >> b;
	cout << endl;
	c= a-b;
	cout << "Hasilnya adalah =  ";
	cout << c;

	cout << "\nAgain? [Y/T] =  ";
	cin >> again;
	
}

	else if (cho==3) 
{
	Perkalian:
	cout << "Masukan nilai Pertama :";
	cin>> a;
	cout << endl;
	cout << "Masukan nilai Kedua :";
	cin >> b;
	cout << endl;
	c= a*b;
	cout << "Hasilnya adalah =  ";
	cout << c;

	cout << "\nAgain? [Y/T] =  ";
	cin >> again;
	
	do{
	
		goto menu;

}
while (again=='Y' or 'y');


}

	else if (cho==4) 
{1
	Pembagian:
	cout << "Masukan nilai Pertama :";
	cin>> a;
	cout << endl;
	cout << "Masukan nilai Kedua :";
	cin >> b;
	cout << endl;
	c= a/b;
	cout << "Hasilnya adalah =  ";
	cout << c;

	cout << "\nAgain? [Y/T] =  ";
	cin >> again;
	
do{
	
		goto menu;

}
while (again=='Y' or 'y');


}




} 
