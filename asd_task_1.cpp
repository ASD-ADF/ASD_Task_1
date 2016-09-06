/**
    NAMA  : Abdul Rahman Safari
    KELAS : IF-39-06
    NIM   : 1301144380
**/


#include <iostream>
#include <stdlib.h>
#include<conio.h>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
int persen_uts,persen_uas,persen_tubes,a,b,c,d,jum_uts,jum_uas,jum_tubes,jum;

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
    cout << "\tDaftar Menu :" << endl << endl;
    cout << "\t1. set standar index nilai" << endl;
    cout << "\t2. set proporsi nilai" << endl;
    cout << "\t3. input nilai" << endl;
    cout << "\t4. keluar"<< endl;
    cout << "\tMasukan pilihan : ";
    cin >> pilihan;
    switch(pilihan)
    {
    case 1:
        system("cls");
        set_standar();
        break;
    case 2:
        system("cls");
        set_proporsi_nilai();
        break;
    case 3:
        system("cls");
        input_nilai();
        break;
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
    cout << "\tMasukan Persentase Untuk UTS : ";
    cin >> persen_uts;
    cout << endl;
    cout << "\tMasukan Persentase Untuk UAS : ";
    cin >> persen_uas;
    cout << endl;
    cout << "\tMasukan Persentase Untuk TUBES : ";
    cin >> persen_tubes;
    cout << endl;
    cout << endl;
    if (persen_uts+persen_uas+persen_tubes!=100)
    {

        cout << "\tPersentasi kurang atau lebih dari 100!!!!";
        getch();
        system("cls");
        set_proporsi_nilai();

    }
    getch();
    system("cls");
    main_menu();
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
    cout << "\tMasukan Standar Nilai Untuk Index A : ";
    cin >> a;
    cout << endl;
    cout << "\tMasukan Standar Nilai Untuk Index B : ";
    cin >> b;
    cout << endl;
    cout << "\tMasukan Standar Nilai Untuk Index C : ";
    cin >> c;
    cout << endl;
    cout << "\tMasukan Standar Nilai Untuk Index D : ";
    cin >> d;
    cout << endl;

    cout << endl;
    cout << endl;
    if ((a>100)||(b>=a)||(c>=b)||(d>=c))
    {

        cout << "\tAda Yang Error di set standar nilai index";
        getch();
        system("cls");
        set_standar();

    }
    getch();
    system("cls");
    main_menu();

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
    jum_uts=uts*persen_uts/100;
    jum_uas=uas*persen_uas/100;
    jum_tubes=tubes*persen_tubes/100;
    jum=jum_uts+jum_uas+jum_tubes;
    if (jum >= a)
    {
        index = 'A' ;

    }
    else if (jum >= b)
    {
        index = 'B' ;
    }
    else if (jum >= c)
    {
        index = 'C' ;
    }
    else if (jum >= d)
    {
        index = 'D' ;
    }
    else if (jum < d)
    {
        index = 'E' ;
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
    cout << "\tMasukan Nilai UTS : ";
    cin >> uts;
    cout << endl;
    cout << "\tMasukan Nilai UAS : ";
    cin >> uas;
    cout << endl;
    cout << "\tMasukan Nilai TUBES : ";
    cin >> tubes;
    cout << endl;
    cout << "Nilai anda adalah : "<<hitung_index(uts,uas,tubes);
    getch();
    system("cls");
    main_menu();
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
	cout<<endl;
	cout<<endl;
	cout<<"Program Telah selesai";
	cout<<endl;
	cout<<"nama : abdul rahman safari";
	cout<<endl;
	cout<<"nim : 1301144380";

    // YOUR CODE ENDS HERE
    //=================================================
}
