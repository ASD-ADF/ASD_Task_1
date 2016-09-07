/**
    NAMA  : A. A. Gde Ratu Pemayun
    NIM   :1301154412
    KELAS :IF-39-06
**/


#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

using namespace std;
double N_UTS, N_UAS, N_TUBES;
double P_UTS, P_UAS, P_TUBES, idxA,idxB,idxC,idxD,idxE;

void main_menu();
void set_standar();
void set_proporsi_nilai();
char hitung_index(double uts, double uas, double tubes);
void input_nilai();
void thank_you();


int main() {
    cout<<"Daftar menu\n";
    cout<<"Pilih menu dibawah ini\n";
    cout<<"1. Set standar indeks nilai\n";
    cout<<"2. Set proporsi nilai\n";
    cout<<"3. Input nilai\n";
    cout<<"4. Ucapan\n";
    cout<<"5. Keluar\n";

    main_menu();
    return 0;
}

void main_menu(){
    int pilihan;
    cout<<"Masukan pilihan: ";
    cin>>pilihan;
    switch (pilihan){
    case 1 : set_standar(); break;
    case 2 : set_proporsi_nilai(); break;
    case 3 : input_nilai(); break;
    case 4 : thank_you(); break;
    case 5 : exit; break;
    default : cout<<"nomor pilihan yang anda masukan tidak ada";
    }

}


void set_proporsi_nilai(){

    cout<<"nilai prosentase dalam persen\n";
    cout<<"masukan nilai prosentase UTS: "; cin>>P_UTS;
    cout<<"masukan nilai prosentase UAS: "; cin>>P_UAS;
    cout<<"masukan nilai prosentase TUBES: "; cin>>P_TUBES;

    if ((P_UTS) + (P_UAS) + (P_TUBES) == 100){
        main();
    }
    else {
        cout<<"prosentase total salah ,tolong masukan ulang.Prosentase total harus = 100\n";
        set_proporsi_nilai();
    }
}

void set_standar(){

    cout<<"masukan nilai minimum A : "; cin>>idxA;
    cout<<"masukan nilai minimum B : "; cin>>idxB;
    cout<<"masukan nilai minimum C : "; cin>>idxC;
    cout<<"masukan nilai minimum D : "; cin>>idxD;
    if ((idxD < idxC)&& (idxC < idxB) && (idxB < idxA)){
        main();
    }
    else if (
        cout<<"indeks yang anda masukan salah, tolong masukan kembali \n"){
        set_standar();
        }
}


char hitung_index(double uts, double uas, double tubes){
    char index;
    double total,x,y,z;
    cout<<endl;
    x = (uts*P_UTS)/100;
    y = (uas*(P_UAS/100));
    z = (tubes*(P_TUBES/100));
    total = (z+y+x);
    if ((total <= 100)&& (total >= idxA)){
        index = 'A';
    }
     else if ((total < idxA)&& (total >= idxB)){
        index = 'B';
     }
    else if ((total < idxB) && (total >= idxC)){
        index = 'C';
    }
    else if ((total < idxC)&& (total >= idxD)){
        index = 'D';
    }
    else {
        index= 'E';
    }

    return index;
}


void input_nilai(){

    char p;
    double uas, uts, tubes;

    cout<<"masukan nilai UTS:"; cin>>uts;
    cout<<"masukan nilai UAS:"; cin>>uas;
    cout<<"masukan nilai TUBES:"; cin>>tubes;
    p = hitung_index(uts,uas,tubes);
    cout <<"indeks nilai yang di dapat: "<<p ;
    cout << endl;

    main();

}

void thank_you(){
    cout<<"terimakasih telah mencoba program ini\n";
    cout<<"A. A. Gde Ratu Pemayun\n";
    cout<<"1301154412. untuk keluar program pilih nomor 5\n";
    main();

}
