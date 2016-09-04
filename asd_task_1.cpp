/**
    NAMA  : Dhevi Larasati
    NIM   : 1301154454
    KELAS : IF 39-06
**/


#include <iostream>
#include <math.h>

using namespace std;

	double UAS,UTS,TUBES;
	double A, B, C, D, E;


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


    cout <<"Masukkan Pilihan: ";
	cin >>pilihan;
	switch(pilihan)
	{case 1: set_standar();
	 break;
	 case 2: set_proporsi_nilai();
	 break;
	 case 3: input_nilai();
	 break;
	 case 4: break;
	 default: main_menu();
	 break;}
	} while (pilihan != 4);
    thank_you();
}


void set_proporsi_nilai(){
	double uasin, utsin, tubesin;

	cout <<"Input Prosentase Dalam Persen"<< endl;
	cout <<"Masukkan prosentase UTS: ";
	cin >>utsin;
	cout <<" Masukkan prosentase UAS: ";
	cin >>uasin;
	cout <<"Masukkan prosentase TUBES: ";
	cin >>tubesin;
	if ((utsin+uasin+tubesin) <= 100) {
		UTS=utsin/100;
		UAS=uasin/100;
		TUBES=tubesin/100;
	}
	else {
		cout <<"Salah mbel"<< endl;
	}
}

void set_standar(){
	int na, nb, nc, nd, ne;

	cout <<"Masukkan standar minimum A: ";
	cin >>na;
	cout <<"Masukkan standar minimum B: ";
	cin >>nb;
	cout <<"Masukkan standar minimum C: ";
	cin >>nc;
	cout <<"Masukkan standar minimum D: ";
	cin >>nd;
	if ((na>nb) and (na>nc) and (na>nd)) {
		if ((nb > nc) and (nb > nd))  {
			if (nc > nd) {
				A=na;
				B=nb;
				C=nc;
				D=nd;
			}
		}
	}
	else {
		cout <<"Input standar salah, ulangi lagi gih"<< endl;
	}
}


char hitung_index(double uts, double uas, double tubes){
    char index;

	if (((uts*UTS) + (uas*UAS) + (tubes*TUBES))	>= A)	{
		index='A';
	}
	else if (((uts*UTS) + (uas*UAS) + (tubes*TUBES))	>= B) {
		index='B';
	}
	else if (((uts*UTS) + (uas*UAS) + (tubes*TUBES))	>= C) {
		index='C';
	}
	else if (((uts*UTS) + (uas*UAS) + (tubes*TUBES))	>= D) {
        index='D';	}
	else {
		index='E';

	}
    return index;
}


void input_nilai(){

    double uas, uts, tubes;

	cout <<"Masukkan nilai UTS: " << endl;
	cin >> uts;
	cout <<"Masukkan nilai UAS: " << endl;
	cin >> uas;
	cout <<"Masukan nilai TUBES: " << endl;
	cin >> tubes;
	cout <<"Index nilai anda adalah " <<hitung_index(uts, uas, tubes) << endl;
	cout << ((uts*UTS) + (uas*UAS) + (tubes*TUBES)) << endl;

}

void thank_you(){
	cout <<"Dah Selesai.."<< endl;
}
