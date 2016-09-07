/**
    NAMA  : Ridhwan Alifudin
    NIM   : 1301150057
    KELAS : IF 39 01
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
int PresUts = 0;
int PresUas = 0;
int PresTubes = 0;
int total = 0;
int A = 0;
int B = 0;
int C = 0;
int D = 0;
int E = 0;
double hasil = 0;


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

    int pilihan=0;
    do
    {
        cout << "  Daftar Menu  " << endl;
        cout << " 1. Set standar index nilai" << endl;
        cout << " 2. Set proporsi nilai " <<endl;
        cout << " 3. input nilai " << endl;
        cout << " 4. Keluar" << endl;
        cout << " Pilihan : ";
        cin >>pilihan;
        switch (pilihan)
        {
        case 1 :
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
        thank_you();
    }
    while (pilihan=4);
}
void set_proporsi_nilai()
{
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/

    do
    {
        cout << "Presentase UTS : ";
        cin >> PresUts;
        cout << "Presentsae UAS : ";
        cin >> PresUas;
        cout << "Presentase Tubes : ";
        cin >> PresTubes;
        total = PresUts+PresUas+PresTubes;
        if (total != 100)
            cout << " Angka yang anda masukkan tidak samadengan 100 " << endl;
    }
    while (total!=100);
}



void set_standar()
{
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    do
    {
        cout << "Index A : ";
        cin >> A;
        cout << "Index B : ";
        cin >> B;
        cout << "Index C : ";
        cin >> C;
        cout << "Index D : ";
        cin >> D;

        if ((A<B)||(A<C)||(A<D)||(A<E)||(B<C)||(B<D)||(B<E)||(C<D)||(C<E)||(D<E))
            cout << "Index tidak berurutan, silahkan input kembali" << endl;
        else
            cout << "Sukses" << endl;

    }
    while ((A<B)||(A<C)||(A<D)||(A<E)||(B<C)||(B<D)||(B<E)||(C<D)||(C<E)||(D<E));
}

void hitung_index(double uts, double uas, double tubes)
{
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    cout << "Indeks anda : " ;
    hasil = (uts*PresUts/100)+(uas*PresUas/100)+(PresTubes*tubes/100);
    if (hasil >= A)
        cout << "A";
    else if (hasil >= B)
        cout << "B";
    else if (hasil >= C)
        cout << "C";
    else if (hasil >= D)
        cout << "D";
    else
        cout << "E";

    cout << endl;

}


void input_nilai()
{
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    double uas, uts, tubes;

    cout << "Nilai UTS   : ";
    cin >> uts;
    cout << "Nilai UAS   : ";
    cin >> uas;
    cout << "Nilai Tubes : ";
    cin >> tubes;
    hitung_index(uts,uas,tubes);
}

void thank_you()
{
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    cout<< "Terimakasih " << endl;
}
