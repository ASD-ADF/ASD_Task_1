/**
    NAMA  : Muhammad Yusuf Faisal
    NIM   : 1301154174
    KELAS : IF-39-06
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
int pro_UTS,pro_UAS, pro_TUBES;
int idks_A,idks_B,idks_C,idks_D;

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
    do {
        cout << "1. set standar index nilai" << endl;
        cout << "2. set proporsi nilai " << endl;
        cout << "3. input nilai" << endl;
        cout << "4. keluar" << endl;
        cout << endl;
        cout << "Inputkan nilai : ";
        cin >> pilihan;

        if (pilihan==1){
             set_standar();
        } else if (pilihan==2){
            set_proporsi_nilai();
        } else if (pilihan==3){
            input_nilai();
        };
    } while(pilihan!=4);
    // YOUR CODE ENDS HERE
    //=================================================
    thank_you();
}


void set_proporsi_nilai(){
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    do {
        cout << "Input prosentase dalam persen" << endl;
        cout << "masukan prosentase nilai UTS : ";
        cin >> pro_UTS;
        cout << "masukan prosentase nilai UAS : ";
        cin >> pro_UAS;
        cout << "masukan prosentase nilai TUBES : ";
        cin >> pro_TUBES;
        if (pro_UAS+pro_UTS+pro_TUBES!=100) {
            cout << "Total input prosentase != 100, silahkan ulangi"<<endl;
        }
    }while (pro_UAS+pro_UTS+pro_TUBES!=100);
    cout << endl;
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
    bool catcher;
    do {
        catcher = false;
        cout << "masukan standar minimum A : ";
        cin  >> idks_A;
        cout << "masukan standar minimum B : ";
        cin  >> idks_B;
        if (idks_B>=idks_A) {
            catcher = true;
        };
        cout << "masukan standar minimum C : ";
        cin  >> idks_C;
        if (idks_C>=idks_B) {
            catcher = true;
        };
        cout << "masukan standar minimum D : ";
        cin  >> idks_D;
        if (idks_D>=idks_C) {
            catcher = true;
        };

        if (catcher) {
            cout << "Input standar salah, silahkan ulangi!" << endl;
        };
    } while(catcher);
    cout << endl;
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
    //=================================================
    // YOUR CODE STARTS HERE
    double total;
    total = (uts*pro_UTS/100)+(uas*pro_UAS/100)+(tubes*pro_TUBES/100);
    if ((total<=100) && (total>=idks_A)) {
        index = 'A';
    } else if ((total<idks_A) && (total>=idks_B)) {
        index = 'B';
    } else if ((total<idks_B) && (total>=idks_C)) {
        index = 'C';
    } else if ((total<idks_C) && (total>=idks_D)) {
        index = 'D';
    } else if ((total<idks_D) && (total>=0)) {
        index = 'E';
    };
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
    cout << "masukan nilai UTS : ";
    cin >> uts;
    cout << "masukan nilai UAS : " ;
    cin >> uas;
    cout << "masukan nilai TUBES : ";
    cin >> tubes;
    cout << "index nilai anda adalah " << hitung_index(uts,uas,tubes);
    cout << endl;

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
    cout << endl;
    cout << "+--------------------------------------------------+" << endl;
    cout << "|          NIM  : 1301154174                       |" << endl;
    cout << "|          Nama : Muhammad Yusuf Faisal            |" << endl;
    cout << "|                                                  |" << endl;
    cout << "+--Thanks for using my program, Have a Nice Day!--+" << endl;
    // YOUR CODE ENDS HERE
    //=================================================
}
