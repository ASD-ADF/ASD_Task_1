/**
    NAMA  : Fuad Zauqi Nur
    NIM   : 1301164392
    KELAS : IF-40-02
**/


#include <iostream>
#include <stdlib.h>
using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
int indexA,indexB,indexC,indexD;
char indexs,A,B,C,D;
double jumlah,uas,uts,tubes;
int prosentase,puts,puas,ptubes;
// YOUR CODE ENDS HERE
//=================================================


void main_menu();
void set_standar();
void set_proporsi_nilai();
char hitung_index(double uts, double uas, double tubes);
void input_nilai();
void thank_you();

int main()
{
    main_menu();
    return 0;
}

void main_menu()
{
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
    //do {
    cout<<"daftar menu: \n1. set standar index nilai \n2. set proporsi nilai \n3. input nilai \n4. keluar \npilih menu :"<< endl;
    cin>>pilihan;
    if (pilihan==1)
    {
        set_standar();
        main_menu();
    }
    else if (pilihan==2)
    {
        set_proporsi_nilai();
        main_menu();
    }
    else if (pilihan==3)
    {
        input_nilai();
        main_menu();
    }
    else if (pilihan==4)
    {
        thank_you();
    }
    //} while (pilihan);
    // YOUR CODE ENDS HERE
    //=================================================
}


void set_proporsi_nilai()
{
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    while (prosentase != 100){
    prosentase=0;
    cout<<"masukan prosentase uts : ";
    cin>>puts;
    cout<<"masukan prosentase uas : ";
    cin>>puas;
    cout<<"masukan prosentase tubes : ";
    cin>>ptubes;
    prosentase=puas+puts+ptubes;
    }

    // YOUR CODE ENDS HERE
    //=================================================
}

void set_standar()
{
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout<<"masukan standar indeks A :";
    cin>>indexA;
    cout<<"masukan standar indeks B :";
    cin>>indexB;
    cout<<"masukan standar indeks C :";
    cin>>indexC;
    cout<<"masukan standar indeks D :";
    cin>>indexD;
    //}

    // YOUR CODE ENDS HERE
    //=================================================
}


char hitung_index(double uts, double uas, double tubes)
{
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    //=================================================
    // YOUR CODE STARTS HERE
    jumlah=(uts*puts/100)+(uas*puas/100)+(tubes*ptubes/100);
    if (jumlah>indexA)
    {
        index='A';//cout<<"Nilai anda adalah "<<jumlah<<" dan indeksnya A"<<endl;
    }
    else if (jumlah>indexB)
    {
        index='B';//cout<<"Nilai anda adalah "<<jumlah<<" dan indeksnya B"<<endl;
    }
    else if (jumlah>indexC)
    {
        index='C';//cout<<"Nilai anda adalah "<<jumlah<<" dan indeksnya C"<<endl;
    }
    else
    {
        index='D';//cout<<"Nilai anda adalah "<<jumlah<<" dan indeksnya D"<<endl;
    }

    // YOUR CODE ENDS HERE
    //=================================================
    return index;
}


void input_nilai()
{
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    //double uas, uts, tubes;
    //=================================================
    // YOUR CODE STARTS HERE
    cout<<"masukan nilai uts anda : ";
    cin>>uts;
    cout<<"masukan nilai uas anda : ";
    cin>>uas;
    cout<<"masukan nilai tubes anda : ";
    cin>>tubes;
    cout<<"index anda : "<<hitung_index(uts, uas, tubes)<<endl;

    // YOUR CODE ENDS HERE
    //=================================================
}

void thank_you()
{
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout<<"Terima Kasih telah menggunakan aplikasi ini"<<endl;
    cout<<"Fuad Zauqi Nur (1301164392)"<<endl;


    // YOUR CODE ENDS HERE
    //=================================================
}
