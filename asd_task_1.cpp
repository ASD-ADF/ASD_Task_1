/**
    NAMA  :Hardo Fernando Silalahi
    NIM   :1301154216
    KELAS :IF 39-06
**/

#include <windows.h>
#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
double propUTS, propUAS, propTUBES;
double indexA, indexB, indexC, indexD;

// YOUR CODE ENDS HERE
//=================================================


void main_menu();
void set_standar();
void set_proporsi_nilai();
char hitung_index(double uts, double uas, double tubes);
void input_nilai();
void thank_you();

int main()
{
    main_menu();
    return 0;
}

void main_menu()
{
    /**
    - fungsi berisi pilihan menu di dalam aplikasi:
      daftar menu:
      1. set standar index nilai
      2. set proporsi nilai
      3. input nilai
      4. keluar
    - fungsi meminta input pilihan menu dari user
      dan memanggil fungsi menu yang dipilih
    **/

    int pilihan;
    //=================================================
    // YOUR CODE STARTS HERE
    system("cls");
    cout << "daftar menu:\n1. set standar index nilai\n2. set proporsi nilai\n3. input nilai\n4. keluar" << endl;
    cout << "Input : ";
    cin >> pilihan;
    switch(pilihan)
    {
    case 1 :
        set_standar();
        break;
    case 2 :
        set_proporsi_nilai();
        break;
    case 3 :
        input_nilai();
        break;
    }

    // YOUR CODE ENDS HERE
    //=================================================
    thank_you();
}


void set_proporsi_nilai()
{
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    system("cls");
    double propTOTAL;
    cout << "Proporsi UTS Anda: ";
    cin >> propUTS;
    cout << "Proporsi UAS Anda: ";
    cin >> propUAS;
    cout << "Proporsi TUBES Anda: ";
    cin >> propTUBES;
    propTOTAL = propUTS + propUAS + propTUBES;
    if (propTOTAL != 100)
    {
        cout << "Input Anda Tidak Sama Dengan 100, Silahkan Ulang Kembali\n";
        system("cls");
        set_proporsi_nilai();
    }
    main_menu();

    // YOUR CODE ENDS HERE
    //=================================================
}

void set_standar()
{
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    system("cls");
    cout << "Input Standar Index A\n";
    cin >> indexA;
    system("cls");
    cout << "Input Standar Index B\n";
    cin >> indexB;
    system("cls");
    cout << "Input Standar Index C\n";
    cin >> indexC;
    system("cls");
    cout << "Input Standar Index D\n";
    cin >> indexD;
    system("cls");
    if (indexA < indexB || indexB < indexC || indexC < indexD)
    {
        cout << "Input Standar Index Tidak Sesuai, Silahkan Ulang Kembali\n";
        set_standar();
    }
    main_menu();
    // YOUR CODE ENDS HERE
    //=================================================
}


char hitung_index(double uts, double uas, double tubes)
{
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    //=================================================
    // YOUR CODE STARTS HERE
    system("cls");
    double total;
    total = (uts * propUTS / 100) + (uas * propUAS / 100) + (tubes * propTUBES / 100);
    if (total < indexD)
    {
        index = 'E';
    }
    else if (total < indexC)
    {
        index = 'D';
    }
    else if (total < indexB)
    {
        index = 'C';
    }
    else if (total < indexA)
    {
        index = 'B';
    }
    else
    {
        index = 'A';
    }
    // YOUR CODE ENDS HERE
    //=================================================
    return index;
}


void input_nilai()
{
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    double uas, uts, tubes;
    //=================================================
    // YOUR CODE STARTS HERE
    system("cls");
    cout << "Input Nilai UTS Anda: ";
    cin >> uts;
    system("cls");
    cout << "Input Nilai UAS Anda: ";
    cin >> uas;
    system("cls");
    cout << "Input Nilai TUBES Anda: ";
    cin >> tubes;
    system("cls");
    cout << "Index Nilai Anda Adalah " << hitung_index(uas, uts, tubes) << endl;
    system("pause");
    main_menu();
    // YOUR CODE ENDS HERE
    //=================================================
}

void thank_you()
{
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    system("cls");
    cout << "Terimakasih dan Sampai Jumpa\n NAMA: Hardo Fernando Silalahi\n NIM: 1301154216\n";
    // YOUR CODE ENDS HERE
    //=================================================
}
