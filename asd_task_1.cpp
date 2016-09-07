/**
    NAMA  : Iqbal Fauzi
    NIM   : 1301154351
    KELAS : IF-39-01
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
int pUTS = 0;
int pUAS = 0;
int pTUBES = 0;
int A = 0;
int B = 0;
int C = 0;
int D = 0;
int E = 0;
double total = 0;
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
    //=================================================
    // YOUR CODE STARTS HERE
    do
    {
        cout << "Daftar Menu : " << endl;
        cout << "1. set standar index nilai" << endl;
        cout << "2. set proporsi nilai" << endl;
        cout << "3. input nilai" << endl;
        cout << "4. keluar " << endl << endl;
        cout << "pilihan = ";
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
                }
    }
    while (pilihan !=4);
    // YOUR CODE ENDS HERE
    //=================================================
    thank_you();
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
    do
    {
        cout << "masukan prosentase UTS = ";
        cin >> pUTS;
        cout << "masukan prosentase UAS = ";
        cin >> pUAS;
        cout << "masukan prosentase TUBES = ";
        cin >> pTUBES;
        if (100 != pUTS + pUAS + pTUBES)
        {
            cout << "Prosentase yang dimasukan harus berjumlah 100, tolong input ulang"<< endl<< endl;
        }
        else
        {
            cout << "terimakasih "<< endl<<endl;
        }
    }
    while (100 != pUTS + pUAS + pTUBES);
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
    do
    {


        cout << "masukan indeks minimal nilai A = ";
        cin >> A;
        cout << "masukan indeks minimal nilai B = ";
        cin >> B;
        cout << "masukan indeks minimal nilai C = ";
        cin >> C;
        cout << "masukan indeks minimal nilai D = ";
        cin >> D;

        if ((A<=B)||(A<=C)||(A<=D)||(A<=E)||(B<=C)||(B<=D)||(B<=E)||(C<=D)||(C<=E)||(D<=E))
        {
            cout << "indeks yang anda masukan salah, silahkan input ulang" << endl;
        }
        else
        {
            cout << "terima kasih "<< endl << endl;
        }
    }
    while ((A<=B)||(A<=C)||(A<=D)||(A<=E)||(B<=C)||(B<=D)||(B<=E)||(C<=D)||(C<=E)||(D<=E));
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
    cout << "nilai indeks anda = ";
    total = (uts*pUTS/100)+(uas*pUAS/100)+(tubes*pTUBES/100);
    if (total >= A)
    {
        cout <<"A";
    }
    else if (total >= B)
    {
        cout << "B";
    }
    else if (total >= C)
    {
        cout << "C";
    }
    else if (total >= D)
    {
        cout << "D";
    }
    else
    {
        cout << "E";
    }
    cout<< endl<<endl;

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
    cout<< "masukan nilai UTS = ";
    cin >> uts;
    cout<< "masukan nilai UAS = ";
    cin >> uas;
    cout<< "masukan nilai TUBES = ";
    cin >> tubes;
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
    cout << " Terima Kasih" << endl;
    cout << "     By     " << endl;
    cout << " IQBAL FAUZI" << endl;
    cout << " 1301154351";


    // YOUR CODE ENDS HERE
    //=================================================
}
