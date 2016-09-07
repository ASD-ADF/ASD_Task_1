/**
    NAMA  : Raden Rizky Falih P.
    NIM   : 1301154211
    KELAS : IF-39-01
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
char pilihan,index;
double hasil,hasilakhir;
double uts,uas,tubes,nilai_uts,nilai_uas,nilai_tubes;

double nilai [4];
//=================================================


void main_menu();
void set_standar_nilai();
void set_persentase_nilai();
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
    cout << "============================"<<endl;
    cout << "Daftar Menu : "<<endl;
    cout << "1. Set Standar Index Nilai"<<endl;
    cout << "2. Set Persentase Nilai"<<endl;
    cout << "3. Input Nilai"<<endl;
    cout << "4. Keluar"<<endl;
    cout << "============================"<<endl;
    cout << "Pilih : ";
    cin>>pilihan;
    cout<< "\n";
    switch (pilihan)
    {
    case 1:
        set_standar_nilai();
        break;
    case 2 :
        set_persentase_nilai();
        break;
    case 3 :
        input_nilai();
        break;
    case 4 :
        thank_you();
        break;

    }
    //=================================================
    //thank_you();
}


void set_persentase_nilai()
{
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    //=================================================
    do
    {
        cout << " Inputkan persentase Nilai Akhir "<< endl;
        cout << " Inputkan persentase nilai UTS : ";
        cin >> uts ;
        cout << " Inputkan persentase nilai UAS : ";
        cin >> uas ;
        cout << " Inputkan persentase nilai TUBES : ";
        cin >> tubes ;
        cout << "\n";
        hasil = uts+uas+tubes;
        if (hasil!= 100)
            cout<< "Ulangi Inputan Anda"<< endl;
    }
    while(hasil!=100);
    {
        main_menu();
    }
    //=================================================
}

void set_standar_nilai()
{
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    //=================================================
nilai[4]=0;
    cout<<"Masukkan nilai minimum A: ";
    cin>>nilai[0];
    cout<<"Masukkan nilai minimum B: ";
    cin>>nilai[1];
    cout<<"Masukkan nilai minimum C: ";
    cin>>nilai[2];
    cout<<"Masukkan nilai minimum D: ";
    cin>>nilai[3];
    cout<<"\n ";
    if (nilai[0]<nilai[1])
    {
        cout<<"nilai yang dimasukkan salah"<<endl;
        set_standar_nilai();
    }//int i,n;
    else if(nilai[1]<nilai[2])
    {
        cout<<"nilai yang dimasukkan salah"<<endl;
        set_standar_nilai();
    }
    else if(nilai[2]<nilai[3])
    {
        cout<<"nilai yang dimasukkan salah"<<endl;
        set_standar_nilai();
    }
    else if (nilai[0]>nilai[1] && nilai[1]>nilai[2] && nilai[2]>nilai[3] )
    {
        main_menu();
    }
}
    //=================================================



char hitung_index(double uts, double uas, double tubes)
{
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    double hasilakhir;
    //=================================================
    hasilakhir = (uts*(nilai_uts/100) + uas*(nilai_uas/100) + tubes*(nilai_tubes/100));
    if (hasilakhir < nilai[3]) index = 'E';
    if (hasilakhir > nilai[3] && hasilakhir <= nilai[2]) index = 'D';
    if (hasilakhir > nilai[2] && hasilakhir <= nilai[1]) index = 'C';
    if (hasilakhir > nilai[1] && hasilakhir <= nilai[0]) index = 'B';
    if (hasilakhir > nilai[0]) index = 'A';
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
    cout << " Inputkan Nilai" << endl;
    cout << " Nilai UTS : ";
    cin >> nilai_uts;
    cout << " Nilai UAS : ";
    cin >> nilai_uas;
    cout << " Nilai TUBES : ";
    cin >> nilai_tubes;
    index = hitung_index(nilai_uts,nilai_uas,nilai_tubes);
    cout << "\n Indeks Nilai akhir anda adalah : "<< index <<endl;
    cout << "\n";
    main_menu();
    //=================================================
}

void thank_you()
{
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    //=================================================
    cout << "Thank you" << endl;
    cout << "Raden Rizky Falih P." << endl;
    cout << "1301154211" << endl;
    //=================================================
}
