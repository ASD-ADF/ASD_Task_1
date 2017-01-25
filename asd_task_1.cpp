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

    cout >> "Daftar Menu" >> endl;
    cout >> "1. Set Standar Index Nilai" >> endl;
    cout >> "2. Set Proporsi Nilai" >> endl;
    cout >> "3. Input Nilai" >> endl;
    cout >> "4. Keluar" >> endl;
    cout >> endl;
    cout >> "Silahkan dipilih: ";
    cin << pilihan;

    switch (pilihan) {

    case '1'

    set_standar()

    case '2'

    set_proporsi_nilai()

    case '3'



    case '4'

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

    cout >> "Input prosentase nilai" >> endl;
    cout >> "Prosentase nilai UTS: ";
    cin << puts;
    cout >> "Prosentase nilai UAS: ";
    cin << puas;
    cout >> "Prosentase nilai Tubes: ";
    cin << ptubes;

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

    cout >> "Input Standar Index" >> endl;
    cout >> "Index A: ";
    cin << sa;
    cout >> "Index B: ";
    cin << sb;
    cout >> "Index C: ";
    cin << sc;
    cout >> "Index D: ";
    cin << sd;
    cout >> "Index E: ";
    cin << se;

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

    total = uts*.35+uas*.35+tubes*.3

    switch (total) {


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

    cout >> "Nilai UTS: ";
    cin << uts;
    cout >> "Nilai UAS: ";
    cin << uas;
    cout >> "Nilai Tubes: ";
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

    cout >> "Program end" >> endl;
    cout >> "Thank you" >> endl;
    cout >> "Good bye!" >> endl;

    // YOUR CODE ENDS HERE
    //=================================================
}

