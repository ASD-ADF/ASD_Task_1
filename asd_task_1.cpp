/**
    NAMA  : Ranggha Adytia
    NIM   : 1301164017
    KELAS : IF40-02
**/


#include <iostream>

using namespace std;


/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE


// YOUR CODE ENDS HERE
//=================================================
int pil,StndA,StndB,StndC,StndD,pUts,pUas,pTubes;
long double total;
string indeks;
double UTS,UAS,TUBES;

void main_menu();
void set_standar();
void set_proporsi_nilai();
char hitung_index();
void input_nilai();
void thank_you();

int main() {
    main_menu();
    thank_you();


    return 0;
}

void main_menu(){
    do{
        cout<<" 1. Set Standar Indeks Nilai \n";
        cout<<" 2. Set Standar Proporsi Nilai \n";
        cout<<" 3. Input Nilai \n";
        cout<<" 4. Exit \n";
        cout<<" Inputkan Pilihan Anda = ";
        cin>>pil;

        if (pil == 1){
            set_standar();
       }
       else
       if (pil == 2){
           set_proporsi_nilai();
       }
       else
       if (pil == 3){
          input_nilai();
          hitung_index();
       }

    }while (pil!=4);
}


void set_proporsi_nilai()
{
   cout<<"Inputkan Persentase Nilai Dalam persen \n" <<"\n";

   cout<<"Masukan Persentase UTS = ";
   cin>>pUts;
   cout<<"Masukan Persentase UAS = ";
   cin>>pUas;
   cout<<"Masukan Persentase Tubes = ";
   cin>>pTubes;

   if (pUts+pUas+pTubes!=100){
        cout<<"Persentase yang anda inputkan !=100, Silahkan coba lagi \n";
      set_proporsi_nilai();

   }

}

void set_standar()
{
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    //=================================================
    cout<<" Inputkan Standar Nilai Minimun A = ";
    cin>>StndA;
    cout<<" Inputkan Standar Nilai Minimun B = ";
    cin>>StndB;
    cout<<" Inputkan Standar Nilai Minimun C = ";
    cin>>StndC;
    cout<<" Inputkan Standar Nilai Minimun D = ";
    cin>>StndD;
        if (StndB,StndC,StndD >= StndA) {
            cout<<" Anda ada kesalahan dalam memasukan standar nilai \n";
            set_standar();
        }
        if (StndC,StndD >= StndB) {
            cout<<" Anda ada kesalahan dalam memasukan standar nilai \n";
            set_standar();
        }
        if (StndD >= StndC) {
            cout<<" Anda ada kesalahan dalam memasukan standar nilai \n";
            set_standar();
        }

    //=================================================
}


char hitung_index()
{
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/


    //=================================================
    total=UTS*pUts/100+UAS*pUas/100+TUBES/100;

        if (total>=StndA){
            indeks = "A";
            cout<<"Indeks total nilai anda Adalah = "<<indeks<<"\n";
        }
        else
        if (total>=StndB){
            indeks = "B";
            cout<<"Indeks total nilai anda Adalah = "<<indeks<<"\n";
        }
        else
        if (total>=StndC){
            indeks = "C";
            cout<<"Indeks total nilai anda Adalah = "<<indeks<<"\n";
        }
        else
        if (total>=StndD){
            indeks = "D";
            cout<<"Indeks total nilai anda Adalah = "<<indeks<<"\n";
        }
        else
        {
           indeks = "E";
           cout<<"Indeks total nilai anda Adalah = "<<indeks<<"\n";
        }

    //=================================================
}


void input_nilai(){
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/

    //=================================================
    cout<<"Inputkan Nilai UTS = ";
    cin>>UTS;
    cout<<"Inputkan Nilai UAS = ";
    cin>>UAS;
    cout<<"Inputkan Nilai TUBES = ";
    cin>>TUBES;
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
    cout<<"Terimakasih Banyak";

    // YOUR CODE ENDS HERE
    //=================================================
}
