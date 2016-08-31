/**
    NAMA  :Rama Aditya Maulana
    NIM   :1301150034
    KELAS :IF 39 06
**/


#include <iostream>




using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
    int minA,minB,minC,minD,minE;
    int prop_uts,prop_uas,prop_tubes;
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
    cout <<"Selamat Datang, Silakan Pilih Menu dibawah ini: "<<endl;
    cout <<"1. Set standar index nilai \n";
    cout <<"2. Set proporsi nilai \n";
    cout <<"3. Input nilai \n";
    cout <<"4. Keluar \n";

    cout<<"Pilihan: ";
    cin >> pilihan;
    switch(pilihan)
    {
    case 1:
        set_standar();
        break;
    case 2:
        set_proporsi_nilai();
        break;
    case 3:
        input_nilai();
        break;
    case 4:
        thank_you();

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
    cout<<"Masukkan proporsi nilai UTS: ";
    cin>>prop_uts;
    cout<<"Masukkan proporsi nilai UAS: ";
    cin>>prop_uas;
    cout<<"Masukkan proporsi nilai Tubes: ";
    cin>>prop_tubes;

    if(prop_uts+prop_uas+prop_tubes !=100)
    {
        cout<<"Total proporsi nilai tidak sama dengan atau lebih dari 100, silakan input kembali!"<<endl;
        set_proporsi_nilai();
    }
    else{
        main();
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
    cout<<"Masukkan standar nilai minimum A: ";
    cin>> minA;
    cout<<"Masukkan standar nilai minimum B: ";
    cin>> minB;
    cout<<"Masukkan standar nilai minimum C: ";
    cin>> minC;
    cout<<"Masukkan standar nilai minimum D: ";
    cin>> minD;
    cout<<"Masukkan standar nilai minimum E: ";
    cin>> minE;
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
    double total_nilai;
    //=================================================
    // YOUR CODE STARTS HERE
    total_nilai = (uts*prop_uts/100 + uas*prop_uas/100 + tubes*prop_tubes/100) ;

    if(total_nilai>=minA){
       index = 'A';
    }else if(total_nilai>=minB){
        index = 'B';
    }else if(total_nilai>=minC){
        index = 'C';
    }else if(total_nilai>=minD){
        index = 'D';
    }
    else{
        index = 'E';
    }
    cout<<"Indeks Nilai Anda "<<index<<endl;
    main();
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
    cout<<"Masukkan Nilai UTS: ";
    cin>>uts;
    cout<<"Masukkan Nilai UAS: ";
    cin>>uas;
    cout<<"Masukkan Nilai Tubes: ";
    cin>>tubes;

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
        cout<<"Terimakasih telah menggunakan aplikasi ini"<<endl;
        cout<<"Created by Rama Aditya Maulana 1301150034"<<endl;

    // YOUR CODE ENDS HERE
    //=================================================
}
