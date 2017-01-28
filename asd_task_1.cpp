/**
    NAMA  : Isnan Akbar Rahim
    NIM   : 1301164490
    KELAS : IF 40-02
**/


#include <iostream>
#include <stdlib.h>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE

float pruts,pruas,prtubes,nilaia,nilaib,nilaic,nilaid,nilai_uas,nilai_uts,nilai_tubes;


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

    int opsi;
    //=================================================
    // YOUR CODE STARTS HERE
    cout << "1. set standar index nilai\n";
    cout << "2. set proporsi nilai\n";
    cout << "3. input nilai\n";
    cout << "4. keluar\n";
    cin >> opsi;
    if ( opsi == 1)
    {
        set_standar();
        main_menu();
    }
    else if(opsi ==2)
    {
        set_proporsi_nilai();
        main_menu();
    }
    else if (opsi ==3)
    {
        input_nilai();
        main_menu();
    }
    else
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
        cout <<"prosentase uts:";
        cin >> pruts;
        cout <<"prosentase uas:";
             cin >> pruas;
        cout <<"prosentase TUBES:";
             cin >> prtubes;
    }
    while (pruts + pruas + prtubes != 100);
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
	cout << "nilai A :";
    cin >> nilaia;
    cout << "nilai B :";
    cin >> nilaib;
    cout << "nilai C :";
    cin >> nilaic;
    cout << "nilai D:";
    cin >> nilaid;

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
    int totaluts = uts * pruts / 100;
    int totaluas = uas * pruas / 100;
    int totaltubes= tubes * prtubes / 100;
    int totalnilai= totaluts + totaluas + totaltubes;
    cout << totalnilai << endl;
    if (totalnilai >= nilaia)
    {
        index = 'A' ;
    }
    else if (totalnilai >= nilaib )
    {
        index = 'B';
    }
    else if (totalnilai >= nilaic)
    {
        index = 'C';
    }
    else if (totalnilai >= nilaid)
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
    //double uas, uts, tubes;
    //=================================================
    // YOUR CODE STARTS HERE
    cout << "nilai uts:";
    cin >> nilai_uts;
    cout << "nilai uas:";
    cin >> nilai_uas;
    cout << "nilai tubes:";
    cin >> nilai_tubes;
    cout << hitung_index(nilai_uts,nilai_uas,nilai_tubes);
    cout << endl;

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

    cout << "Terima Kasih";
    exit(0);
    // YOUR CODE ENDS HERE
    //=================================================
}

