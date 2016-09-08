/**
    NAMA  : SALMA ASSYIFA
    NIM   : 1301154505
    KELAS : IF 39-01
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
double pstuts,pstuas,psttubes;
int a,b,c,d;

// YOUR CODE ENDS HERE
//=================================================

void main_menu();
void set_standar();
void set_proporsi_nilai();
char hitung_index(double uts, double uas, double tubes);
void input_nilai();
void thank_you();

int main() {
    main_menu();
    return 0;
}

void main_menu(){
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
    cout << "Daftar Menu: "<<endl;
    cout << "1. Set standar index nilai"<<endl;
    cout << "2. Set proporsi nilai"<<endl;
    cout << "3. Input nilai"<<endl;
    cout << "4. Keluar"<<endl;
    cout <<endl;
    cout <<"Masukkan pilihan: ";
    cin >>pilihan;
    cout <<endl;
    switch (pilihan)
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
    }


    // YOUR CODE ENDS HERE
    //=================================================[
}


void set_proporsi_nilai(){
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout << "Input Presentase dalam persen"<<endl;
    cout << "Masukkan nilai UTS: ";
    cin >> pstuts;
    cout << "Masukkan nilai UAS: ";
    cin >> pstuas;
    cout << "Masukkan presentase TUBES: ";
    cin >> psttubes;
    if ((pstuts+pstuas+psttubes) !=100)
    {
        cout << "Total input presentase: != 100 , silahkan masukkan niai lagi.";
        set_proporsi_nilai();
    }
    main_menu();
    // YOUR CODE ENDS HERE
    //=================================================
}

void set_standar(){
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout << "Masukkan standar minimum A: "; cin >>a;
    cout << "Masukkan standar minimum B: "; cin >>b;
    cout << "Masukkan standar minimum C: "; cin >>c;
    cout << "Masukkan standar minimum D: "; cin >>d;
    if (a<=b || b<=c ||c<=d)
    {
        cout << "Input standar minimum yang anda masukkan salah, silahkan ulangi.";
    }
    main_menu();
    // YOUR CODE ENDS HERE
    //=================================================
}


char hitung_index(double uts, double uas, double tubes){
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    double ntotal;
    //=================================================
    // YOUR CODE STARTS HERE
    ntotal = ((uts*(pstuts/100))+(uas*(pstuas/100))+(tubes*(psttubes/100)));
    if (ntotal>=a)
    {
        cout << "Ideks nilai anda adalah A";
    }
    else if (ntotal>=b && ntotal<a)
    {
        cout << "Ideks nilai anda adalah B";
    }
    else  if (ntotal>=c && ntotal<b)
    {
        cout << "Ideks nilai anda adalah C";
    }
    if (ntotal>=d && ntotal<c)
    {
        cout << "Ideks nilai anda adalah D";
    }
    if (ntotal<=d)
    {
        cout << "Ideks nilai anda adalah E";
    }
    cout <<endl;
    main_menu();

    // YOUR CODE ENDS HERE
    //=================================================
    return index;
}


void input_nilai(){
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    double uas, uts, tubes;
    //=================================================
    // YOUR CODE STARTS HERE
    cout << "Masukkan nilai UTS: ";
    cin >> uts;
    cout << "Masukkan nilai UAS: ";
    cin >> uas;
    cout << "Masukkan nilai TUBES: ";
    cin >> tubes;
    hitung_index(uas,uts,tubes);

    // YOUR CODE ENDS HERE
    //=================================================
}

void thank_you(){
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout << "TERIMAKASIH"<<endl;
    cout << "SALMA ASSYIFA"<<endl;
    cout << "1301154505"<<endl;
    
    // YOUR CODE ENDS HERE
    //=================================================
}
