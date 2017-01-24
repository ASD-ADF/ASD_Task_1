/**
    NAMA  : INDAH AYU NUR FAUZIAH
    NIM   : 1301164004
    KELAS : IF-40-02
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
float uts,uas,tubes;
float puts, puas,ptubes;
int a,b,c,d, lanjut;
float total;

// YOUR CODE ENDS HERE
//=================================================


void main_menu();
void set_standar();
void set_proporsi_nilai();
void hitung_index(double uts, double uas, double tubes);
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
lanjut=1;
while (lanjut==1)
    {

        cout<<"Daftar Menu: "<<endl;
        cout<<"1. Set Standar Index Nilai "<<endl;
        cout<<"2. Set Proporsi nilai "<<endl;
        cout<<"3. Input Nilai "<<endl;
        cout<<"4. Keluar "<<endl;
        cout<<"Masukkan Pilihan (1/2/3/4): ";
        cin>>pilihan;
        if (pilihan==1)
        {
            set_standar();

        }
        else if (pilihan==2)
        {
            set_proporsi_nilai();
        }
        else if(pilihan==3)
        {
            input_nilai();
        }
        else if (pilihan==4)
        {
            thank_you();
        }
    }
}

    // YOUR CODE ENDS HERE
    //=================================================




void set_proporsi_nilai(){
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    //=================================================
    // YOUR CODE STARTS HERE

    cout<<"Input prosentase dalam persen"<<endl;
    cout<<"Masukkan prosentase UTS: ";
    cin>>puts;
    cout<<"Masukkan prosentase UAS: ";
    cin>>puas;
    cout<<"Masukkan prosentase TUBES: ";
    cin>>ptubes;

    if(puts+puas+ptubes<100)
    {
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

cout<<"Masukkan standar minimum A: ";
cin>>a;
cout<<"Masukkan standar minimum B: ";
cin>>b;
cout<<"Masukkan standar minimum C: ";
cin>>c;
cout<<"Masukkan standar minimum D: ";
cin>>d;

main_menu();

    // YOUR CODE ENDS HERE
    //=================================================
}
void hitung_index(float uts, float uas, float tubes, float puts, float puas, float ptubes, int a, int b, int c, int d){
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    //=================================================
    // YOUR CODE STARTS HERE

total=(puts/100*uts)+(puas/100*uas)+(ptubes/100*tubes);
cout<<total<<endl;
if (total>=a)
{
    cout<<"index : A";

}
else if (total>=b)
{
    cout<<"index : B";

}
else if (total>=c)
{
    cout<<"index : C";
}
else if (total>=d)
{
    cout<<"index : D";
}
else
{
    cout<<"index : E";
}
cout<<endl;
    // YOUR CODE ENDS HERE
    //=================================================
   // return index;
}


void input_nilai(){
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    double uas, uts, tubes;
    //=================================================
    // YOUR CODE STARTS HERE
cout<<"Masukkan nilai UTS: ";
cin>>uts;
cout<<"Masukkan nilai UAS: ";
cin>>uas;
cout<<"Masukkan nilai Tubes: ";
cin>>tubes;


hitung_index(uts,uas,tubes,puts,puas,ptubes,a,b,c,d);

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

cout<<"Nama : Indah Ayu Nur Fauziah"<<endl;
cout<<"NIM : 1301164004"<<endl;
    // YOUR CODE ENDS HERE
    //=================================================
}
