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
double total,puts,puas,ptubes;
double a,b,c,d;
double niluas, niluts, niltubes;
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
    cout<<"Daftar Menu"<<endl;
    cout<<"1. Set Standar Index Nilai"<<endl;
    cout<<"2. Set Proporsi Nilai"<<endl;
    cout<<"3. Input Nilai"<<endl;
    cout<<"4. Keluar"<<endl;
    cout<<endl;
    cout<<"Pilih menu : ";
    cin>>pilihan;

    if(pilihan==1)
    {
        set_standar();
    }
    else if (pilihan==2)
    {
        set_proporsi_nilai();
    }
    else if (pilihan==3)
    {
        input_nilai();
    }
    else if (pilihan==4)
    {
        thank_you();
    }
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

    cout<<"Input prosentase dalam persen"<<endl;
    cout<<"Masukan prosentase UTS : ";
    cin>>puts;
    cout<<"Masukan prosentase UAS : ";
    cin>>puas;
    cout<<"Masukan prosentase TUBES : ";
    cin>>ptubes;

    if (puts + puas + ptubes!=100)
    {
        cout<<"Total input prosentase !=100, silahkan masukan prosentase kembali"<<endl;
        cout<<endl;
        cout<<"Input prosentase dalam persen"<<endl;
        cout<<"Masukan prosentase UTS : ";
        cin>>puts;
        cout<<"Masukan prosentase UAS : ";
        cin>>puas;
        cout<<"Masukan prosentase TUBES : ";
        cin>>ptubes;
    }

    cout<<endl;
    main_menu();
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

    cout<<"Masukan standar minimum A : ";
    cin>>a;
    cout<<"Masukan standar minimum B : ";
    cin>>b;
    cout<<"Masukan standar minimum C : ";
    cin>>c;
    cout<<"Masukan standar minimum D : ";
    cin>>d;

    if (a,b,c,d>100)
    {
        cout<<"Input standar salah, silahkan ulangi lagi";
        cout<<endl;
        cout<<"Masukan standar minimum A : ";
        cin>>a;
        cout<<"Masukan standar minimum B : ";
        cin>>b;
        cout<<"Masukan standar minimum C : ";
        cin>>c;
        cout<<"Masukan standar minimum D : ";
        cin>>d;
    }

    cout<<endl;
    main_menu();
    //=================================================
}


char hitung_index(double niluts, double niluas, double niltubes)
{
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    //=================================================
    total=(puts/100*niluts)+(puas/100*niluas)+(ptubes/100*niltubes);
    cout<<"Total nilai : "<< total<<endl;

    if (total>=a)
    {
        cout<<"Index nilai : A";
    }
    else if (total>=b)
    {
        cout<<"Index nilai : B";
    }
    else if (total>=c)
    {
        cout<<"Index nilai : C";
    }
    else if (total>=d)
    {
        cout<<"Index nilai : D";
    }
    else
    {
        cout<<"Index nilai : E";
    }

    //=================================================
    return index;
}


void input_nilai()
{
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    //=================================================
    cout<<"Masukan nilai UTS : ";
    cin>>niluts;
    cout<<"Masukan nilai UAS : ";
    cin>>niluas;
    cout<<"Masukan nilai TUBES : ";
    cin>>niltubes;

    cout<<endl;
    hitung_index(niluts, niluas, niltubes);
    cout<<endl;
    main_menu();
    cout<<endl;
    //=================================================
}

void thank_you()
{
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    //=================================================
    cout<<"Terima Kasih";
    cout<<endl;
    cout<<"NIM : 1301164249";
    cout<<endl;
    cout<<"Nama : Seiba Shonia";
    cout<<endl;

    //=================================================
}
