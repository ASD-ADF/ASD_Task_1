/**
    NAMA  : Hilmi Triandi Nurachmad
    NIM   : 1301164286
    KELAS : IF 40-02
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
int pilihan, sA, sB, sC, sD, perUTS, perUAS, perTubes;
long double total;
string index;
double suts,suas,stubes;


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
    thank_you();
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
        do{
        cout<<"Daftar Menu  : \n";
        cout<<"1. Set Standar Index Nilai \n";
        cout<<"2. Set Proporsi Nilai \n";
        cout<<"3. Input Nilai \n";
        cout<<"4. Keluar \n";
        cout<<"Masukan Pilihan Anda   : \n";
        cin>>pilihan;
        cout<<pilihan;
        if (pilihan == 1)
        {
            set_standar();
        }
        else if (pilihan == 2)
        {
            set_proporsi_nilai();
        }
        else if (pilihan == 3)
        {
            input_nilai();
            hitung_index(suts,suas,stubes);
        }
        }while(pilihan!=4);
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
    cout<<"Input Prosentase Dalam Persen \n"<<"\n";
    cout<<"Masukan Prosentase UTS : ";
    cin>>perUTS;
    cout<<"Masukan Prosentase UAS : ";
    cin>>perUAS;
    cout<<"Masukan Prosentase TUBES : ";
    cin>>perTubes;
    if (perUTS+perUAS+perTubes!=100)
    {
        cout<<"Prosentase Yang Anda Masukan !=100, Silahkan ULANGI LAGI \n";
        set_proporsi_nilai();
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
    cout<<"Masukan Standar Minimum A : ";
    cin>>sA;
    cout<<"Masukan Standar Minimum B : ";
    cin>>sB;
    cout<<"Masukan Standar Minimum C : ";
    cin>>sC;
    cout<<"Masukan Standar Minimum D : ";
    cin>>sD;

    if (sB,sC,sD >= sA)
    {
        cout<<"Anda Salah Memasukan Standar Nilai\n";
        set_standar();
    }
    else if (sC,sD >= sB)
    {
        cout<<"Anda Salah Memasukan Standar Nilai\n";
        set_standar();
    }
    if (sD >= sC)
    {
        cout<<"Anda Salah Memasukan Standar Nilai\n";
        set_standar();
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

    string index;
    //=================================================
    // YOUR CODE STARTS HERE
    total= ((suts*perUTS)/100)+((suas*perUAS)/100)+((stubes*perTubes)/100);
    cout<<"Nilai total anda adalah "<<total<<endl;

    if (total>=sA)
    {
        index ="A";
        cout<<"Index Total Nilai Anda Adalah    :"<<index<<"\n:";
    }
    else if (total>=sB)
    {
        index ="B";
        cout<<"Index Total Nilai Anda Adalah    :"<<index<<"\n:";
    }
    else if (total>=sC)
    {
        index ="C";
        cout<<"Index Total Nilai Anda Adalah    :"<<index<<"\n:";
    }
    else if (total>=sD)
    {
        index ="D";
        cout<<"Index Total Nilai Anda Adalah    :"<<index<<"\n:";
    }
    else
    {
        index ="E";
        cout<<"Index Total Nilai Anda Adalah    :"<<index<<"\n:";
    }

    // YOUR CODE ENDS HERE
    //=================================================

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
    cout<<"Masukan Nilai UTS    : ";
    cin>>suts;
    cout<<"Masukan Nilai UAS    : ";
    cin>>suas;
    cout<<"Masukan Nilai TUBES    : ";
    cin>>stubes;

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
    cout<<"Terima Kasih Telah Menggunakan Program Kami";

    // YOUR CODE ENDS HERE
    //=================================================
}
