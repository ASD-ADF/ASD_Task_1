/**
    NAMA  : REYNALDI SYAPUTRA
    NIM   : 1301164141
    KELAS : IF 40-02
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
int pil, uts, uas, tubes, Auts, Buas, Ctubes, nilaiA, nilaiB, nilaiC, nilaiD, nilaiE;

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
    cout<<"Daftar Menu\n";
    cout<<"1. Set Standar Index Nilai\n";
    cout<<"2. Set Proporsi Nilai\n";
    cout<<"3. Input Nilai\n";
    cout<<"4. Keluar\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";
    cout<<"Masukkan Pilihanmu :\n";
    cin>>pil;

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
    cout<<"Input Dalam Prosentase :\n";
    cout<<"Masukkan Nilai UTS :\n";
    cin>>Auts;
    cout<<"Masukkan Nilai UAS :\n";
    cin>>Buas;
    cout<<"Masukkan Nilai TUBES :\n";
    cin>>Ctubes;

    if (Auts + Buas + Ctubes != 100) {
        set_proporsi_nilai();
    }

    //=================================================
}

void set_standar(){
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    //=================================================
    cout<<"Masukkan Nilai Minimum A :\n";
    cin>>nilaiA;
    cout<<"Masukkan Nilai Minimum B :\n";
    cin>>nilaiB;
    cout<<"Masukkan Nilai Minimum C :\n";
    cin>>nilaiC;
    cout<<"Masukkan Nilai Minimum D :\n";
    cin>>nilaiD;
    cout<<"Masukkan Nilai Minimum E :\n";
    cin>>nilaiE;

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
    cout<<"Masukkan Nilai UTS :\n";
    cin>>uts;
    cout<<"Masukkan Nilai UAS :\n";
    cin>>uas;
    cout<<"Masukkan Nilai TUBES :\n";
    cin>>tubes;

    //=================================================
}

void thank_you(){
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    //=================================================
    // YOUR CODE STARTS HERE


    // YOUR CODE ENDS HERE
    //=================================================
}
