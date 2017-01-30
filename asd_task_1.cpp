/**
    NAMA  : Try Arie Rahmat Insani
    NIM   : 1301164513
    KELAS : IF-40-02
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE

int pilihan;
double uts, uas, tubes;
double puts, puas, ptubes;
double sa, sb, sc, sd, se;
double total_nilai, total_proporsi;
char index;

// YOUR CODE ENDS HERE
//=================================================


void main_menu();
void set_standar();
void set_proporsi_nilai();
char hitung_index(double uts, double uas, double tubes);
void input_nilai();
void thank_you();

int main() {
    main_menu();
    return 0;
}

void main_menu(){
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

    do {
    cout << "Program Task 1" << endl;
    cout << endl;
    cout << "Daftar Menu" << endl;
    cout << "1. Set Standar Index Nilai" << endl;
    cout << "2. Set Proporsi Nilai" << endl;
    cout << "3. Input Nilai" << endl;
    cout << "4. Keluar" << endl;
    cout << endl;
    cout << "Silahkan dipilih: ";
    cin >> pilihan;

    switch (pilihan) {
    case 1:
        set_standar();
        cout << endl;
        break;
    case 2:
        set_proporsi_nilai();
        cout << endl;
        break;
    case 3:
        input_nilai();
        cout << endl;
        break;
    case 4:
        cout << endl;
        break;
    }
    } while (pilihan !=4);

    // YOUR CODE ENDS HERE
    //=================================================
    thank_you();
}

void set_proporsi_nilai(){
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    //=================================================
    // YOUR CODE STARTS HERE

    do {
    cout << "Input prosentase nilai" << endl;
    cout << "(Total nilai: 100)" << endl;
    cout << "Prosentase nilai UTS: ";
    cin >> puts;
    cout << "Prosentase nilai UAS: ";
    cin >> puas;
    cout << "Prosentase nilai Tubes: ";
    cin >> ptubes;

    total_proporsi = puts+puas+ptubes;
    } while (total_proporsi!=100);

    // YOUR CODE ENDS HERE
    //=================================================
}

void set_standar(){
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    //=================================================
    // YOUR CODE STARTS HERE

    do {
    cout << "Input Standar Index" << endl;
    cout << "Index A: ";
    cin >> sa;
    cout << "Index B: ";
    cin >> sb;
    cout << "Index C: ";
    cin >> sc;
    cout << "Index D: ";
    cin >> sd;
    cout << "Index E: ";
    cin >> se;
    } while (sa<sb, sb<sc, sc<sd, sd<se);

    // YOUR CODE ENDS HERE
    //=================================================
}

char hitung_index(double uts, double uas, double tubes){
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    //=================================================
    // YOUR CODE STARTS HERE

    total_nilai = uts*puts/100+uas*puas/100+tubes*ptubes/100;

    if (total_nilai>sa)
        index = 'A';
    else if (total_nilai>sb)
        index = 'B';
    else if (total_nilai>sc)
        index = 'C';
    else if (total_nilai>sd)
        index = 'D';
    else
        index = 'E';

    cout << "Index: " << index << endl;

    // YOUR CODE ENDS HERE
    //=================================================
    return index;
}

void input_nilai(){
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    double uas, uts, tubes;
    //=================================================
    // YOUR CODE STARTS HERE

    cout << "Nilai UTS: ";
    cin >> uts;
    cout << "Nilai UAS: ";
    cin >> uas;
    cout << "Nilai Tubes: ";
    cin >> tubes;

    hitung_index(uts,uas,tubes);

    // YOUR CODE ENDS HERE
    //=================================================
}

void thank_you(){
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    //=================================================
    // YOUR CODE STARTS HERE

    cout << "Thank you and Good Bye!" << endl;

    // YOUR CODE ENDS HERE
    //=================================================
}

