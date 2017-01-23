/**
    NAMA  : Wira Aditama
    NIM   :1301164068
    KELAS :IF 40-02
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
int pilihan, stdA,stdB, stdC,stdD,nUTS, nUAS, nTubes;
    long double Total;
    string index;
    double uts,uas,tubes;
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
    do{
    cout<<" Daftar Menu: ]n";
    cout<<" 1. Set Standar Index Nilai \n";
    cout<<" 2. Set Proporsi Nilai \n";
    cout<<" 3. Input Nilai\n";
    cout<<" 4. Masukan pilihan anda: ";
    cin>>pilihan;
    }
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
    if (pilihan == 1){
        set_standar();
    }
    else if (pilihan == 2){
        set_proporsi_nilai();
    }
    else if (pilihan == 3){
        input_nilai();
        hitung_index();
    }
    }while(pilihan!=4);

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
    cout<<"Input Presentase dalam Persen \n"<<n";
    cout<<"Masukan Presentase UTS: ";
    cin>>nUTS;
    cout<<"Masukan Presentase UAS: ";
    cin>>nUAS;
    cout<<"Masukan Presentase Tubes: ";
    cin>>nTubes;
    if (nUAS+nUTS+nTubes!=100){
        cout<<"Presentase yang Anda Masukan != 100, silahkan ulangi lagi \n";
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
    cout<<"Masukan Standar Minimum A: ";
    cin>>stdA;
    cout<<"Masukan Standar Minimum B: ";
    cin>>stdB;
    cout<<"Masukan Standar Minimum C: ";
    cin>>stdC;
    cout<<"Masukan Standar Minimum D: ";
    cout>>stdD;

    if(stdB,stdC,stdD>= stdA){
        cout<<"Anda Salah Memasukan Standar Nilai\n";
        set_standar();
    }
    else if (stdC, stdD >=stdB){
        cout<<"Anda Salah Memasukan Standar Nilai\n";
        set_standar();
    }
    else if (stdD>=stdC) {
        cout<<"Anda Salah Memasukan Standar Nilai\n";
        set_standar();
    }
    //=================================================



char hitung_index(double uts, double uas, double tubes){
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    //=================================================
    Total: uts*nUTS/100+uas*nUAs/100+tubes*nTubes/100;

    if(Total>=stdA){
            index="A";
        cout<<"Indeks Total Nilai Anda adalah: "<<index<<"\n";
    }
    else if(Total>=stdB){
            index="B";
        cout<<"Indeks Total Nilai Anda adalah: "<<index<<"\n";
    }
    else if(Total>=stdC){
            index="C";
        cout<<"Indeks Total Nilai Anda adalah: "<<index<<"\n";
    }
    else if(Total>=stdD){
            index="D";
        cout<<"Indeks Total Nilai Anda adalah: "<<index<<"\n";
    }
    else {
        index="E";
        cout<<"Indeks Total Nilai Anda adalah: "<<index<<"\n";
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
    cout<<"Masukan Nilai UTS: ";
    cin>>uts;
    cout<<"Masukan Nilai UAS: ";
    cin>>uas;
    cout<<"Masukan Nilai Tubes ";
    cin>>tubes;
    //=================================================
}

void thank_you(){
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    //=================================================
    cout<<"Terimakasih Telah Menggunakan Program Ini";
    cout<<"Wira Aditama"
    cout<<"1301164068"
    //=================================================
}
