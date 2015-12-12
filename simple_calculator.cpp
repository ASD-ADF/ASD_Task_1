#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int Exercise2(int Number, int Power)
{
    int Hasil=1;
    do
    {
        Hasil=Hasil*Number;
        Power--;
    }
   while(Power>=1);
    return Hasil;
}

int main()
{
    int bil1,bil2,menu;
    double Hasil;
    cout << " Kalkulator On ";
    cout << " 1. Jumlah ";
    cout << " 2. Kurang ";
    cout << " 3. Bagi ";
    cout << " 4. Kali ";
    cout << " 5. Akar ";
    cout << " 6. Pangkat ";
    cout << " 7. Off ";
    cout << " Pilihan =  ";
    cin  >> menu;

    switch (menu)
    {
    case 1:
        cout << " Input Bilangan Pertama =  ";
        cin  >> bil1;
        cout << " Input Bilangan Kedua =  ";
        cin  >> bil2;
        Hasil=bil1+bil2;
        cout << " Hasil =  "<<Hasil<<endl;
        break;
    case 2:
        cout <<" Input Bilangan Pertama =  ";
        cin  >> bil1;
        cout <<" Input Bilangan Kedua =  ";
        cin  >> bil2;
        Hasil=bil1-bil2;
        cout << " Hasil =  "<<Hasil<<endl;
        break;
    case 3:
        cout << " Input Bilangan Pertama =  ";
        cin  >> bil1;
        cout << " Input Bilangan Kedua =  ";
        cin  >> bil2;
        Hasil=bil1/bil2;
        cout << " Hasil =  "<<Hasil<<endl;
        break;
    case 4:
        cout << " Input Bilangan Pertama =  ";
        cin  >> bil1;
        cout << " Input Bilangan Kedua = ";
        cin  >> bil2;
        Hasil=bil1*bil2;
        cout << " Hasil =   "<<Hasil<<endl;
        break;
    case 5:
        cout << " Input Bilangan =  ";
        cin  >> bil1;
        Hasil=sqrt(bil1);
        cout << " Hasil =  "<<Hasil<<endl;
        break;
    case 6:
        int Power, Number;
        cout << " Input Angka :  ";
        cin  >> Number;
        cout << " Input Pangkat  :  ";
        cin  >> Power;
        cout << " ";
        cout << " Output : "<<Exercise2(Number, Power);
        break;
    case 7:
       exit(EXIT_FAILURE);

    }
    return main();
}
