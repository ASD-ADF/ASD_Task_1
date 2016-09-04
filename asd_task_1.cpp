/**
    NAMA  : Amin Aenurahman Ali
    NIM   : 1301154398
    KELAS : IF 39-06
**/


#include <iostream>
#include <conio.h>
using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
int nilaiUTS, nilaiUAS, nilaiTUBES;
int minA, minB, minC, minD;
int UTS, UAS, TUBES;

// YOUR CODE ENDS HERE
//=================================================


void main_menu();
void set_standar();
void set_proporsi_nilai();
char hitung_index(double UTS, double UAS, double TUBES);
void input_nilai();
void thank_you();

int main()
{
    main_menu();
    getch();
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
    cout << endl;
    cout << "----<(Daftar Menu)>----" << endl;
    cout << "1. Set standar index nilai" << endl;
    cout << "2. Set proporsi nilai" << endl;
    cout << "3. Input nilai" << endl;
    cout << "4. Keluar" << endl;
    cout << endl;
    cout << "Masukan pilihan: ";
    cin >> (pilihan);
    switch (pilihan)
    {
    case 1:
        set_standar();
        break;
    case 2:
        set_proporsi_nilai();
        break;
    case 3:
        input_nilai();
        break;
    case 4:
        thank_you();
        break;
    }

    // YOUR CODE ENDS HERE
    //=================================================
    thank_you();
}


void set_proporsi_nilai()
{
    /**
    - fungsi mengubah presentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout << endl;
    cout << "Masukan presentase nilai (dalam %)" << endl;
    cout << "Masukan presentase nilai UTS       : ";
    cin >> nilaiUTS;
    cout << "Masukan presentase nilai UAS       : ";
    cin >> nilaiUAS;
    cout << "Masukan presentase nilai TUBES     : ";
    cin >> nilaiTUBES;
    if (nilaiUTS+nilaiUAS+nilaiTUBES !=100)
    {
        cout << "Jumlah presentase nilai harus 100%, silahkan coba lagi!" << endl;
        set_proporsi_nilai();
    }
    else
    {
        main();
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
    cout << endl;
    cout << "Masukan standar nilai minimum A    : ";
    cin >> minA;
    cout << "Masukan standar nilai minimum B    : ";
    cin >> minB;
    cout << "Masukan standar nilai minimum C    : ";
    cin >> minC;
    cout << "Masukan standar nilai minimum D    : ";
    cin >> minD;
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
    double total;
    //=================================================
    // YOUR CODE STARTS HERE
    total = (nilaiUTS*UTS/100 + nilaiUAS*UAS/100 + nilaiTUBES*TUBES/100);
    if (total >= minA)
    {
        index = 'A';
    }
    else if (total >= minB)
    {
        index = 'B';
    }
    else if (total >= minC)
    {
        index = 'C';
    }
    else if (total >= minD)
    {
        index = 'D';
    }
    else {
        index = 'E';
    }
    cout << endl;
    cout << "Your Index                             : " << index << endl;
    main();


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
    cout << endl;
    cout << "Masukan nilai UTS                      : ";
    cin >> UTS;
    cout << "Masukan nilai UAS                      : ";
    cin >> UAS;
    cout << "Masukan nilai TUBES                    : ";
    cin >> TUBES;
    cout << endl;
    cout << hitung_index(UTS,UAS,TUBES);
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
    cout << string(50, '\n');
    cout << "----<(ThankYou For Using My Program)>----" << endl;
    cout << endl;
    cout << "Sincerely," << endl;
    cout << "Amin Aenurahman | 1301154398";
    cout << endl;
    // YOUR CODE ENDS HERE
    //=================================================
}
