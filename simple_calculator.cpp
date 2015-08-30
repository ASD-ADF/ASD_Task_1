#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int a,n,i,pilihan;
    float hasil;
    cout << "Pilih operasi yang anda inginkan : \n";
    cout << "1. Penjumlahan \n";
    cout << "2. Pengurangan \n";
    cout << "3. Perkalian \n";
    cout << "4. Pembagian \n";
    cout << "5. Pengakaran \n";
    cout << "6. Pangkat \n";
    cout << "7. Keluar \n";
    do
    {
    cout << "Ketik nomor yang anda inginkan : ";
    cin >> pilihan;
    cin.ignore();
        if (pilihan == 1)
        {
            cout << "Masukkan angka ke-1 : ";
            cin >> n;
            cin.ignore();
            cout << "Masukkan angka ke-2 : ";
            cin >> i;
            cin.ignore();
            hasil = n+i;
            cout << "Hasil penjumlahan dari " << n << " dengan " << i << " adalah " << hasil << "\n";
            cout << "\n";
            cout << "Ketik 7 untuk keluar program \n";
        }
        else if (pilihan == 2)
        {
            cout << "Masukkan angka ke-1 : ";
            cin >> n;
            cin.ignore();
            cout << "Masukkan angka ke-2 : ";
            cin >> i;
            cin.ignore();
            hasil = n-i;
            cout << "Hasil pengurangan dari " << n << " dengan " << i << " adalah " << hasil << "\n";
            cout << "\n";
            cout << "Ketik 7 untuk keluar program \n";
        }
        else if (pilihan == 3)
        {
            cout << "Masukkan angka ke-1 : ";
            cin >> n;
            cin.ignore();
            cout << "Masukkan angka ke-2 : ";
            cin >> i;
            cin.ignore();
            hasil = n*i;
            cout << "Hasil perkalian dari " << n << " dengan " << i << " adalah " << hasil << "\n";
            cout << "\n";
            cout << "Ketik 7 untuk keluar program \n";
        }
        else if (pilihan == 4)
        {
            cout << "Masukkan angka ke-1 : ";
            cin >> n;
            cin.ignore();
            cout << "Masukkan angka ke-2 : ";
            cin >> i;
            cin.ignore();
            hasil = n/i;
            cout << "Hasil pembagian dari " << n << " dengan " << i << " adalah " << hasil << "\n";
            cout << "\n";
            cout << "Ketik 7 untuk keluar program \n";
        }
        else if (pilihan == 5)
        {
            cout << "Masukkan angka yang ingin diakarkan : ";
            cin >> n;
            cin.ignore();
            hasil = sqrt(n);
            cout << "Hasil akar dari " << n << " adalah " << hasil << "\n";
            cout << "\n";
            cout << "Ketik 7 untuk keluar program \n";
        }
        else if (pilihan == 6)
        {
            cout << "Masukkan angka : ";
            cin >> n;
            cin.ignore();
            cout << "Masukkan pangkat :";
            cin >> i;
            cin.ignore();
            hasil = 1;
            a = 1;
            while (a <= i)
            {
                hasil = hasil*n;
                a++;
            }
            cout << "Hasil perpangkatan dari " << n << " dipangkatkan dengan " << i << " adalah : " << hasil << "\n";
            cout << "\n";
            cout << "Ketik 7 untuk keluar program \n";
        }
        else if (pilihan > 7)
        {
            cout << "Pilihan tidak terdefinisi \n";
            cout << "\n";
            cout << "Ketik 7 untuk keluar program \n";
        }
    }
    while (pilihan != 7);
    system("cls");
    cout << "Terima Kasih telah menggunakan kalkulator simple saya ^_^";
    return(0);
}
