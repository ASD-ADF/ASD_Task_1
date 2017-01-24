/**
 NAMA  : Elsya Putri Sutomo
 NIM   : 1301164201
 KELAS : IF 40-02
 **/

#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE

int menu;
int uas, uts, tubes;
int minA, minB, minC, minD, minE;
int nUAS, nUTS, nTubes;
long double Total;
string indeks;

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
    cout<< " Daftar menu : \n";
    cout<< " 1. set standar index nilai \n";
    cout<< " 2. set proporsi nilai \n";
    cout<< " 3. input nilai  \n";
    cout<< " 4. keluar  \n";
    
    cout << "Masukkan Pilihan : ";
    cin>> pilihan;
    
    do {
        switch (pilihan) {
            case 1:
                set_standar();
                main_menu();
            case 2 :
                set_proporsi_nilai();
                main_menu();
            case 3 :
                input_nilai();
                main_menu();
        }
    } while (pilihan != 4);
    thank_you();
}


void set_proporsi_nilai(){
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    cout<< " Masukkan Presentase Nilai UTS, UAS, dan Tubes \n ";
    cout<< " Masukkan Presentase Nilai UTS : \n ";
    cin>>uts;
    cout<< " Masukkan Presentase Nilai UAS : \n ";
    cin>>uas;
    cout<< " Masukkan Presentase Tubes : \n";
    cin>>tubes;
    
    if (uas+uas+tubes!=100) {
        cout<< " Presentase yang ada masukkan salah, silahkan coba ulang : \n";
        set_proporsi_nilai();
    }
}

void set_standar(){
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    cout<< " Masukkan nilai min A : \n";
    cin>>minA;
    cout<< " Masukkan nilai min B : \n";
    cin>>minB;
    cout<< " Maskkan nilai min C : \n";
    cin>>minC;
    cout<< " Maskkan nilai min D : \n";
    cin>>minD;
    cout<< " Maskkan nilai min E : \n";
    cin>>minE;
    
    if (minB, minC, minD >= minA) {
        cout<< " Nilai standar anda salah, silahkan ulangi dari awal : \n";
        set_standar();
    }
    else  if (minC, minD >= minB) {
        cout<< " Nilai standar anda salah, silahkan ulangi dari awal : \n";
        set_standar();
    }
    else  if (minD >= minC) {
        cout<< " Nilai standar anda salah, silahkan ulangi dari awal : \n";
        set_standar();
    }
}


char hitung_index(double uts, double uas, double tubes){
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    Total=uts*nUTS/100+uas*nUAS/100+tubes*nTubes/100;
    
    if (Total>=minA){
        indeks ="A";
        cout<<"Indeks total nilai anda adalah : "<<indeks<<" \n";
    }
    else if (Total>=minB){
        indeks ="B";
        cout<<"Indeks total nilai anda adalah : "<<indeks<<" \n";
    }
    else if (Total>=minC){
        indeks ="C";
        cout<<"Indeks total nilai anda adalah : "<<indeks<<" \n";
    }
    else if (Total>=minD)  {
        indeks ="D";
        cout<<"Indeks total nilai anda adalah : "<<indeks<<" \n";
    }
    else {
        indeks ="E";
        cout<<"Indeks total nilai anda adalah : "<<indeks<<" \n";
    }
    return index;
}


void input_nilai(){
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    double uas, uts, tubes;
    cout<< " Masukkan nilai UTS : \n";
    cin>>nUTS;
    cout<< " Masukkan nilai UAS : \n";
    cin>>nUAS;
    cout<< " Masukkan nilai Tubes : \n";
    cin>>nTubes;
}

void thank_you(){
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    cout<< " TERIMA KASIHHH, SEMOGA ANDA MENIKMATI :) ";
    exit(0);
}
