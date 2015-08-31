/*Nama: Widya Wirachantika
  Kelas: IF-38-01
  Nim: 1301144011
*/

# include <iostream>
using namespace std;
int main()
{
    char x;
    float a,b;
    cout << "Masukkan operator +, -, *, /: ";
    cin >> x;
    cout << "Masukkan angka pertama: ";
    cin >> a;
    cout << "Masukkan angka kedua: ";
    cin >> b;
    switch(x) {
        case '+':
            cout << a+b;
            break;
        case '-':
            cout << a-b;
            break;
        case '*':
            cout << a*b;
            break;
        case '/':
            cout << a/b;
            break;
        default:
            cout << "Tidak Terdeteksi";
            break;
    }
    return 0;
}
