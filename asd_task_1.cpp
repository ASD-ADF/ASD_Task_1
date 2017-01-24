/**
    NAMA  : IKHSAN RAMADHAN
    NIM   : 1301164407
    KELAS : IF 40-02
**/


#include <iostream>
#include <stdlib.h>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
double peruts, pertubes, peruas, ka, kb, kc, kd;

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
    cout<< "Menu Utama \n\n 1.Atur Standar \n 2.Atur Proporsional \n 3.Input Nilai \n 4.Keluar \n\n";
    cout<< "Masukan Pilihan: ";
    cin>> pilihan;

    do
    {
        switch (pilihan)
        {
        case 1 :
            system("CLS");
            set_standar();
            system("CLS");
            main_menu();
        case 2 :
            system("CLS");
            set_proporsi_nilai();
            system("CLS");
            main_menu();
        case 3 :
            system("CLS");
            input_nilai();
            system("PAUSE");
            system("CLS");
            main_menu();
        }
    }
    while (pilihan !=4);

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
    do
    {
        cout<< "Total Persentase Harus 100 \n Input Persentase dalam persen\n";
        cout<< "Persentase UTS: ";
        cin>> peruts;
        cout<< "Persentasen TUBES: ";
        cin>> pertubes;
        cout<< "Persentase UAS: ";
        cin>> peruas;
    }
    while (peruts + pertubes + peruas != 100);
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
    cout<< "Nilai Minimum A: ";
    cin>> ka;
    cout<< "Nilai Minimum B: ";
    cin>> kb;
    cout<< "Nilai Minimum C: ";
    cin>> kc;
    cout<< "Nilai Minimum D: ";
    cin>> kd;
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
    uts = uts * peruts /100;
    tubes = tubes * pertubes / 100;
    uas = uas * peruas / 100;

    if (uts + tubes + uas >= ka)
    {
        index= 'A';
    }
    else if (uts + tubes + uas >= kb )
    {
        index= 'B';
    }
    else if (uts + tubes + uas >= kc )
    {
        index='C';
    }
    else if (uts + tubes + uas >= kd )
    {
        index='D';
    }
    else
    {
        index= 'E';
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
    double uts, tubes, uas;
    //=================================================
    // YOUR CODE STARTS HERE
    cout<< "Masukan Nilai Mahasiswa\n";
    cout<< "Nilai UTS: ";
    cin>> uts;
    cout<< "Nilai TUBES: ";
    cin>> tubes;
    cout<< "Nilai UAS: ";
    cin>> uas;
    cout<< "\n\nNilai Index: " << hitung_index(uts, tubes, uas) << endl;
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
    cout<< "Hatur Nuhun";
    exit(0);
    // YOUR CODE ENDS HERE
    //=================================================
}
