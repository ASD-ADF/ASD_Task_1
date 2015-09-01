#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int exercise2(int number, int power)
{
    int hasil=1;
    do
    {
        hasil=hasil*number;
        power--;
    }
    while(power>=1);
    return hasil;
}

int main()
{
    int bil1,bil2,menu;
    double hasil;
    cout << "\n";
    cout << "Kalkulator (1103134317)\n";
    cout << "1. Jumlah\n";
    cout << "2. Kurang\n";
    cout << "3. Bagi\n";
    cout << "4. Kali\n";
    cout << "5. Akar\n";
    cout << "6. Pangkat\n";
    cout << "7. Exit\n";
    cout << "\n";
    cout << "Pilihan menu = ";
    cin  >> menu;
    cout << "\n";

    switch (menu)
    {
    case 1:
        cout << "input bil ke-1 = ";
        cin  >> bil1;
        cout << "input bil ke-2 = ";
        cin  >> bil2;
        hasil=bil1+bil2;
        cout << "hasil = "<<hasil<<endl;
        break;
    case 2:
        cout << "input bil ke-1 = ";
        cin  >> bil1;
        cout << "input bil ke-2 = ";
        cin  >> bil2;
        hasil=bil1-bil2;
        cout << "hasil = "<<hasil<<endl;
        break;
    case 3:
        cout << "input bil ke-1 = ";
        cin  >> bil1;
        cout << "input bil ke-2 = ";
        cin  >> bil2;
        hasil=bil1/bil2;
        cout << "hasil = "<<hasil<<endl;
        break;
    case 4:
        cout << "input bil ke-1 = ";
        cin  >> bil1;
        cout << "input bil ke-2 = ";
        cin  >> bil2;
        hasil=bil1*bil2;
        cout << "hasil = "<<hasil<<endl;
        break;
    case 5:
        cout << "input bilangan = ";
        cin  >> bil1;
        hasil=sqrt(bil1);
        cout << "hasil = "<<hasil<<endl;
        break;
    case 6:
        int power, number;
        cout << "input number : ";
        cin  >> number;
        cout << "input power  : ";
        cin  >>power;
        cout << "\n";
        cout << "output : "<<exercise2(number, power);
        break;
    case 7:
        exit(EXIT_FAILURE);

    }
    return main();
}
