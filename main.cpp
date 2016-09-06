/**
    NAMA    : ISABELLA VICHITA KACARIBU
    NIM     : 1301154637
    KELAS   : IF 39-06
    **/

#include <iostream>
//#include <windows.h>
#include <stdlib.h>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
//YOUR CODE STARTS HERE

int A, B, C, D;
int p_UTS, p_TUBES, p_UAS, P_UTS, P_TUBES, P_UAS;

// YOUR CODE ENDS HERE
//=================================================

void main_menu(){


    int Pilih;
    //=================================================
    // YOUR CODE STARTS HERE
        cout<<"Daftar Menu"<<endl;
        cout<<"1. Set standar index nilai"<<endl;
        cout<<"2. Set proporsi nilai"<<endl;
        cout<<"3. Input nilai"<<endl;
        cout<<"4. Keluar"<<endl;
        cout<<"Masukkan Daftar Pilihan Anda: ";
        cin>>Pilih;

        if (Pilih == 1)
           set_standar();

        else if (Pilih == 2) {
            set_proporsi_nilai();
        }
        else if (Pilih == 3) {
            input_nilai();
        }
        else if (Pilih == 4) {
            exit(0);
        };

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
    cout<<"input prosentase dalam persen"<<endl;

    cout<<"masukkan prosentase UTS: ";
    cin>>p_UTS;

    cout<<"masukkan prosentase TUBES: ";
    cin>>p_TUBES;

    cout<<"masukkan prosentase UAS: ";
    cin>>p_UAS;

    P_TOTAL = p_UTS + p_TUBES + p_UAS;
        if (P_TOTAL!=100){

            cout<<"P_TOTAL != 100, silahkan ulangi lagi\n";

            cout<<"masukkan prosentase UTS: ";
            cin>>p_UTS;

            cout<<"masukkan prosentase TUBES: ";
            cin>>p_TUBES;

            cout<<"masukkan prosentase UAS: ";
            cin>>p_UAS;
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
    cout<<"Masukkan Nilai Terendah A: ";
    cin>>A;
    cout<<"Masukkan Nilai Terendah B: ";
    cin>>B;
    cout<<"Masukkan Nilai Terendah C: ";
    cin>>C;
    cout<<"Masukkan Nilai Terendah D: ";
    cin>>D;

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
    //=================================================
    // YOUR CODE STARTS HERE
    total_nilai = (uts*p_UTS/100 + uas*p_TUBES/100 + tubes*p_UAS/100) ;
 +
 +         if(total_nilai>=A){
 +           index = 'A';
 +        }else if(total_nilai>=B){
 +             index = 'B';
 +         }else if(total_nilai>=C){
 +             index = 'C';
 +        }else if(total_nilai>=D){
 +             index = 'D';
 +         }
 +         else{
 +             index = 'E';
 +        }
 +         cout<<"Indeks Nilai Anda Sekarang Adalah: "<<index<<endl;
 +         main();

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

    cout<<"Masukkan Nilai UTS: ";
    cin>>uts;
    cout<<"Masukkan Nilai UAS: ";
    cin>>uas;
    cout<<"Masukkan Nilai Tubes: ";
    cin>>tubes;

    hitung_index(uts,uas,tubes);
    main_menu();
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
    cout<<"Terima Kasih Atas Kunjungan Anda^^"<<endl;
    cout<<"Isabella Vichita Kacaribu"<<endl;
    cout<<"1301154637"<<endl;

    // YOUR CODE ENDS HERE
    //=================================================
}
