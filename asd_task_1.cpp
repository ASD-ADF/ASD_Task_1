/**
    NAMA  : Lucky Olivera Marbun
    NIM   : 1301164055
    KELAS : IF 40-02
**/


#include <iostream>

using namespace std;

  int pilihan,stdA,stdB,stdC,stdD,pUTS,pUAS,pTUBES;
    long double Total;
    string index;
    double uts,uas,tubes;

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

    int pilihan;
    //=================================================
     cout<<"Daftar Menu"<<;
     cout<<"1. Set Standar Index Nilai"<<;
     cout<<"2. Set Proporsi Nilai"<<;
     cout<<"3. Input Nilai"<<;
     cout<<"4. Keluar\n";
     cout<<"Masukkan Pilihan : "<<;
     cin>>pilihan;
    //=================================================
    if (pilihan == 1){
    set_standar();
    }
    else if (pilihan == 2){
    set_proporsi_nilai();
    }
    else if (pilihan ==3){
    input_nilai();
    hitung_index();
    }
    }
    while(pilihan!=4);{
    thank_you();
}


void set_proporsi_nilai(){

    cout<<"Input Prosentase dalam persen \n"<<"\n";
    cout<<"Masukan Prosentase UTS : ";
    cin>>pUTS;
    cout<<"Masukan Prosentase UAS : ";
    cin>>pUAS;
    cout<<"Masukan Prosentase Tubes : ";
    cin>>pTUBES;
    if (pUAS+pUTS+pTUBES!=100){
        cout<<"Prosentase yang anda masukan != 100, silahkan ulangi lagi \n";
        set_proporsi_nilai();
    }
}

void set_standar(){
    //=================================================
    cout<<"Masukan standar minimum A : ";
    cin>>stdA;
    cout<<"Masukan standar minimum B : ";
    cin>>stdB;
    cout<<"Masukan standar minimum C : ";
    cin>>stdC;
    cout<<"Masukan standar minimum D : ";
    cin>>stdD;

    if (stdB,stdC,stdD >= stdA) {
        cout<<"Anda salah memasukan standar nilai\n";
        set_standar();
        }
    else if (stdC,stdD >= stdB){
        cout<<"Anda salah memasukan standar nilai\n";
        set_standar();
        }
    else if (stdD>=stdC){
        cout<<"Anda salah memasukan standar nilai\n";
        set_standar();
        }
    //=================================================
}

char hitung_index(double uts, double uas, double tubes){
    char index;
    //=================================================
    Total=uts*pUTS/100+uas*pUAS/100+tubes*pTUBES/100;

    if (Total>=stdA){
        index ="A";
        cout<<"Indeks total nilai anda adalah : "<<index<<"\n";
        }
    else if (Total>=stdB){
        index ="B";
        cout<<"Indeks total nilai anda adalah : "<<index<<"\n";
        }
    else if (Total>=stdC){
        index ="C";
        cout<<"Indeks total nilai anda adalah : "<<index<<"\n";
        }
    else if (Total>=stdD) {
        index ="D";
        cout<<"Indeks total nilai anda adalah : "<<index<<"\n";
        }
    else {
        index ="E";
        cout<<"Indeks total nilai anda adalah : "<<index<<"\n";
        }
    //=================================================
    return index;
}


void input_nilai(){
    double uas, uts, tubes;
    //=================================================
    cout<<"Masukan nilai UTS : ";
    cin>>uts;
    cout<<"Masukan nilai UAS : ";
    cin>>uas;
    cout<<"Masukan nilai Tubes : ";
    cin>>tubes;
    //=================================================
}

void thank_you(){
    //=================================================
    cout<<"Terima kasih, program ini diselesaikan oleh:\n";
    cout<<"Lucky Olivera Marbun - 1301164055";
    //=================================================
}
