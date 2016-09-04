/**
    NAMA  : M.Luthfi Aulia S
    NIM   : 1301154328
    KELAS : IF 39-06
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/

int minA,minB,minC,minD,minE;
int uts,uas,tubes,prop_uts,prop_uas,prop_tubes;


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
        cout <<"SELAMAT DATANG,SILAHKAN PILIH MENU DIBAWAH INI: "<<endl;
        cout <<"1. SET STANDAR INDEKS NILAI"<<endl;
         cout <<"2. SET PROPORSI NILAI"<<endl;
         cout <<"3. INPUT NILAI"<<endl ;
         cout <<"4. KELUAR"<<endl;


         cout<<"Pilihan: ";
        cin >> pilihan;
        switch(pilihan)
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


    thank_you();
}
}


void set_proporsi_nilai() {
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    int UTS,UAS,Tubes;
    cout<<"Masukkan prosentase (dalam%)"<<endl;
    cout<<"Masukkan prosentase Nilai UTS    : "<<endl;
    cin>>UTS;
    cout<<"Masukkan prosentase Nilai UAS    : "<<endl;
    cin>>UAS;
    cout<<"Masukkan prosentase Nilai Tubes  : "<<endl;
    cin>>Tubes;

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
         cout<<"Masukkan standar nilai minimum A: ";
         cin>> minA;
         cout<<"Masukkan standar nilai minimum B: ";
         cin>> minB;
         cout<<"Masukkan standar nilai minimum C: ";
         cin>> minC;
         cout<<"Masukkan standar nilai minimum D: ";
         cin>> minD;
        cout<<"Masukkan standar nilai minimum E: ";
         cin>> minE;


     main_menu();
    //=================================================
}


char hitung_index(double uts, double uas, double tubes){
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    int total_nilai;
    //=================================================
         total_nilai = (uts*prop_uts/100 + uas*prop_uas/100 + tubes*prop_tubes/100) ;

         if(total_nilai>=minA){
           index = 'A';
        }else if(total_nilai>=minB){
             index = 'B';
         }else if(total_nilai>=minC){
             index = 'C';
        }else if(total_nilai>=minD){
             index = 'D';
         }
         else{
             index = 'E';
        }
         cout<<"Indeks Nilai Anda "<<index<<endl;
         main();


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
        cout<<"Masukkan Nilai UTS: ";
         cin>>uts;
         cout<<"Masukkan Nilai UAS: ";
         cin>>uas;
        cout<<"Masukkan Nilai Tubes: ";
         cin>>tubes;

         hitung_index(uts,uas,tubes);
    //=================================================
}

void thank_you(){
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    //=================================================
   cout <<"____Teima kasih telah menggunakan program ini____"<<endl;
                cout <<"M.Luthfi Aulia S"<<endl;


    // YOUR CODE ENDS HERE
    //=================================================
}
