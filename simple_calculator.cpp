#include <iostream>

using namespace std;

int op;
double operan1, operan2, hasil;
char repeat;

int main()
{
    while(true)
    {
        cout << "Masukkan operan 1: ";
        cin >> operan1;

        cout << "Masukkan operan 2: ";
        cin >> operan2;

        cout << "Pilih operasi hitung:" << endl;
        cout << "1. Tambah" << endl;
        cout << "2. Kurang" << endl;
        cout << "3. Kali" << endl;
        cout << "4. Bagi" << endl;
        cout << "Operasi: ";
        cin >> op;
        while(op < 1 || op > 4)
        {
            cout << endl;
            cout << "Pilihan salah! Masukkan angka pilihan yang benar:" << endl;
            cout << "Pilih operasi hitung:" << endl;
            cout << "1. Tambah" << endl;
            cout << "2. Kurang" << endl;
            cout << "3. Kali" << endl;
            cout << "4. Bagi" << endl;
            cout << "Operasi: ";
            cin >> op;
        }

        switch(op)
        {
            case 1: hasil = operan1 + operan2; break;
            case 2: hasil = operan1 - operan2; break;
            case 3: hasil = operan1 * operan2; break;
            case 4: hasil = operan1 / operan2; break;
        }

        cout.precision(2);
        cout << "Hasil: " << fixed << hasil << endl;

        cout << "Anda ingin menggunakan kalkulator lagi? (y/n): ";
        cin >> repeat;
        while(repeat != 'y' && repeat != 'n' && repeat != 'Y' && repeat != 'N')
        {
            cout << "Anda ingin menggunakan kalkulator lagi? (Y/N): ";
            cin >> repeat;
        }

        if(repeat == 'N' || repeat == 'n') break;
    }

    cout << "Anda telah menutup kalkulator!";
    return 0;
}
