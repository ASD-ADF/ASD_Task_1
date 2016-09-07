/**
    NAMA  :I Ketut Sudika Kertayasa
    NIM   :1301154244
    KELAS :IF-39-06
**/


#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/

double idxA,idxB,idxC,idxD,idxE,Pro_UTS,Pro_UAS,Pro_TUBES;


void main_menu();
void set_standar();
void set_proporsi_nilai();
char hitung_index(double uts, double uas, double tubes);
void input_nilai();
void thank_you();

int main() {
	cout<<"\t----MENU----\n";
	cout<<"________________________________\n\n";
	cout<<"1. Set Standar Indeks nilai\n";
	cout<<"2. Set Proprsi Nilai\n";
	cout<<"3. Input Nilai\n";
	cout<<"4. Akhir Program\n";
	cout<<"5. Keluar\n";
	
	
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
	cout<<"Masukkan nomor pilihan :";
	cin>>pilihan;
	switch (pilihan){
		case 1 : set_standar(); break;
		case 2 : set_proporsi_nilai(); break;
		case 3 : input_nilai(); break;
		case 4 : thank_you(); break;
		case 5 : exit; break;
		default : cout<<"Nomor inputan salah...";
	}
}
  


void set_proporsi_nilai(){
	 /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
  
  	cout<<"Nilai persentase dalam persen\n";
  	cout<<"input nilai prosentase UTS: "; cin>>Pro_UTS;
  	cout<<"input nilai prosentase UAS: "; cin>>Pro_UAS;
  	cout<<"input nilai prosentase TUBES: "; cin>>Pro_TUBES;
  	
  	if ((Pro_UTS) + (Pro_UAS) + (Pro_TUBES)==100){
  		main();
	}
	else {
		cout<<"prosentase total harus = 100, mohon di ulang \n";
		set_proporsi_nilai();
	}
}

void set_standar(){
	/**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
   
   	cout<<"Input nilai minimum A : "; cin>>idxA;
   	cout<<"Input nilai minimum B : "; cin>>idxB;
   	cout<<"Input nilai minimum C : "; cin>>idxC;
   	cout<<"Input nilai minimum D : "; cin>>idxD;
   	if ((idxD< idxC)&&(idxC<idxB)&&(idxB<idxA)){
   		main();
	}
	else if (
		cout<<"indeks tidak benar, masukkan kembali indeks baru \n"){
		set_standar();	
		}
}
		



char hitung_index(double uts, double uas, double tubes){
	 /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/
   char index;
   double total,x,y,z;
   cout<<endl;
   x=(uts*Pro_UTS)/100;
   y=(uas*(Pro_UAS/100));
   z=(tubes*(Pro_TUBES/100));
   total =(x+y+z);
   if ((total<= 100)&&(total>=idxA)){
   		index = 'A';
   }
   else if ((total<idxA)&&(total>=idxB)){
   		index='B';
   }
   else if ((total<idxB)&&(total>=idxC)){
   		index='C';
   }
   else if ((total<idxC)&&(total>=idxD)){
   		index='D';
   }
   else {
   		index='E';
   }
    return index;
}

void input_nilai(){
	/**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
   
    double uas, uts, tubes;
    char indeks;
   
    cout<<"Input nilai UTS: ";
    cin>>uts;
    cout<<"Input nilai UAS: ";
    cin>>uas;
    cout<<"Input nilai TUBES: ";
    cin>>tubes;
    indeks = hitung_index(uts,uas,tubes);
    cout<<"index nilai anda adalah "<<indeks<<endl;
    

  	main();
}



void thank_you(){
	 /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    cout<<"--------THANK YOU-------- " << endl;
    cout<<"    NGODING ITU INDAH"<<endl;
    cout<<"  I KETUT SUDIKA KERTAYASA\n";
    main();
    
}
