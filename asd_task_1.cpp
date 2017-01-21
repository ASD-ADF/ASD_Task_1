/**
    NAMA  : Seiba Shonia
    NIM   : 1301164249
    KELAS : IF 40-02
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
double uts,uas,tubes;
int pilih
int puts,puas,ptubes;
int a,b,c,d;
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
    cout<<"Daftar Menu";cout<<endl;
    cout<<"1. Set Standar Index Nilai";cout<<endl;
    cout<<"2. Set Proporsi Nilai";cout<<endl;
    cout<<"3. Input Nilai";cout<<endl;
    cout<<"4. Keluar";cout<<endl;

    cout<<"Pilih menu : ";cout<<endl;
    cin>>pilih;

    if(pilih==1)
    {
        set_standar()
    }
    else if (pilih==2)
    {
        set_proporsi_nilai()
    }
    else if (pilih==3)
    {
        input_nilai()
    }
    else if (pilih==4)
    {
        thank_you()
    }
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

    cout<<"Input prosentase dalam persen";cout<<endl;
    cout<<"Masukan prosentase UTS : ";cout<<endl;
    cin>>puts;
    cout<<"Masukan prosentase UAS : ";cout<<endl;
    cin>>puas;
    cout<<"Masukan prosentase TUBES : ";cout<<endl;
    cin>>ptubes;

    if (puts + puas + ptubes < 100) or (puts + puas + ptubes > 100)
    {
        cout<<"Total input prosentase !=100, silahkan masukan prosentase kembali";cout<<endl;
        cout<<"Input prosentase dalam persen";cout<<endl;
        cout<<"Masukan prosentase UTS : ";cout<<endl;
        cin>>puts;
        cout<<"Masukan prosentase UAS : ";cout<<endl;
        cin>>puas;
        cout<<"Masukan prosentase TUBES : ";cout<<endl;
        cin>>ptubes;

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

    cout<<"Masukan standar minimum A : ";cout<<endl;
    cin>>a;
    cout<<"Masukan standar minimum B : ";cout<<endl;
    cin>>b;
    cout<<"Masukan standar minimum C : ";cout<<endl;
    cin>>c;
    cout<<"Masukan standar minimum D : ";cout<<endl;
    cin>>d;

    if (a>100) or (b>100) or (c>100) or (d>100)
    {
        cout<<"Input standar salah, silahkan ulangi lagi";cout<<endl;
        cout<<"Masukan standar minimum A : ";cout<<endl;
        cin>>a;
        cout<<"Masukan standar minimum B : ";cout<<endl;
        cin>>b;
        cout<<"Masukan standar minimum C : ";cout<<endl;
        cin>>c;
        cout<<"Masukan standar minimum D : ";cout<<endl;
        cin>>d;
    }
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
    cout<<"Masukan nilai UTS : ";cout<<endl;
    cin>>uts;
    cout<<"Masukan nilai UAS : ";cout<<endl;
    cin>>uas;
    cout>>"Masukan nilai TUBES : ";cout<<endl;
    cin>>tubes;

    cout<<"Index nilai anda adalah

    //=================================================
}

void thank_you(){
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    //=================================================
    cout<<"Terima Kasih";cout<<endl;
    cout<<"NIM : 1301164249";cout<<endl;
    cout<<"Nama : Seiba Shonia";cout<<endl;

    //=================================================
}
