/**
    NAMA  : Andaresta Fauzan
    NIM   : 1301164189
    KELAS : IF 40-02
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
int menu,a,b,c,d,e;
double pruts,pruas,prtubes,presentase,ntotal;

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
    cout << "Silahkan pilih menu anda :\n";
    cout << "1. set standar index nilai.\n";
    cout << "2. set proporsi nilai.\n";
    cout << "3. input nilai.\n";
    cout << "4. keluar.\n";
    cout << "Pastikan pilihan menu hanya angka 1 sampai 4.\n";
    cin >> menu;
    switch(menu) {
    case 1 :
        cout << "Anda memilih menu set standar index nilai\n";
        set_standar();
        break;
    case 2 :
        cout << "Anda memilih menu proporsi nilai\n";
        set_proporsi_nilai();
        break;
    case 3 :
        cout << "Anda memilih menu input nilai\n";
        input_nilai();
        break;
    case 4 :
        thank_you();
        break;
    }

    // YOUR CODE ENDS HERE
    //=================================================
    //thank_you();
}


void set_proporsi_nilai(){
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout << "Masukkan presentase nilai UTS:" << endl;
    cin >> pruts;
    cout << "Masukkan presentase nilai UAS:" << endl;
    cin >> pruas;
    cout << "Masukkan presentase nilai tubes:" << endl;
    cin >> prtubes;

    presentase = presentase + pruts + pruas + prtubes;
    if (presentase != 100) {
    cout << "Masukkan presentase nilai UTS:" << endl;
    cin >> pruts;
    cout << "Masukkan presentase nilai UAS:" << endl;
    cin >> pruas;
    cout << "Masukkan presentase nilai tubes:" << endl;
    cin >> prtubes;
    }
    else {
        pruts = pruts / 100;
        pruas = pruas / 100;
        prtubes = prtubes / 100;
        main_menu();
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
    cout << "Masukkan standar index A:" << endl;
    cin >> a;
    cout << "Masukkan standar index B:" << endl;
    cin >> b;
    cout << "Masukkan standar index C:" << endl;
    cin >> c;
    cout << "Masukkan standar index D:" << endl;
    cin >> d;
    cout << "Masukkan standar index E:" << endl;
    cin >> e;
    main_menu();
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
    ntotal = (uts*pruts)+(uas*pruas)+(tubes*prtubes);
    cout << "Nilai : " << endl;
    cout << ntotal;
    cout << endl;
    if (ntotal >= a) {
        cout << "Indeks nilai anda A." << endl;
    }
    else if (ntotal >= b) {
        cout << "Indeks nilai anda B." << endl;
    }
    else if (ntotal >= c) {
        cout << "Indeks nilai anda C." << endl;
    }
    else if (ntotal >= d) {
        cout << "Indeks nilai anda D." << endl;
    }
    else if (ntotal >= e) {
        cout << "Indeks nilai anda E." << endl;
    }


    cout << endl;
    cout << endl;
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
    cout << "Masukkan nilai UTS anda:\n";
    cin >> uts;
    cout << "Masukkan nilai UAS anda:\n";
    cin >> uas;
    cout << "Masukkan nilai tubes anda:\n";
    cin >> tubes;
    hitung_index(uts,uas,tubes);
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
    cout << "Sampai jumpa lagi.\n";
    cout << "Andaresta Fauzan - 1301164189";

    // YOUR CODE ENDS HERE
    //=================================================
}
