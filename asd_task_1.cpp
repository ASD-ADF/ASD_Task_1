/**
    NAMA  : Muhammad Fadhlan Supriadi
    NIM   : 1301154202
    KELAS : IF-39-06
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
int idx_A, idx_B, idx_C, idx_D;
int pps_UTS, pps_UAS, pps_TUBES;

// YOUR CODE ENDS HERE
//=================================================


void main_menu();
void set_standar();
void set_proporsi_nilai();
char hitung_index(double uts, double uas, double tubes);
void input_nilai();
void thank_you();

int main() {
    cout<<"Selamat kepada Anda telah menggunakan aplikasi terbaru ini \n"; //merupakan
    cout<<"Program Index Nilai \n";
    cout<<"============================ \n";
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
    cout << "--------Menu Aplikasi-----" << endl;
    cout << "1. Set standar index nilai \n";
    cout << "2. Set proporsi nilai  \n";
    cout << "3. Input nilai  \n";
    cout << "4. Keluar  \n\n";

    cout << "Silahkan memilih menu yang tersedia \n";
    cout << "Menu ke : ";
    cin >> pilihan;
    cout << endl;
    while (pilihan <= 4){
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
    }
    }
    main_menu();
    // YOUR CODE ENDS HERE
    //=================================================
}


void set_proporsi_nilai(){
    /**
    - fungsi mengubah presentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input presentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout << "Masukkan proporsi / presentase nilai UTS : ";
    cin >> pps_UTS;
    cout << "Masukkan proporsi / presentase nilai UAS : ";
    cin >> pps_UAS;
    cout << "Masukkan proporsi / presentase nilai Tubes : ";
    cin >> pps_TUBES;
    cout << endl;

    while(pps_UTS+pps_UAS+pps_TUBES != 100)
    {
        cout << "Maaf, total proporsi / presentase yang anda masukkan tidak sama dengan atau lebih dari 100. Mohon untuk menginput kembali \n" << endl;
        set_proporsi_nilai();
    }
    main_menu();
    // YOUR CODE ENDS HERE
    //=================================================
}

void set_standar(){
    /**
    - fungsi mengubah standar index A, B, C, D, dan E.
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    //=================================================
    // YOUR CODE STARTS HERE
        cout<<"Masukkan standar index A: ";
        cin>> idx_A;
        cout<<"Masukkan standar index B: ";
        cin>> idx_B;
        cout<<"Masukkan standar index C: ";
        cin>> idx_C;
        cout<<"Masukkan standar index D: ";
        cin>> idx_D;

     while  (idx_D < idx_C && idx_C < idx_B  && idx_B < idx_A && idx_A <= 100)
    {
        cout << endl;
        main_menu();
    }
    cout << "Maaf, input standar index nilai salah. Mohon untuk menginput kembali" << endl;
    set_standar();
    cout << endl;
    // YOUR CODE ENDS HERE
    //=================================================
}


char hitung_index(double nilai_UTS, double nilai_UAS, double nilai_TUBES){
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    double total_nilai;
    //=================================================
    // YOUR CODE STARTS HERE
    total_nilai = (nilai_UTS*pps_UTS/100 + nilai_UAS*pps_UAS/100 + nilai_TUBES*pps_TUBES/100);

    if (total_nilai>=idx_A) {
        index = 'A';
    } else if ((total_nilai<idx_A) && (total_nilai>=idx_B)) {
        index = 'B';
    } else if ((total_nilai<idx_B) && (total_nilai>=idx_C)) {
        index = 'C';
    } else if ((total_nilai<idx_C) && (total_nilai>=idx_D)) {
        index = 'D';
    } else if (total_nilai<idx_D){
        index = 'E';
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
    double nilai_UTS, nilai_UAS, nilai_TUBES;
    //=================================================
    // YOUR CODE STARTS HERE
    cout << "Masukkan nilai UTS : ";
    cin >> nilai_UTS;
    cout << "Masukkan nilai UAS : " ;
    cin >> nilai_UAS;
    cout << "Masukkan nilai TUBES : ";
    cin >> nilai_TUBES;
    cout << "Nilai index anda berdasarkan standar index adalah " << hitung_index(nilai_UTS,nilai_UAS,nilai_TUBES);
    cout << endl;
    cout << endl;
    main_menu();
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
    cout<<"Terimakasih telah menggunakan program ini"<<endl;
    cout<<"Muhammad Fadhlan Supriadi / 1301154202"<<endl;
    // YOUR CODE ENDS HERE
    //=================================================
}
