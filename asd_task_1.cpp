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
int pil, Auts, Buas, Ctubes, nilaiA, nilaiB, nilaiC, nilaiD, nilaiE;
double uts, uas, tubes;
long double total;
string index;

//=================================================


void main_menu();
void set_standar();
void set_proporsi_nilai();
char hitung_index();
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

    //=================================================
    do {
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


    if(pil==1){
        set_standar();
    }
    else if(pil==2){
        set_proporsi_nilai();
    }
    else if(pil==3){
        input_nilai();
        hitung_index();

    }
    } while (pil!=4);

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
    cout<<"Masukkan Nilai UTS :";
    cin>>Auts;
    cout<<"Masukkan Nilai UAS :";
    cin>>Buas;
    cout<<"Masukkan Nilai TUBES :";
    cin>>Ctubes;
    cout<<"\n";
    cout<<"\n";

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
    cout<<"Masukkan Nilai Minimum A :";
    cin>>nilaiA;
    cout<<"Masukkan Nilai Minimum B :";
    cin>>nilaiB;
    cout<<"Masukkan Nilai Minimum C :";
    cin>>nilaiC;
    cout<<"Masukkan Nilai Minimum D :";
    cin>>nilaiD;
    cout<<"Masukkan Nilai Minimum E :";
    cin>>nilaiE;
    cout<<"\n";
    cout<<"\n";

    if (nilaiE,nilaiD,nilaiC,nilaiB >= nilaiA) {
        cout<<"Anda salah memasukan standar nilai\n";
        set_standar();
        }
        else if (nilaiE,nilaiD,nilaiC >= nilaiB){
            cout<<"Anda salah memasukan standar nilai\n";
            set_standar();
        }
        else if (nilaiE,nilaiD>=nilaiC){
            cout<<"Anda salah memasukan standar nilai\n";
            set_standar();
        }
        else if (nilaiE>=nilaiD){
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
    total=(uts*Auts/100) + (uas*Buas/100) + (tubes*Ctubes/100);

    if (total>=nilaiA) {
        index ="A";
    cout<<"Index Akhir Nilai Anda :"<<index<<"\n";
    }

    else if (total>=nilaiB) {
        index ="B";
    cout<<"Index Akhir Nilai Anda :"<<index<<"\n";
    }

    else if (total>=nilaiC) {
        index ="C";
    cout<<"Index Akhir Nilai Anda :"<<index<<"\n";
    }

    else if (total>=nilaiD) {
        index ="D";
    cout<<"Index Akhir Nilai Anda :"<<index<<"\n";
    }

    else if (total>=nilaiE) {
        index ="E";
    cout<<"Index Akhir Nilai Anda :"<<index<<"\n";
    }
    cout<<"\n";
    cout<<"\n";

    //=================================================

}


void input_nilai(){
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    //=================================================
    cout<<"Masukkan Nilai UTS :";
    cin>>uts;
    cout<<"Masukkan Nilai UAS :";
    cin>>uas;
    cout<<"Masukkan Nilai TUBES :";
    cin>>tubes;
    cout<<"\n";
    cout<<"\n";

    //=================================================
}

void thank_you(){
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout<<"Terima kasih atas penggunaan terhadap sistem kami\n";
    cout<<"REYNALDI SYAPUTRA\n";
    cout<<"1301164141\n";

    // YOUR CODE ENDS HERE
    //=================================================
}
