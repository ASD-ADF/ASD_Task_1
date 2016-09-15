/**
    NAMA  : Nabil Bagus Pratama
    NIM   : 1301144365
    KELAS : IF 39 01
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE

double proUts, proUas, proTubes;
double nA,nB,nC,nD,nE;

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
    cout<<"Daftar Menu : "<<endl;
    cout<<"1. Set Standar Index Nilai "<<endl;
    cout<<"2. Set Proporsi Nilai      "<<endl;
    cout<<"3. Input Nilai             "<<endl;
    cout<<"4. Keluar                  "<<endl;
    cout<<"Masukkan Pilihan : ";
    cin>>pilihan;
    if (pilihan == 1){
        set_standar();
        main_menu();
    } else if (pilihan == 2){
        set_proporsi_nilai();
        main_menu();
    } else if (pilihan == 3){
        input_nilai();
        main_menu();
    } else if (pilihan == 4){
        thank_you();
    } else {
        main_menu();
    }
    // YOUR CODE ENDS HERE
    //=================================================
}


void set_proporsi_nilai(){
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout<<"Masukkan prosentase nilai UTS : ";
    cin>>proUts;
    cout<<"Masukkan prosentase nilai UAS : ";
    cin>>proUas;
    cout<<"Masukkan prosentase nilai Tubes : ";
    cin>>proTubes;
    int total = proUts + proUas + proTubes;
    if (total != 100){
        cout<<endl;
        cout<<"Maaf prosentase lebih dari 100. Silahkan Ulang Kembali"<<endl;
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
    cout<<"Masukkan standar minimum nilai A : ";
    cin>>nA;
    cout<<"Masukkan standar minimum nilai B : ";
    cin>>nB;
    cout<<"Masukkan standar minimum nilai C : ";
    cin>>nC;
    cout<<"Masukkan standar minimum nilai D : ";
    cin>>nD;
    cout<<"Masukkan standar minimum nilai E : ";
    cin>>nE;
    if ((nA<nB) || (nB<nC) || (nC<nD) || (nD<nE)) {
        cout<<endl;
        cout<<"Maaf Standar Nilai Salah. Silahkan Ulang Kembali"<<endl;
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
    double total = (uts*proUts) + (uas*proUas) + (tubes*proTubes);
    if (total >= nA){
        index = 'A';
    } else if ((total < nA) && (total >= nB)){
        index = 'B';
    } else if ((total < nB) && (total >= nC)){
        index = 'C';
    } else if ((total < nC) && (total >= nD)){
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
    cout<<"Masukkan nilai UTS : ";
    cin>>uts;
    cout<<"Masukkan nilai UAS : ";
    cin>>uas;
    cout<<"Masukkan nilai Tubes : ";
    cin>>tubes;
    cout<<"Index Nilai yang didapat adalah "<<hitung_index(uts,uas,tubes)<<endl;
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
    cout<<"Terima Kasih Atas Kepercayaan Anda menggunakan Program Ini"<<endl;
    cout<<endl;
    cout<<"== Nabil Bagus Pratama =="<<endl;
    cout<<"==     1301144365      =="<<endl;

    // YOUR CODE ENDS HERE
    //=================================================
}
