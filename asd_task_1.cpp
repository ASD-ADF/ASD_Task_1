/**
    NAMA  :Fiqhi Agung A
    NIM   :1301154132
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
double proUTS, proUAS, proTUBES;
double indA, indB, indC, indD;

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
    cout << "MENU:\n1. Set Standar Index Nilai\n2. Set Proporsi Nilai\n3. Input Nilai\n4. Keluar" << endl;
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
    double proTOTAL;
    cout << "Proporsi UTS Anda: ";
    cin >> proUTS;
    cout << "Proporsi UAS Anda: ";
    cin >> proUAS;
    cout << "Proporsi TUBES Anda: ";
    cin >> proTUBES;
    proTOTAL = proUTS + proUAS + proTUBES;
    if (proTOTAL != 100)
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
    cin >> indA;
    system("cls");
    cout << "Input Standar Index B\n";
    cin >> indB;
    system("cls");
    cout << "Input Standar Index C\n";
    cin >> indC;
    system("cls");
    cout << "Input Standar Index D\n";
    cin >> indD;
    system("cls");
    if (indA < indB || indB < indC || indC < indD)
    {
        cout << "Input Standar Index Yang Anda Masukan Tidak Sesuai, Silahkan Ulang Kembali\n";
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
    total = (uts * proUTS / 100) + (uas * proUAS / 100) + (tubes * proTUBES / 100);
    if (total < indD)
    {
        index = 'E';
    }
    else if (total < indC)
    {
        index = 'D';
    }
    else if (total < indB)
    {
        index = 'C';
    }
    else if (total < indA)
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
    cout << "Terimakasih telah menggunakan program ini";
    // YOUR CODE ENDS HERE
    //=================================================
}
