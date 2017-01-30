/**
    NAMA  : Talitha Farah Kurniawati
    NIM   : 1301164262
    KELAS : IF-40-02
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
double uas,uts,tubes,nuts,nuas,ntubes,total,jumlah;
int a,b,c,d;


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
    int pilihan;

    cout<<"daftar menu:"<<endl;
    cout<<" 1. set standar index nilai"<<endl;
    cout<<" 2. set proporsi nilai"<<endl;
    cout<<" 3. input nilai"<<endl;
    cout<<" 4. keluar"<<endl;
    cout<< "Masukkan pilihan Anda : ";
    cin>>pilihan;

    if (pilihan==1)
    {
        set_standar();
    }
    if (pilihan==2)
    {
        set_proporsi_nilai();
    }
    if (pilihan==3)
    {
        input_nilai();
    }
    thank_you();
}


void set_proporsi_nilai()
{
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    cout<<"Masukkan presentase dalam persen"<<endl;
    cout<<"Presentase UTS : ";
    cin>>uts;
    cout<<"Presentase UAS : ";
    cin>>uas;
    cout<<"Presentase Tubes : ";
    cin>>tubes;
    jumlah = uts+uas+tubes;
    if (jumlah<100)
    {
        cout<<"Jumlah kurang dari 100"<<endl;
        return set_proporsi_nilai();
    }
    main_menu();
}

void set_standar()
{
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    cout<<"Masukkan nilai minimum A : ";
    cin>>a;
    cout<<"Masukkan ni lai minimum B : ";
    cin>>b;
    cout<<"Masukkan nilai minimum C : ";
    cin>>c;
    cout<<"Masukkan nilai minimum D : ";
    cin>>d;

    main_menu();
}


char hitung_index(double uts, double uas, double tubes)
{
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    total = uts*nuts/100+uas*nuas/100+tubes*ntubes/100;
    if (total >= a)
    {
        index = 'A';
    }
    else if (total >= b)
    {
        index = 'B';
    }
    else if (total >= c)
    {
        index = 'C';
    }
    else if (total >= d)
    {
        index = 'D';
    }
    else
    {
        index = 'E';
    }
    return index;
}


void input_nilai()
{
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    double uas, uts, tubes;
    cout<<"Masukkan Nilai UTS : ";
    cin>>nuts;
    cout<<"Masukkan Nilai UAS : ";
    cin>>nuas;
    cout<<"Masukkan Nilai Tubes : ";
    cin>>ntubes;
    cout<<"Indeks Nilai Anda adalah "<<hitung_index(nuts, nuas, ntubes)<<endl;
    main_menu();
}

void thank_you()
{
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    cout<<"T E R I M A   K A S I H"<<endl;
    cout<<"Talitha Farah Kurniawati"<<endl;
    cout<<"1301164262"<<endl;
}
