# include <iostream>
using namespace std;
int main()
{
    char o;
    float angka1,angka2;
    cout << "Masukkan operator yang anda inginkan, kali (*), bagi (/), tambah (+), atau kurang(-)" << endl;
    cin >> o;
    cout << "Masukkan angka 1:" << endl;
    cin >> angka1;
    cout << "Masukkan angka 2:" << endl;
    cin >> angka2;
    cout << "Hasilnya:" << endl;
    switch (o) {
    case '+':
        cout << angka1+angka2;
        break;
    case '-':
        cout << angka1-angka2;
        break;
    case '*':
        cout << angka1*angka2;
        break;
    case '/':
        cout << angka1/angka2;
        break;
    default:
        cout << "Maaf, operasi yang anda masukkan tidak tersedia";
        break;
    }
    return 0;
}
