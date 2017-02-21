/**
    NAMA  : Ayu Wulandari
    NIM   : 1301164104
    KELAS : IF 40-02
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
int a,b,c,d;
double nilaiuts, nilaiuas, nilaitubes,total;
double uts,uas,tubes;

// YOUR CODE ENDS HERE
//=================================================


void main_menu();
void set_standar();
void set_proporsi_nilai();
char hitung_index();
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
    while (pilihan != 4)
    {
        cout<< "DAFTAR MENU" << endl;
        cout<< "1. Set Standar Index Nilai"<<endl;
        cout<< "2. Set Proporsi Nilai"<<endl;
        cout<< "3. Input Nilai"<<endl;
        cout<< "4. Keluar" << endl;
        cout<< " Masukkan Pilihan : ";
        cin>>pilihan;
        cout<<endl;
        if (pilihan == 1)
        {
            cout<<" 1. Set Standar Index Nilai"<<endl;
            set_proporsi_nilai();
        }
        if (pilihan == 2)
        {
            cout<<" 2. Set Proporsi Nilai"<<endl;
            set_standar();
        }
        if (pilihan == 3)
        {
            cout<<" Input Nilai"<<endl;
            input_nilai();
        }
        if (pilihan == 4)
        {
            thank_you();
        }
    }
}


void set_proporsi_nilai()
{
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    int nilai;
    cout<< "Input Prosentase Dalam Persen"<<endl;
    cout<< "Masukkan prosentase UTS : ";
    cin>>uts;
    cout<< "Masukkan prosentase UAS : ";
    cin>>uas;
    cout<< "Masukkan prosentase TUBES : ";
    cin>>tubes;
    nilai = uts + uas + tubes;
    if (nilai != 100)
    {
        cout<<"Input Prosentase Salah, Silahkan Ulangi"<<endl;
        cout<<endl;
        set_proporsi_nilai();
    }
    cout<<endl;
}

void set_standar()
{
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    cout<< "Masukkan standar minimum A : ";
    cin>>a;
    cout<< "Masukkan standar minimum B : ";
    cin>>b;
    cout<< "Masukkan standar minimum C : ";
    cin>>c;
    cout<< "Masukkan standar minimum D : ";
    cin>>d;
    cout<<endl;
}


char hitung_index()
{
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    //=================================================
    // YOUR CODE STARTS HERE
    total=((nilaiuts/100*uts)+(nilaiuas/100*uas)+(nilaitubes/100*tubes));
    cout<<"Nilai total : ";
    cout<<total<<endl;
    if (total>=a)
    {
        cout<<"Index nilai anda adalah A";
    }
    else if (total>=b)
    {
        cout<<"Index nilai anda adalah B";
    }
    else if (total>=c)
    {
        cout<<"Index nilai anda adalah C";
    }
    else if (total>=d)
    {
        cout<<"Index nilai anda adalah D";
    }
    else
    {
        cout<<"Index nilai anda adalah E";
    }

    cout<<endl;

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
    cout<<"Masukkan nilai UTS: ";
    cin>>nilaiuts;
    cout<<"Masukkan nilai UAS: ";
    cin>>nilaiuas;
    cout<<"Masukkan nilai TUBES: ";
    cin>>nilaitubes;

    //hitung_index(uts,uas,tubes);
    hitung_index();
    cout<<endl;

    // YOUR CODE ENDS HERE
    //=================================================
}

void thank_you()
{
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    cout<< " Terimakasih :)"<<endl;
    cout<<endl;
    cout<< " Ayu Wulandari"<<endl;
    cout<<endl;
    cout<< " 1301164104"<<endl;
    cout<<endl;
}
