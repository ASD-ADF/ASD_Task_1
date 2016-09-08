/**
    NAMA  : Muhammad Rezky Alpin Gumay
    NIM   : 1301154365
    KELAS : IF 39-01
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE

double x,y,z;
double nilai[4];

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

    int nomor;
    //=================================================
    // YOUR CODE STARTS HERE
    while (nomor != 4)
    {
        cout<<"PROGRAM NILAI AKHIR"<<endl;
        cout<< "\n1. Set standar nilai \n\n2. set proporsi nilai\n\n3. input nilai\n\n4. keluar\n"<< endl;
        cout<<"Masukan Pilihan : ";
        cin>> nomor;
        switch (nomor)
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
    double jum;
    //=================================================
    // YOUR CODE STARTS HERE

    do
    {
        cout<< "\nMasukan Prosentase Nilai Akhir "<< endl;
        cout<<"masukan prosentase nilai UTS : ";
        cin>> x ;
        cout<<"masukan prosentase nilai UAS : ";
        cin>> y ;
        cout<<"masukan prosentase nilai TUBES : ";
        cin>> z ;
        jum = x+y+z;
        if (jum != 100)
            cout<< "inputan anda harus bernilai 100 silahkan ulangi lagi"<< endl;
    }
    while(jum!=100);
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
    nilai[4]=0;
    cout<<"Masukkan standar nilai minimum A: ";
    cin>> nilai[0];
    cout<<"Masukkan standar nilai minimum B: ";
    cin>> nilai[1];
    cout<<"Masukkan standar nilai minimum C: ";
    cin>> nilai[2];
    cout<<"Masukkan standar nilai minimum D: ";
    cin>> nilai[3];
    if (nilai[0]<nilai[1] )
    {
        cout<<"Nilai yang dimasukan salah \n";
        set_standar();
    }
    else if (nilai[1]<nilai[2])
    {
        cout<<"Nilai yang dimasukan salah \n";
        set_standar();
    }
    else if (nilai[2]<nilai[3])
    {
        cout<<"Nilai yang dimasukan salah \n";
        set_standar();
    }
    else if (nilai[0]>nilai[1] && nilai[1]>nilai[2] && nilai[2]>nilai[3] )
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

    char index;
    double tot;
    //=================================================
    // YOUR CODE STARTS HERE
    tot = (uts*(x/100) + uas*(y/100) + tubes*(z/100));
    if (tot < nilai[3]) index = 'E';
    if (tot >= nilai[3] && tot < nilai[2]) index = 'D';
    if (tot >= nilai[2] && tot < nilai[1]) index = 'C';
    if (tot >= nilai[1] && tot < nilai[0]) index = 'B';
    if (tot >= nilai[0]) index = 'A';
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
    char index ;
    double uas, uts, tubes;
    //=================================================
    // YOUR CODE STARTS HERE
    cout <<"Masukan Nilai"<< endl;
    cout <<"Nilai UTS : ";
    cin >> uts;
    cout <<"Nilai UAS : ";
    cin >> uas;
    cout <<"Nilai TUBES : ";
    cin >> tubes;
    index = hitung_index(uts,uas,tubes);
    cout << "\n Indeks Nilai akhir anda adalah : "<< index<<endl;

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
    cout<<"\nTerima Kasih "<< endl;
    cout<<"\nNama : Muhammad Rezky Alpin Gumay\n\nNIM : 1301154155"<<endl;


    // YOUR CODE ENDS HERE
    //=================================================
}
