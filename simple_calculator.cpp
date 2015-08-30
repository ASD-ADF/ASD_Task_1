#include <iostream>
using namespace std;

// input function
void Input (float x, float y);

float a, b,result;
char aksi,answer;

void Input (float x, float y)
{
	a = x;
	b = y;

	if (aksi == ('+'))
	{
        result = x + y;
        cout << "= " << result << endl;
	}
	else if (aksi == ('-'))
	{
        result = x - y;
        cout << "= " << result << endl;
	}
	else if (aksi == ('*'))
	{
        result = x * y;
        cout << "= " << result << endl;
	}
	else if (aksi == ('/'))
	{
        result = x / y;
        cout << "= " << result << endl;
	}
	else
        cout<<"Error \n\n";
}

int main ()
{
	cout << "Kalkulator Sederhana. \n\n";
    cout << "Silahkan Menggunakan Operator Hitungan : \n";
    cout << "  - Tambah : + \n";
    cout << "  - Kurang : - \n";
    cout << "  - Perkalian : * \n";
    cout << "  - Pembagian : / \n\n";
    do
    {
        cout << "Masukkan Angka Inputan beserta operator penghitung (misal : 1 + 2): \n";
        cin >> a >> aksi >> b;

        Input (a,b);
        cout<<"Apakah Ingin Melanjutkan?"; cin>>answer;
    } while((answer == 'Y') or (answer == 'y'));
	return 0;
}
