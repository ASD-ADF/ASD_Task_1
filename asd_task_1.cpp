/**
    NAMA  : AZIZA HAYUPRATIWI
    NIM   : 1301150440
    KELAS : IF 39-06
**/


#include <iostream>
//#include <windows.h>
#include <stdlib.h>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
int A, B, C, D, E;
int UTS, UAS, TUBES;
// YOUR CODE ENDS HERE
//=================================================


void main_menu();
void set_standar();
void set_proporsi_nilai();
char hitung_index(double uts, double uas, double tubes);
void input_nilai();
void thank_you();
//void gotoxy(int x, int y);

int main() {
    main_menu();
    return 0;
}

/**void gotoxy(int x, int y){
COORD coord;
coord.X = x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}**/

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
    system("cls");
    while (pilihan != 4) {cout << "Daftar Menu : \n";
        cout << "\n 1. Set Standar Index Nilai \n 2. Set Proporsi Nilai \n 3. Input Nilai \n 4. Keluar \n" << endl;
        cout << "Masukkan Pilihan: ";
        cin >> pilihan;
        if (pilihan == 1){
            set_standar();
        } else if (pilihan == 2) {
            set_proporsi_nilai();
        } else if (pilihan == 3) {
            input_nilai();
        } else if (pilihan == 4) {
            exit(0);
        };
    // YOUR CODE ENDS HERE
    //=================================================
        thank_you();
    };
}


void set_proporsi_nilai(){
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    system("cls");
    while (UTS+UAS+TUBES != 100) {
        cout << "Masukkan Prosentase Nilai UTS: ";
        cin >> UTS;
        cout << "Masukkan Prosentase Nilai UAS: ";
        cin >> UAS;
        cout << "Masukkan Prosentase Nilai TUBES: ";
        cin >> TUBES;
        if (UTS+UAS+TUBES != 100) {
            cout << "Total Prosentase Nilai != 100. Silahkan Masukkan Prosentase Nilai dengan Benar" << endl;
            cout << endl;
        };
    };
    system("cls");
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
    system("cls");
    while (!((A > B) && (B > C) && (C > D))) {
        cout << "Masukkan Standar Minimum Index 'A': ";
        cin >> A;
        cout << "Masukkan Standar Minimum Index 'B': ";
        cin >> B;
        cout << "Masukkan Standar Minimum Index 'C': ";
        cin >> C;
        cout << "Masukkan Standar Minimum Index 'D': ";
        cin >> D;
        if ((A > B) && (B > C) && (C > D)) {
            cout << endl;
        } else {
            cout << "Standar Inputan Salah! Silahkan Inputkan Standar Minimum Index dengan Benar." << endl;
            cout << endl;
        };
    };
    system("cls");
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
    double sum;
    sum = (uts*UTS/100)+(uas*UAS/100)+(tubes*TUBES/100);
    if ((sum <= 100) && (sum <= A)) {
        index = 'A';
    } else if ((sum == B) && (sum < A)) {
        index = 'B';
    } else if ((sum == C) && (sum < B)) {
        index = 'C';
    } else {
        index = 'D';
    };
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
    system("cls");
    cout << "Masukkan Nilai UTS: ";
    cin >> uts ;
    cout << "Masukkan Nilai UAS: ";
    cin >> uas;
    cout << "Masukkan Nilai TUBES: ";
    cin >> tubes;
    cout << "Nilai: " << hitung_index(uts,uas,tubes) << endl;
    cout << endl;
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
    cout << " ----------------------" << endl;
    cout << " |  AZIZA HAYUPRATIWI |" << endl;
    cout << " |  1301150440        |" << endl;
    cout << " ----------------------" << endl;
    cout << endl;
    // YOUR CODE ENDS HERE
    //=================================================
}
