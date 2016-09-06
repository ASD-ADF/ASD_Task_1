/**
    NAMA    : ARLI MUTIARA GUSRIYANTI
    NIM     : 1301154538
    KELAS   : IF-3-06
    **/

#include <iostream>


using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/

int p_uts, p_uas, p_tubes, uts, uas, tubes;
int standar_A, standar_B, standar_C, standar_D, standar_E;


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


    int choice;
        cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout <<"HAI GUYS, PILIH MENU :"     <<endl;
        cout <<"1. Set Standar Indeks Nilai"<<endl;
        cout <<"2. Set Proporsi Nilai"      <<endl;
        cout <<"3. Input Nilai"             <<endl ;
        cout <<"4. Keluar"                  <<endl;
        cout <<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";



        cout<<"Choice: ";
        cin >> choice;
        switch(choice)
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
    int UTS,UAS,TUBES;
    cout<<"Input nilai UTS Anda dengan presentase persen: "<<endl;
    cin>>UTS;
    cout<<"Input nilai UAS Anda dengan presentase persen: "<<endl;
    cin>>UAS;
    cout<<"Input nilai TUBES Anda dengan presentase persen: "<<endl;
    cin>>TUBES;

    // YOUR CODE ENDS HERE
    //=================================================
}



void set_standar(){
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan33333 mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    //=================================================


         cout<<"Masukkan nilai terendah untuk indeks A : ";
         cin>> standar_A;
         cout<<"Masukkan nilai terendah untuk indeks B : ";
         cin>> standar_B;
         cout<<"Masukkan nilai terendah untuk indeks C : ";
         cin>> standar_C;
         cout<<"Masukkan nilai terendah untuk indeks D : ";
         cin>> standar_D;
         cout<<"Masukkan nilai terendah untuk indeks E : ";
         cin>> standar_E;


     main_menu();
    //=================================================
}


char hitung_index(double UTS, double UAS, double TUBES){
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    int total_nilai;
    //=================================================


         total_nilai = (UTS*p_uts/100 + UAS*p_uas/100 + TUBES*p_tubes/100) ;

         if(total_nilai>=standar_A){
           index = 'A';
            }else if(total_nilai>=standar_B){
             index = 'B';
            }else if(total_nilai>=standar_C){
             index = 'C';
            }else if(total_nilai>=standar_D){
             index = 'D';
            }

            else{
             index = 'E';
        }
         cout<<"Anda mendapat score   :"<<index<<endl;
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


        cout<<"Input score UTS      :";
        cin>>uts;

        cout<<"Input score UAS      :";
        cin>>uas;

        cout<<"Input score TUBES     :";
        cin>>tubes;
         hitung_index(uts, uas, tubes);

    //=================================================
}

void thank_you(){
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    //=================================================
   cout <<"THANKS FOR USE THIS PROGRAM"<<endl;
   cout <<"SEE YOU AGAIN"<<endl;
   cout <<"&&"<<endl;
   cout <<"ARLI"<<endl;


    // YOUR CODE ENDS HERE
    //=================================================
}
