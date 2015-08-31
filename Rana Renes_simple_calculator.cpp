# include <iostream>
using namespace std;
int main()
{
    char o, b;
    float angka1,angka2;
    cout << "Apakah anda ingin menghitung?" << endl;
    cin >> b;

    while (b == 'Y' )
    {
        cout << "Masukkan operator yang anda inginkan, kali (*), bagi (/), tambah (+), atau kurang(-)" << endl;
        cin >> o;
        cout << "Masukkan angka 1:" << endl;
        cin >> angka1;
        cout << "Masukkan angka 2:" << endl;
        cin >> angka2;
        cout << "Hasilnya:" << endl;
    switch (o)
    {
    case '+':
        cout << angka1+angka2 << endl;
        break;
    case '-':
        cout << angka1-angka2 << endl;
        break;
    case '*':
        cout << angka1*angka2 << endl;
        break;
    case '/':
        cout << angka1/angka2 << endl;
        break;
    default:
        cout << "Maaf, operasi yang anda masukkan tidak tersedia" << endl;
        break;
    }
    cout << "Hitung lagi?" << endl;
    cin >> b;
    }
    return 0;
}
