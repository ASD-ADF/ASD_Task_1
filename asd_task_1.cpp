/**
    NAMA  : HANAFI ABDULLAH GUSMAN
    NIM   : 1301160362
    KELAS : IF 40-02
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
float nilai_uts,nilai_uas,nilai_tubes,nilai_a,nilai_b,nilai_c,nilai_d,nilai_e;
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
    cout << "welcome to my apps" << endl;
    cout << "1. set standar index nilai"<< endl;
    cout << "2. set proporsi nilai" << endl;
    cout << "3. input nilai" << endl;
    cout << "4. keluar" << endl;
    cout << "masukan pilihan :";
    cin  >> pilihan;
    if ( pilihan == 1)
    {
        set_standar();
        main_menu();
    }
    else if ( pilihan == 2)
    {
        set_proporsi_nilai();
        main_menu();
    }
    else if (pilihan == 3)
    {
        input_nilai();
        main_menu();
    }
    else if (pilihan == 4)
    {
        thank_you();

    }
    // YOUR CODE ENDS HERE
    //=================================================
    thank_you();
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
    do
    {
        cout <<" input presentase " << endl;
        cout << "UTS:";
        cin  >> nilai_uts;
        cout << "UAS:";
        cin  >> nilai_uas;
        cout << "TUBES:";
        cin  >> nilai_tubes;

    }
    while (nilai_tubes + nilai_uas + nilai_uts != 100);


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
    cout << "masukan minimal nilai A :";
    cin  >> nilai_a;
    cout << "masukan minimal nilai B :";
    cin  >> nilai_b;
    cout << "masukan minimal nilai C :";
    cin  >> nilai_c;
    cout << "masukan minimal nilai D :";
    cin  >> nilai_d;
    cout << "masukan minimal nilai E :";
    cin  >> nilai_e;
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
    uts   = uts * nilai_uts/100;
    uas   = uas * nilai_uas/100;
    tubes = tubes * nilai_tubes/100;

    if (uts + uas + tubes == nilai_a)
    {
        index = 'A';
    }
    else if (uts + uas + tubes == nilai_b)
    {
        index = 'B';
    }
    else if (uts + uas + tubes == nilai_c)
    {
        index = 'C';
    }
    else if (uts + uas + tubes == nilai_d)
    {
        index = 'D';
    }
    else
    {
        index = 'E';
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
    double uas, uts, tubes;
    //=================================================
    // YOUR CODE STARTS HERE
    cout << "Masukan nilai uts :";
    cin  >> uts;
    cout << "Masukan nilai uas :";
    cin  >> uas;
    cout << "Masukan nilai tubes :";
    cin  >> tubes;
    cout << hitung_index(uts,uas,tubes);
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
    cout << "makasih bossqu";
    exit(0);
    // YOUR CODE ENDS HERE
    //=================================================
}
