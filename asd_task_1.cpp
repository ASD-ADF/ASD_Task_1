/**
    NAMA  : Muh. Hatta Eka Putra
    NIM   : 1301160444
    KELAS : IF 40-02
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
double nilai_uts,nilai_uas,nilai_tubes,uts,uas,tubes;
int a_atas,a_bawah,b_atas,b_bawah,c_atas,c_bawah,d_atas,d_bawah,e_atas,e_bawah;
double Total_Nilai;
char Index;

// YOUR CODE ENDS HERE
//=================================================


void main_menu();
void set_standar();
void set_proporsi_nilai();
char hitung_index(double nilai_uts, double nilai_uas, double nilai_tubes);
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
    cout <<endl;
    cout <<" MENU "<< endl;
    cout <<endl;
    cout <<" 1. Set Standar Index Nilai"<< endl;
    cout <<" 2. Set Proporsi Nilai"<< endl;
    cout <<" 3. Input Nilai"<< endl;
    cout <<" 4. Keluar"<< endl;
    cout <<endl;
    cout <<" > Pilih : ";
    cin >>pilihan;

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
    else
    {
        cout <<endl;
        thank_you();
    }


    //YOUR CODE ENDS HERE
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

    cout <<endl;
    cout <<endl;
    cout <<" > Presentasi Nilai UTS(Dalam desimal) : ";
    cin >>uts;
    cout <<endl;
    cout <<" > Presentasi Nilai UAS (Dalam desimal): ";
    cin >>uas;
    cout <<endl;
    cout <<" > Presentasi Nilai TUBES (Dalam desimal) : ";
    cin >>tubes;

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

    cout <<" > A adalah index nilai(batas bawah) : ";
    cout <<"   Sampai (batas atas) : ";
    cout <<endl;
    cout <<" > B adalah index nilai(batas bawah) : ";
    cout <<"   Sampai (batas atas) : ";
    cout <<endl;
    cout <<" > C adalah index nilai(batas bawah) : ";
    cout <<"   Sampai (batas atas) : ";
    cout <<endl;
    cout <<" > D adalah index nilai(batas bawah) : ";
    cout <<"   Sampai (batas atas) : ";
    cout <<endl;
    cout <<" > E adalah index nilai(batas bawah) : ";
    cout <<"   Sampai (batas atas) : ";

    cout <<"  > Index Nilai : "<<endl;
    cout <<endl;
    cout <<"   "<<a_bawah<<" < A < "<<a_atas<< endl;
    cout <<"   "<<b_bawah<<" < B < "<<b_atas<< endl;
    cout <<"   "<<c_bawah<<" < C < "<<c_atas<< endl;
    cout <<"   "<<d_bawah<<" < D < "<<d_atas<< endl;
    cout <<"   "<<e_bawah<<" < E < "<<e_atas<< endl;

    // YOUR CODE ENDS HERE
    //=================================================
}


char hitung_index(double nilai_uts, double nilai_uas, double nilai_tubes)
{
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    //=================================================
    // YOUR CODE STARTS HERE

    Total_Nilai = nilai_uts*uts + nilai_uas*uas + nilai_tubes*tubes;

    {
        Index = 'A';
    }
    else if (Total_Nilai > b_bawah and Total_Nilai < b_atas)
    {
        Index = 'B';
    }
    else if (Total_Nilai > c_bawah and Total_Nilai < c_atas)
    {
        Index = 'C';
    }
    else if (Total_Nilai > d_bawah and Total_Nilai < d_atas)
    {
        Index = 'D';
    }
    else
    {
        Index = 'E';
    }

    // YOUR CODE ENDS HERE
    //=================================================
    return Index;
}


void input_nilai()
{
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    //=================================================
    // YOUR CODE STARTS HERE

    cout <<"  > Nilai UAS : ";
    cin >>nilai_uas;
    cout <<endl;
    cout <<"  > Nilai UTS : ";
    cin >>nilai_uts;
    cout <<endl;
    cout <<"  > Nilai TUBES : ";
    cin >>nilai_tubes;

    hitung_index(nilai_uts,nilai_uas,nilai_tubes);

    cout <<endl;
    cout <<"  > Total Nilai Anda Adalah : "<<Total_Nilai;
    cout <<endl;
    cout <<"  > Index : "<<Index;
    cout <<endl;

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

    cout <<"   Terimakasih Telah Menggunakan Program Ini"<<endl;
    cout <<"   NIM : 1301160444"<<endl;
    cout <<"   Nama : Muh. Hatta Eka Putra"<<endl;

    // YOUR CODE ENDS HERE
    //=================================================
}
