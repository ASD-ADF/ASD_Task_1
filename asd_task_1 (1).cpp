/**
    NAMA  : RIZKY RAMADIKA TRISAPUTRA
    NIM   : 1301154393
    KELAS : IF 39-01
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
char pilihan;
double jumlah,total;
int preUTS,preUAS,preTUBES;
int inp_nilai [4];

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

    int pilihan;
    cout << " ================================================= " << endl;
    cout << "Daftar Menu" << endl;
    cout << "1. Set Standar Index Nilai" << endl;
    cout << "2. Set Proporsi Nilai" << endl;
    cout << "3. Input Nilai" << endl;
    cout << "4. Keluar" << endl;
    cout << "Pilih menu : ";
    cin >> pilihan;
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
    cout << " ================================================= " << endl;
    //thank_you();
}


void set_proporsi_nilai()
{
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    cout << " ================================================= " << endl;
    // YOUR CODE STARTS HERE
    do
    {
        cout << " \n Inputkan Presentase Nilai Akhir "<< endl;
        cout << " Inputkan presentase nilai UTS : ";
        cin >> preUTS ;
        cout << " Inputkan presentase nilai UAS : ";
        cin >> preUAS ;
        cout << " Inputkan presentase nilai TUBES : ";
        cin >> preTUBES ;
        jumlah = preUTS+preUAS+preTUBES;
        if (jumlah != 100)
            cout<< "Ulangi Inputan Anda"<< endl;
    }
    while(jumlah!=100);
    // YOUR CODE ENDS HERE
    cout << " ================================================= " << endl;
    main_menu();
}

void set_standar()
{
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    cout << " ================================================= " << endl;
    // YOUR CODE STARTS HERE

    inp_nilai[4]=0;
    cout<<"Inputkan standar nilai minimum A: ";
    cin>> inp_nilai[0];
    cout<<"Inputkan standar nilai minimum B: ";
    cin>> inp_nilai[1];
    cout<<"Inputkan standar nilai minimum C: ";
    cin>> inp_nilai[2];
    cout<<"Inputkan standar nilai minimum D: ";
    cin>> inp_nilai[3];
    if (inp_nilai[0]<inp_nilai[1] )
    {
        cout<<"Nilai yang dimasukan salah \n";
        set_standar();
    }
    else if (inp_nilai[1]<inp_nilai[2])
    {
        cout<<"Nilai yang dimasukan salah \n";
        set_standar();
    }
    else if (inp_nilai[2]<inp_nilai[3])
    {
        cout<<"Nilai yang dimasukan salah \n";
        set_standar();
    }
    else if (inp_nilai[0]>inp_nilai[1] && inp_nilai[1]>inp_nilai[2] && inp_nilai[2]>inp_nilai[3] )
    {
        main_menu();
    }
    // YOUR CODE ENDS HERE
    cout << " ================================================= " << endl;
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
    total  = (uts*(preUTS/100) + uas*(preUAS/100) + tubes*(preTUBES/100));
    if (total < inp_nilai[3]);
    {
        index = 'E';
    }
    if (total >= inp_nilai[3] && total < inp_nilai[2]);
    {
        index = 'D';
    }
    if (total >= inp_nilai[2] && total < inp_nilai[1]);
    {
        index = 'C';
    }
    if (total >= inp_nilai[1] && total < inp_nilai[0]);
    {
        index = 'B';
    }
    if (total >= inp_nilai[0]);
    {
        index = 'A';
    }
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
    char index;
    //=================================================
    // YOUR CODE STARTS HERE
    cout << " Inputkan Nilai" << endl;
    cout << " Nilai UTS : ";
    cin >> uts;
    cout << " Nilai UAS : ";
    cin >> uas;
    cout << " Nilai TUBES : ";
    cin >> tubes;
    index = hitung_index(uts,uas,tubes);
    cout << "\n Indeks Nilai akhir anda adalah : "<< index <<endl;
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
    cout << "\n Terima Kasih " << endl;
    cout << "Program Nilai Akhir" << endl;
    cout << "Nama : Rizky Ramadika Trisaputra" << endl;
    cout << "NIM  : 1301154393" << endl;

    // YOUR CODE ENDS HERE
    //=================================================
}
