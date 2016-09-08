/**
    NAMA  : Agung Jati Prawira
    NIM   : 1301154421
    KELAS : IF-39-01
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE

double x,y,z;
double skor[4];

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

    int nomer;
    //=================================================
    // YOUR CODE STARTS HERE
    while (nomer != 4)
    {
        cout<<"----PROGRAM NILAI AKHIR----"<<endl;
        cout<<"1. Set Standar Indeks Nilai"<<endl;
        cout<<"2. Set Proporsi Nilai"<<endl;
        cout<<"3. Input Nilai"<<endl;
        cout<<"4. Keluar"<<endl;
        cout<<"Masukkan Pilihan Anda: ";
        cin>> nomer;
        switch (nomer)
        {
        case 1:
            set_standar();
            break;
        case 2 :
            set_proporsi_nilai();
            break;
        case 3 :
            input_nilai();
            break;
        case 4 :
            thank_you();
            break;
        }
    }
    // YOUR CODE ENDS HERE
    //=================================================
    //thank_you();
}


void set_proporsi_nilai()
{
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    double jumlah;
    //=================================================
    // YOUR CODE STARTS HERE

    do
    {
        cout<< "\nMasukan Prosentase Nilai Akhir "<< endl;
        cout<<"Masukkan % Nilai UTS: ";
        cin>> x;
        cout<<"Masukkan % Nilai UAS: ";
        cin>> y;
        cout<<"Masukkan % Nilai Tugas Besar: ";
        cin>> z;
        jumlah = x+y+z;
        if (jumlah != 100)
            cout<< "Inputan Anda Haruslah Bernilai 100 Silahkan Ulangi Lagi! :)"<< endl;
    }
    while(jumlah!=100);
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
    //int i,n;
    //=================================================
    // YOUR CODE STARTS HERE
    skor[4]=0;
    cout<<"Masukkan Standar Nilai Minimum A: ";
    cin>> skor[0];
    cout<<"Masukkan Standar Nilai Minimum B: ";
    cin>> skor[1];
    cout<<"Masukkan Standar Nilai Minimum C: ";
    cin>> skor[2];
    cout<<"Masukkan Standar Nilai Minimum D: ";
    cin>> skor[3];

    if (skor[0]<skor[1] )
    {
        cout<<"Nilai Yang dimasukkan SALAH! :( \n";
        set_standar();
    }
    else if (skor[1]<skor[2])
    {
        cout<<"Nilai Yang dimasukkan SALAH! :( \n";
        set_standar();
    }
    else if (skor[2]<skor[3])
    {
        cout<<"Nilai Yang dimasukkan SALAH! :( \n";
        set_standar();
    }
    else if (skor[0]>skor[1] && skor[1]>skor[2] && skor[2]>skor[3] )
    {
        main_menu();
    }
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

    char indek;
    double total;
    //=================================================
    // YOUR CODE STARTS HERE
    total = (uts*(x/100) + uas*(y/100) + tubes*(z/100));
    if (total < skor[3]) indek = 'E :(';
    if (total >= skor[3] && total < skor[2]) indek = 'D';
    if (total >= skor[2] && total < skor[1]) indek = 'C';
    if (total >= skor[1] && total < skor[0]) indek = 'B';
    if (total >= skor[0]) indek = 'A';
    // YOUR CODE ENDS HERE
    //=================================================
    return indek;
}


void input_nilai()
{
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    char index ;
    double uas, uts, tubes;
    //=================================================
    // YOUR CODE STARTS HERE
    cout <<"Masukkan Nilai Anda!"<< endl;
    cout <<"Nilai Ujian Tengah Semester: ";
    cin >> uts;
    cout <<"Nilai Ujian Akhir Semester: ";
    cin >> uas;
    cout <<"Nilai Tugas Besar: ";
    cin >> tubes;
    index = hitung_index(uts,uas,tubes);
    cout << "\n Nilai Akhir Anda Ber-Indeks: "<< index<<endl;

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
    cout<<"\nThank You! :) "<< endl;
    cout<<"Regards, \n\nNama : Agung Jati Prawira\n\nNIM : 1301154421"<<endl;


    // YOUR CODE ENDS HERE
    //=================================================
}
