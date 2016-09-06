/**
    NAMA  : Alfin Pratama Salim
    NIM   : 1301154342
    KELAS : IF 39-06
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
double pUTS, pUAS, pTubes,pTotal,total, a, b, c, d;

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
    cout<< "Daftar Menu"<< endl;
    cout<< "1. Set Standar Index Nilai\n2. Set Proporsi Nilai\n3. Input Nilai\n4. Keluar"<<endl;
    cin>> pilihan;
    switch(pilihan){
case 1 :
    set_standar();
    main_menu();
    break;
case 2 :
    set_proporsi_nilai();
    main_menu();
    break;
case 3 :
    input_nilai();
    main_menu();
    break;
    }

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
cout<< "Masukkan Proporsi Nilai UTS: ";
cin>> pUTS;
cout<< "Masukkan Proporsi Nilai UAS: ";
cin>> pUAS;
cout<< "Masukkan Proporsi Nilai Tubes: ";
cin>> pTubes;
pTotal = pUTS+pUAS+pTubes;
if (pTotal != 100)
{
    cout<< "Proporsi salah, coba isi lagi ";
    set_proporsi_nilai();
}
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
cout<< "Masukkan Indeks Nilai A: ";
cin>> a;
cout<< "Masukkan Indeks Nilai B: ";
cin>> b;
cout<< "Masukkan Indeks Nilai C: ";
cin>> c;
cout<< "Masukkan Indeks Nilai D: ";
cin>> d;
if ((a<b)||(b<c)||(c<d))
{
    cout<< "Indeks anda salah, silahkan input kembali"<<endl;
    set_standar();
}

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
total = (((uts*pUTS)/100)+((uas*pUAS)/100)+((tubes*pTubes)/100));
if(total < d)
    index = 'E';
else if(total < c )
    index = 'D';
else if(total < b)
    index = 'C';
else if (total < a)
    index = 'B';
else
    index = 'A';
cout<< "Indeks"<<index<<endl;
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
cout<< "Masukkan Nilai UTS: ";
cin>> uts;
cout<< "Masukkan Nilai UAS: ";
cin>> uas;
cout<< "Masukkan Nilai Tubes";
cin>> tubes;
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
cout<< "Alfin Pratama Salim"<< endl;
cout<< "1301154342"<< endl;
cout<< "Trima Kasih Telah Menggunakan Program Ini";

    // YOUR CODE ENDS HERE
    //=================================================
}
