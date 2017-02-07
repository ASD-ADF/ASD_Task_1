/**
    NAMA  : rangga dwi alamsyah
    NIM   : 1301164030
    KELAS : IF 40-02
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
int a,b,c,d,e,pil,puts,puas,ptub;
double uas,uts,tubes,total;

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
    cout<<"1. Set Standar Index Nilai"<<endl;
    cout<<"2. Set Proporsi Nilai"<<endl;
    cout<<"3. Input Nilai"<<endl;
    cout<<"0 Keluar"<<endl;
        do {
        cin>>pil;
        switch(pil) {
        case 1:
            set_standar();
            break;
        case 2:
            set_proporsi_nilai();
            break;
        case 3:
            input_nilai();
            break;
        case 0:
            break;
        default:
            break;
        }
    } while (pil=0);

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
    cout<<"masukan presentase UTS:"<<endl;
    cin>>puts;
    cout<<"masukan presentase UAS:"<<endl;
    cin>>puas;
    cout<<"masukan presentase TUBES:"<<endl;
    cin>>ptub;
    if (puts+puas+ptub != 100){
        cout<<"Total input presentase != 100, silahkan ulangi lagi"<<endl;
        set_proporsi_nilai();}
    else{
    main_menu();}
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
    cout<<"masukan standar minimum A:"<<endl;
    cin>>a;
    cout<<"masukan standar minimum B:"<<endl;
    cin>>b;
    cout<<"masukan standar minimum C:"<<endl;
    cin>>c;
    cout<<"masukan standar minimum D:"<<endl;
    cin>>d;
    cout<<"masukan standar minimum E:"<<endl;
    cin>>e;
    if ((e>d)||(d>c)||(c>b)||(b>a)){
        cout<<"input standar, silahkan ulangi kembali"<<endl;
        set_standar();}
    else{
        main_menu();
    }
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
    total = (uts*puts/100)+(uas*puas/100)+(tubes*ptub/100);
    if (total>=a){
        index = 'A';
        cout<<"indeks nilai: "<<index<<endl;}
    else if (total>=b){
        index = 'B';
        cout<<"indeks nilai: "<<index<<endl;}
    else if (total>=c){
        index = 'C';
        cout<<"indeks nilai: "<<index<<endl;}
    else if (total>=d){
        index = 'D';
        cout<<"indeks nilai: "<<index<<endl;}
    else if (total>=e){
        index = 'E';
        cout<<"indeks nilai: "<<index<<endl;}
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
    cout<<"masukan nilai uts: "<<endl;
    cin>>uts;
    cout<<"masukan nilai uas: "<<endl;
    cin>>uas;
    cout<<"masukan nilai tubes: "<<endl;
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
    cout<<"Terimakasih"<<endl;

    // YOUR CODE ENDS HERE
    //=================================================
}
