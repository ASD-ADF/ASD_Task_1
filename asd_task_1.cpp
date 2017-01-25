/**
    NAMA  : Rani Sari Murti
    NIM   : 1301160544
    KELAS : 40-02
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
double a,b,c,d;
double nuas,nuts,ntubes;
double total,uts,uas,tubes;
// YOUR CODE ENDS HERE
//=================================================


void main_menu();
void set_standar();
void set_proporsi_nilai();
void hitung_index(double uts, double uas, double tubes);
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
    cout<<"Daftar menu: "<<endl;
    cout<<"1. set standar index nilai"<<endl;
    cout<<"2. set proporsi nilai"<<endl;
    cout<<"3. input nilai"<<endl;
    cout<<"4. keluar"<<endl;
    cout<<endl;
    cout<<"masuka pilihan :"<<endl;
    cin>>pilihan;

    if (pilihan==1)
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
    // YOUR CODE STARTS HERE


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
    cout<<"masukan prosentase UTS :"<<endl;
    cin>>uts;
    cout<<"masukan prosentase UAS :"<<endl;
    cin>>uas;
    cout<<"masukan prosentase TUBES :"<<endl;
    cin>>tubes;

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
    cout<<"masukan standar minimum A:"<<endl;
    cin>>a;
    cout<<"masukan standar minimum B:"<<endl;
    cin>>b;
    cout<<"masukan standar minimum C:"<<endl;
    cin>>c;
    cout<<"masukan standar minimum D:"<<endl;
    cin>>d;

    main_menu();
    // YOUR CODE ENDS HERE
    //=================================================
}


void hitung_index(double uts, double uas, double tubes)
{
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    //=================================================
    // YOUR CODE STARTS HERE

    total=(uts/100*nuts)+(uas/100*nuas)+(tubes/100*ntubes);
    cout<<total<<endl;
    if (total>=a)
    {
        cout<<"index : A";
    }
    else if (total>=b)
    {
        cout<<"index : B";
    }
    else if (total>=c)
    {
        cout<<"index : C";
    }
    else if (total>=d)
    {
        cout<<"index : D";
    }
    else
    {
        cout<<"index : E";
    }
    cout<<endl;
    // YOUR CODE ENDS HERE
    //=================================================
    //return index;
}


void input_nilai()
{
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    //=================================================
    // YOUR CODE STARTS HERE
cout<<"masukan nilai UTS:"<<endl;
cin>>nuts;
cout<<"masukan nilai UAS:"<<endl;
cin>>nuas;
cout<<"masukan nilai TUBES:"<<endl;
cin>>ntubes;

hitung_index(uts,uas,tubes);
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
    cout<<"RANI SARI MURTI"<<endl;
    cout<<"1301160544"<<endl;

    // YOUR CODE ENDS HERE
    //=================================================
}
