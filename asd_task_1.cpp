/**
    NAMA  : Ery Defriyanto S
    NIM   : 1301164129
    KELAS : IF 40-02
**/

#include <iostream>
#include <stdlib.h>

using namespace std;
/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
double prosUts, prosTubes, prosUas, standar_a, standar_b, standar_c, standar_d;


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
    cout << "Menu Utama \n\n 1. Set Standar Index Nilai \n 2. Set Proporsi Nilai \n 3. Input Nilai \n 4. Keluar \n\n";
    cout << "Masukan menu Pilihan : ";
    cin >> pilihan;

    do {
        switch (pilihan) {
        case 1:
            set_standar();
            main_menu();
        case 2:
            set_proporsi_nilai();
            main_menu();
        case 3:
            input_nilai();
            main_menu();
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
        cout << "Total Prosentase Harus 100 \n Input Prosentase Dalam Bentuk Persen \n\n Masukan Prosentase UTS : ";
        cin >> prosUts;
        cout << "Masukan Prosentase TUBES : ";
        cin >> prosTubes;
        cout << "Masukan Prosentase UAS : ";
        cin >> prosUas;
    }
    while (prosUts + prosTubes + prosUas != 100);
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
    cout << "Nilai Minimum A : ";
    cin >> standar_a;
    cout << "Nilai Minimum B : ";
    cin >> standar_b;
    cout << "Nilai Minimum C : ";
    cin >> standar_c;
    cout << "Nilai Minimum D : ";
    cin >> standar_d;
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
    uts = uts * prosUts / 100;
    tubes = tubes * prosTubes / 100;
    uas = uas * prosUas / 100;

    if (uts + uas + tubes >= standar_a){
        index = 'A';
    } else if (uts + uas + tubes >= standar_b){
    index = 'B';
    }else if (uts + uas + tubes >= standar_c){
    index = 'C';
    }else if (uts + uas + tubes >= standar_d){
    index = 'D';
    } else {
        index = 'E';
    }
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
    cout << "Masukan Nilai Mahasiswa\n" << endl;
    cout << "Masukan Nilai UTS : ";
    cin >> uts;
    cout << "Masukan Nilai TUBES : ";
    cin >> tubes;
    cout << "Masukan Nilai UAS : ";
    cin >> uas;
    cout << "\n\n Nilai Index : " << hitung_index(uts, uas, tubes) << endl;
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
    cout << "Terimakasih Telah menggunakan Aplikasi ini \n Sampai jumpa\n" << endl;
    cout << "NAMA  : Ery Defriyanto S \nNIM   : 1301164129 \nKELAS : IF 40-02" << endl;
}
    // YOUR CODE ENDS HERE
    //=================================================
