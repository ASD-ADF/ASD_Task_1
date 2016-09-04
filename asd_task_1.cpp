/**
NAMA  : NI PUTU SURYA FEBYANTI KUSUMADEWI
NIM   : 1301154482
KELAS : IF 39 - 06
**/


#include <iostream>
#include <math.h>

using namespace std;


double Nilai_UTS, Nilai_UAS, Nilai_Tubes;
double A,B,C,D,E;


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
		do {
	cout <<"Daftar Menu"<< endl;
	cout <<"1. Set Standar Index Nilai"<< endl;
	cout <<"2. Set Proporsi Nilai"<< endl;
	cout <<"3. Input Nilai"<< endl;
	cout <<"4. Keluar"<< endl;

	cout <<"Silahkan Masukkan Menu Pilihan Anda : ";
	cin >>pilihan;
	switch(pilihan)
	{case 1 : set_standar();
	 break;
	 case 2 : set_proporsi_nilai ();
	 break;
	 case 3 : input_nilai ();
	 break;
	 case 4 : break;
	 default: main_menu();
	 break;}
	} while (pilihan !=4);
    thank_you();
}

void set_proporsi_nilai(){
	double Nuts=0, Nuas=0, Ntub=0;

	cout <<"Masukkan Presentase Nilai Dalam Persen"<< endl;
	cout <<"Masukkan Presentase UTS : ";
	cin >>Nuts;
	cout <<"Masukkan Presentase UAS : ";
	cin >>Nuas;
	cout <<"Masukkan Presentase Tubes : ";
	cin >>Ntub;

	if (Nuts+Nuas+Ntub <=100) {
        Nilai_UTS = Nuts/100;
		Nilai_UAS = Nuas/100;
		Nilai_Tubes = Ntub/100;
	}

	else {
		cout <<"Yang anda masukkan salah, mohon diulangi"<< endl;
	}
}

void set_standar(){

		double Nila,Nilb,Nilc,Nild,Nile;
		cout<<"Masukkan nilai untuk index A : ";
		cin>>Nila;
		cout<<"Masukkan nilai untuk index B : ";
		cin>>Nilb;
		cout<<"Masukkan nilai untuk index C : ";
		cin>>Nilc;
		cout<<"Masukkan nilai untuk index D : ";
		cin>>Nild;
		cout<<"Masukkan nilai untuk index E : ";
		cin>>Nile;

		if (((Nila>Nilb) and (Nila>Nilc) and (Nila>Nild))) {
			if((Nilb>Nilc) and (Nilb>Nild)) {
				if((Nilc>Nild)) {
						A=Nila;
						B=Nilb;
						C=Nilc;
						D=Nild;
				}
			}
		}
		else {
            cout <<"Yang anda masukkan salah, silahkan diulangi"<< endl;
		}
}


char hitung_index(double uts, double uas, double tubes){
    char index;
    if(((uts*Nilai_UTS) + (uas*Nilai_UAS) + (tubes*Nilai_Tubes)) >=A ){
        index='A';
    }
    else if (((uts*Nilai_UTS) + (uas*Nilai_UAS) + (tubes*Nilai_Tubes)) >=B ){
        index='B';
    }
    else if (((uts*Nilai_UTS) + (uas*Nilai_UAS) + (tubes*Nilai_Tubes)) >=C) {
        index='C';
    }
    else if (((uts*Nilai_UTS) + (uas*Nilai_UAS) + (tubes*Nilai_Tubes)) >=D) {
        index='D';
    }
    else {
        index='E';
    }
    return index;
}


void input_nilai(){

    double uas, uts, tubes;

   cout<<"Masukan Nilai UTS: "<< endl;
   cin>> uts;
   cout<<"Masukkan Nilai UAS: "<< endl;
   cin>> uas;
   cout<<"Masukkan Nilai Tubes: "<< endl;
   cin>> tubes;
   cout<<"Index nilai anda adalah : " <<hitung_index(uts,uas,tubes) <<endl;
}

void thank_you(){
    cout<<"Program sudah berhasil dijalankan"<<endl;
    cout<<"1301154482 - Surya Febyanti Kusumadewi"<<endl;
}
