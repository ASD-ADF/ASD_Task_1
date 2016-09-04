/**
    NAMA  : SARAH FAUZIAH LESTARI
    NIM   : 1301154552
    KELAS : IF 39-06
**/


#include <iostream>
#include <stdlib.h>
#include <windows.h>


using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
int pilihan;
int sum;
double persenuts;
double persenuas;
double persentubes;
double indeksa;
double indeksb;
double indeksc;
double indeksd;
double nilaiuas;
double nilaiuts;
double nilaitubes;
double total;

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
    cout << "==== Daftar Menu ====" << endl;
    cout << "1. Set standar index nilai" << endl;
    cout << "2. Set proporsi nilai"<< endl;
    cout << "3. Input nilai"<< endl;
    cout << "4. Keluar" << endl;
    cout << "Masukkan Pilihan: ";
    cin >> pilihan;
    if (pilihan > 4)
        cout << main();
    else if (pilihan < 1)
        cout << main();
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
    case 4 :
        thank_you();
        ExitProcess(0);
        break;
    }
    // YOUR CODE ENDS HERE
    //=================================================

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
    while (sum != 100)
    {
        cout << endl;
        cout << "Input prosentase dalam persen" << endl;
        cout << "Masukkan prosentase UTS  : ";
        cin >> persenuts;
        cout << "Masukkan prosentase UAS  : ";
        cin >> persenuas;
        cout << "Masukkan prosentase TUBES: ";
        cin >> persentubes;
        sum = persenuas + persenuts + persentubes;
    }
    cout << main();

    // YOUR CODE ENDS HERE
    //=================================================
}
int indeks()
{
    set_standar();
    return 0;
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
    cout << "Masukkan standar minimum A: ";
    cin >> indeksa;
    cout << "Masukkan standar minimum B: ";
    cin >> indeksb;
    cout << "Masukkan standar minimum C: ";
    cin >> indeksc;
    cout << "Masukkan standar minimum D: ";
    cin >> indeksd;
    /**if (indeksb >= indeksa or indeksc >= indeksa or indeksd >= indeksa)
        cout << "Indeks overload, silahkan ulangi lagi"<<endl;
        cout << indeks();
    else if (indeksc >= indeksb or indeksd >= indeksb)
        cout << "Indeks overload, silahkan ulangi lagi"<<endl;
        cout << indeks();
    else if (indeksd >= indeksc)
        cout << "Indeks overload, silahkan ulangi lagi"<<endl;
        cout << indeks();
    **/
    if (indeksa > indeksb and indeksb > indeksc and indeksc > indeksd)
    {
        cout << main();
    }
    else
        cout << "Indeks overload, silahkan ulangi lagi"<<endl;
    cout << indeks();
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
    double jumlah;
    //=================================================
    // YOUR CODE STARTS HERE
    // function hitung_index
    jumlah = (uas * persenuas / 100 + uts * persenuts / 100 + tubes * persentubes / 100);
    if (jumlah >= indeksa)
        index = 'A';
    else if (jumlah >= indeksb and jumlah < indeksa)
        index = 'B';
    else if (jumlah >= indeksc and jumlah < indeksb)
        index = 'C';
    else if (jumlah >= indeksd and jumlah < indeksc)
        index = 'D';
    else
        index = 'E';
    return index;

    // YOUR CODE ENDS HERE
    //=================================================

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
    cout << "Masukkan nilai UTS  : ";
    cin >> nilaiuts;
    cout << "Masukkan nilai UAS  : ";
    cin >> nilaiuas;
    cout << "Masukkan nilai TUBES: ";
    cin >> nilaitubes;
    cout << "Index yang didapatkan adalah : " << hitung_index(nilaiuts, nilaiuas, nilaitubes)<< endl;
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
    cout << "Terimakasih"<<endl;
    cout << "SARAH FAUZIAH LESTARI (1301154552)";
    // YOUR CODE ENDS HERE
    //=================================================
}
