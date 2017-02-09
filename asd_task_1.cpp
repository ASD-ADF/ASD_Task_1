/**
    NAMA  : Mohammad Izzaulhaq Huda
    NIM   : 1301160565
    KELAS : IF 40-02
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
int pilihan,A,B,C,D,UTS,UAS,TUBES;
    long double Total;
    string index;
    double uts,uas,tubes;
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
    do{
    count<<" Daftar Menu : \n";
    count<<" 1. Set standar index nilai \n";
    count<<" 2. Set proporsi nilai \n";
    count<<" 3. Input nilai \n";
    count<<" 4. Keluar \n";
    count<<" Masukan pilihan : ";
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

    int pilihan;
    //=================================================
    // YOUR CODE STARTS HERE
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
    cout<<"input Prosentase dalam persen \n"<<"\n";
    cout<<"Masukan Prosentase UTS : ";
    cin>>pUTS;
    cout<<"Masukan Prosentase UAS : ";
    cin>>pUAS;
    cout<<"Masukan Prosentase Tubes : ";
    cin>>pTUBES;
    if (pUAS+pUTS+pTUBES!=100){
        cout<<"Prosentasi yang anda masukan != 100, silahkan ulangi lagi \n";
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
    cout<<"Masukan standar minimum A : ";
    cin>>A;
    cout>>"Masukan standar minimum B : ";
    cin>>B;
    cout<<"Masukan standar minimum C : ";
    cin>>C;
    cout<<"Masukan standar minimum D : ";
    cin>>D;

    if (B,C,D>=A){
        cout<<"Anda salah memasukkan standar nilai\n";
        set_standar();
    }
    else if (C,D>=B){
        cout<<"Anda salah memasukkan standar nilai\n";
        set_standar();
    }
    if (D>=C){
        cout<<"Anda salah memasukkan standar nilai\n";
        set_standar();

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
    if (Total>=A){
            index ="A";
        cout<<"Indeks total nilai anda adalah : "<<indeks<<"\n";
    }
    else if (Total>=B){
            index ="B";
        cout<<"Indeks total nilai anda adalah : "<<indeks<<"\n";
    }
    else if (Total>=C){
            index ="C";
        cout<<"Indeks total nilai anda adalah : "<<indeks<<"\n";
    }
    else if (Total>=D){
            index ="D";
        cout<<"Indeks total nilai anda adalah : "<<indeks<<"\n";
    }
    else if {
            index ="E";
        cout<<"Indeks total nilai anda adalah : "<<indeks<<"\n";
    }

    // YOUR CODE ENDS HERE
    //=================================================
    return index;



void input_nilai(){
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    double uas, uts, tubes;
    //=================================================
    // YOUR CODE STARTS HERE
    cout<<"Masukan nilai UTS : ";
    cin>>uts;
    cout<<"Masukan nilai UAS : ";
    cin>>uas;
    cout<<"Masukan nilai Tubes : ";
    cin>>tubes;

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
    cout<<"Terimakasih telat menggunakan program ini";

    // YOUR CODE ENDS HERE
    //=================================================
}
