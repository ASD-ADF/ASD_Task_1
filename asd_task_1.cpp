/**
    NAMA  : Yediza Frans Dhika
    NIM   : 1301160622
    KELAS : IF 40 02
**/


#include <iostream>

using namespace std;


/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
int pilihan,stdA,stdB,stdC,stdD,pUTS,pUAS,pTUBES;
    long double Total;
    string index;
    double uts,uas,tubes;

//=================================================


void main_menu();
void set_standar();
void set_proporsi_nilai();
char hitung_index();
void input_nilai();
void thank_you();

int main() {
    main_menu();
    thank_you();

    return 0;
}

void main_menu(){
    do{
        cout<<" DAFTAR MENU : \n";
        cout<<" 1. Set standar index nilai \n";
        cout<<" 2. Set proporsi nilai \n";
        cout<<" 3. Input nilai \n";
        cout<<" 4. Keluar \n";
        cout<<" Masukkan pilihan anda : ";
        cin>>pilihan;
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
    //=================================================
    if (pilihan == 1){
        set_standar();
    }
    else if (pilihan == 2){
        set_proporsi_nilai();
    }
    else if (pilihan == 3) {
        input_nilai();
        hitung_index();

    }
    }while(pilihan!=4);

}


void set_proporsi_nilai(){
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    //=================================================
    cout<<"Input Prosentase dalam persen \n"<<"\n";
    cout<<"Masukan Prosentase UTS : ";
    cin>>pUTS;
    cout<<"Masukan Prosentase UAS : ";
    cin>>pUAS;
    cout<<"Masukan Prosentase Tubes : ";
    cin>>pTUBES;
    if (pUAS+pUTS+pTUBES!=100){
        cout<<"Prosentase yang anda masukan != 100, silahkan ulangi lagi \n";
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
    cout<<"Masukan standar minimum A : ";
    cin>>stdA;
    cout<<"Masukan standar minimum B : ";
    cin>>stdB;
    cout<<"Masukan standar minimum C : ";
    cin>>stdC;
    cout<<"Masukan standar minimum D : ";
    cin>>stdD;

    if (stdB,stdC,stdD >= stdA) {
        cout<<"Anda salah memasukan standar nilai\n";
        set_standar();
        }
    else if (stdC,stdD >= stdB){
        cout<<"Anda salah memasukan standar nilai\n";
        set_standar();
    }
    else if (stdD>=stdC){
        cout<<"Anda salah memasukan standar nilai\n";
        set_standar();
    }


    //=================================================
}


char hitung_index(){
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    //=================================================
    Total=uts*pUTS/100+uas*pUAS/100+tubes*pTUBES/100;

    if (Total>=stdA){
        index ="A";
        cout<<"Indeks total nilai anda adalah : "<<index<<"\n";
    }
    else if (Total>=stdB){
        index ="B";
        cout<<"Indeks total nilai anda adalah : "<<index<<"\n";
    }
    else if (Total>=stdC){
        index ="C";
        cout<<"Indeks total nilai anda adalah : "<<index<<"\n";
    }
    else if(Total>=stdD) {
        index ="D";
        cout<<"Indeks total nilai anda adalah : "<<index<<"\n";
    }
    else {
        index ="E";
        cout<<"Indeks total nilai anda adalah : "<<index<<"\n";
    }
    //=================================================

}


void input_nilai(){
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    //=================================================
    cout<<"Masukan nilai UTS : ";
    cin>>uts;
    cout<<"Masukan nilai UAS : ";
    cin>>uas;
    cout<<"Masukan nilai Tubes : ";
    cin>>tubes;



    //=================================================
}

void thank_you(){
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    //=================================================
    cout<"TerimaKasih Horas ";
    //=================================================
}
