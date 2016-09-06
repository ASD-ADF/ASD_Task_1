/**
    NAMA  : HUTOMO AJI PRASETYO
    NIM   : 1301154384
    KELAS : IF 39-06
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
int A,B,C,D,E,total,uts_p,uas_p,tubes_p;

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

    int pil;
    //=================================================
    // YOUR CODE STARTS HERE
    cout <<"------Menu------"<<endl;
    cout <<"1. Set standar index nilai"<<endl;
    cout <<"2. Set proporsi nilai"<<endl;
    cout <<"3. Input nilai"<<endl;
    cout <<"4. Keluar"<<endl;
    cout <<"Masukkan Pilihan menu       : ";
    cin >> pil;

    switch(pil)
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
    default:
        cout <<"Maaf Pilihan yang anda masukkan tidak ada harap pilih kembali"<<endl;
        break;
    }
    // YOUR CODE ENDS HERE
    //=================================================
//   thank_you();    //
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
    cout<<"Masukkan Prosentase (dalam %)"<<endl;
    cout<<"Masukkan Prosentase Nilai UTS    : ";
    cin>>uts_p;
    cout<<"Masukkan Prosentase Nilai UAS    : ";
    cin>>uas_p;
    cout<<"Masukkan Prosentase Nilai Tugas  : ";
    cin>>tubes_p;

    if (uts_p+uas_p+tubes_p != 100)
    {
        set_proporsi_nilai();
    }
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
    cout <<"Masukkan set standar indeks A   : ";
    cin >> A;
    cout <<"Masukkan set standar indeks B   : ";
    cin >> B;
    cout <<"Masukkan set standar indeks C   : ";
    cin >> C;
    cout <<"Masukkan set standar indeks D   : ";
    cin >> D;
    cout <<"Masukkan set standar indeks E   : ";
    cin >> E;
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
total   =    ((uts_p/100)*uts + (uas_p/100)*uas + (tubes_p/100)*tubes);

    if (total >= A)
    {
        index = 'A';
    }
    else if (total >= B)
    {
        index = 'B';
    }
    else if (total >= C)
    {
        index = 'C';
    }
    else if (total >= D)
    {
        index = 'D';
    }
    else
    {
        index = 'E';
    }
    cout <<"Indeks anda adalah "<<index<<endl;
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
    cout <<"Masukkan Nilai UTS          : ";
    cin >> uts;
    cout <<"Masukkan Nilai UAS          : ";
    cin >> uas;
    cout <<"Masukkan Nilai Tubes        : ";
    cin >> tubes;

    hitung_index(uts,uas,tubes);
    thank_you();
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
    cout <<"-----Terima Kasih telah menggunakan program ini-----"<<endl;
    cout <<"                 Hutomo Aji Prasetyo                "<<endl;
    cout <<"                      1301154384                    "<<endl;
    // YOUR CODE ENDS HERE
    //=================================================
}
