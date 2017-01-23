/**
    NAMA  : Andini Salimah
    NIM   : 1301164080
    KELAS : IF 40 02
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
int menu, UTS, UAS, TUBES, minA, minB, minC, minD;
long double Jumlah;
string Index;
double nilaiUTS, nilaiUAS, nilaiTUBES

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
    do  {
        cout<<" Daftar Menu : \n";
        cout<<" 1. Set Standar Index Nilai \n";
        cout<<" 2. Set Proporsi Nilai \n";
        cout<<" 3. Input Nilai \n";
        cout<<" 4. Keluar \n";

        cout<<" Pilih Daftar Menu yang Tersedia : \n";
        cin>>menu;

        if (menu == 1) {
            set_standar();
        }

        else if (menu == 2) {
            set_proporsi_nilai();
        }

        else if (menu == 3) {
            input_nilai();
            hitung_index();
        }


    } while (menu!= 4);
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
    cout<<" Masukkan prosentase nilai UTS, UAS, dan TUBES \n";
    cout<<" Masukkan prosentase UTS : \n";
    cin>>uts;
    cout<<" Masukkan prosentase UAS : \n";
    cin>>uas;
    cout<<" Masukkan prosentase TUBES : \n";
    cin>>tubes;

    if (uts+uas+tubes!=100){
        cout<<"Prosentase yang Anda masukkan salah, ulangi lagi \n";
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
    cout<<" Masukkan nilai minimal standar A : \n";
    cin>>minA;
    cout<<" Masukkan nilai minimal standar B : \n";
    cin>>minB;
    cout<<" Masukkan nilai minimal standar C : \n";
    cin>>minC;
    cout<<" Masukkan nilai minimal standar D : \n";
    cin>>minD;

    if (minB, minC, minD >= minA) {
        cout<<" Nilai standar yang Anda masukkan salah, mohon ulangi \n";
        set_standar();
    }
        else if (minC, minD >= minB) {
            cout<<" Nilai standar yang Anda masukkan salah, mohon ulangi \n";
            set_standar();
        }

        else if (minD>= minC) {
            cout<<" Nilai standar yang Anda masukkan salah, mohon ulangi \n";
            set_standar();
        }
    }
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
    Jumlah=nilaiUTS*UTS/100 + nilaiUAS*UAS/100 + nilaiTUBES*TUBES/100;

    if (jumlah >= minA) {
        Index = "A";
        cout<<"Index total nilai Anda: "<<Index<<"\n';
    }

    else if (jumlah >= minB) {
        Index = "B";
        cout<<"Index total nilai Anda: "<<Index<<"\n';
    }

    else if (jumlah >= minC) {
        Index = "C";
        cout<<"Index total nilai Anda: "<<Index<<"\n';
    }

    else if (jumlah >= minD) {
        Index = "D";
        cout<<"Index total nilai Anda: "<<Index<<"\n';
    }

    else {
        Index = "E";
        cout<<"Index total nilai Anda: "<<Index<<"\n';
    }
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
    cout<<" Masukkan nilai UTS : \n";
    cin>>nilaiUTS;
    cout<<" Masukkan nilai UAS : \n";
    cin>>nilaiUAS;
    cout<<" Masukkan nilai TUBES : \n";
    cin>>nilaiTUBES;
    //=================================================
}

void thank_you(){
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    //=================================================
    cout<<" Terimakasih :D :D ";
    //=================================================
}
