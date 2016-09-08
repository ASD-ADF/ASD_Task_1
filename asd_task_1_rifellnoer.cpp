/**
    NAMA  : RIFELL NOERFIANSYAH
    NIM   : 1301150085
    KELAS : IF-39-01
**/


#include <iostream>

using namespace std;

int prouts = 0,prouas = 0,protubes = 0,A =0,B =0,C =0,D = 0,E =0;
double hasil = 0;

void menu_awal ();
void standar_nilai();
void proporsi_nilai();
char hitung_index(double uts, double uas, double tubes);
void input_nilai();
void trims();

int main()
{
    menu_awal();
    return 0;
}

void menu_awal()
{

    int pilihan;
    do
    {
        cout << "Daftar Menu : " << endl;
        cout << "1. Set Standar Index Nilai" << endl;
        cout << "2. Set Proporsi Nilai" << endl;
        cout << "3. Input Nilai" << endl;
        cout << "4. Keluar " << endl << endl;
        cout << "Masukkan Pilihan = ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1 :
            standar_nilai();
            break;
        case 2 :
            proporsi_nilai();
            break;
        case 3 :
            input_nilai();
            break;
        }
    }
    while (pilihan !=4);
    trims();
}


void proporsi_nilai()
{
    do
    {
        cout << "masukan persentase UTS = ";
        cin >> prouts;
        cout << "masukan persentase UAS = ";
        cin >> prouas;
        cout << "masukan persentase TUBES = ";
        cin >> protubes;
        if (prouts + prouas + protubes != 100)
        {
            cout << "Persentase yang dimasukan harus berjumlah 100, tolong input ulang"<< endl<< endl;
        }
    }
    while (prouts + prouas + protubes != 100);
}

void standar_nilai()
{
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

        if ((A<=B)||(B<=C)||(C<=D)||(D<=E))
        {
            cout << "indeks yang anda masukan salah, silahkan input ulang";
        }
        cout <<endl;
    }
    while ((A<=B)||(B<=C)||(C<=D)||(D<=E));
}

char hitung_index(double uts, double uas, double tubes)
{
    char index;
    cout << "nilai indeks anda = ";
    hasil = (uts*prouts/100)+(uas*prouas/100)+(tubes*protubes/100);
    if (hasil >= A)
    {
        cout <<"A";
    }
    else if (hasil >= B)
    {
        cout << "B";
    }
    else if (hasil >= C)
    {
        cout << "C";
    }
    else if (hasil >= D)
    {
        cout << "D";
    }
    else
    {
        cout << "E";
    }
    cout<< endl<<endl;
    return index;
}


void input_nilai()
{
    double uas, uts, tubes;
    cout<< "input nilai UTS = ";
    cin >> uts;
    cout<< "input nilai UAS = ";
    cin >> uas;
    cout<< "input nilai TUBES = ";
    cin >> tubes;
    hitung_index(uts,uas,tubes);
}

void trims ()
{
    cout << " Terima Kasih"<<endl;
    cout << "   RIFELL NOERFIANSYAH  " << endl;
    cout << "  1301150085 ";
}
