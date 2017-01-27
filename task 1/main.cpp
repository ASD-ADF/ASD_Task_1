/**
    NAMA  : Muhammad Adli Ghifari
    NIM   : 1301164374
    KELAS : IF 40-02
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
int psuts,psuas,pstbs,iA,iB,iC,iD,iE;
double totalnilai;


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

	cout<< "1. Set standar index nilai"<<endl;
	cout<< "2. Set Proporsi nilai"<<endl;
	cout<< "3. Input Nilai"<<endl;
	cout<< "4. Keluar"<<endl;
	cout<< "Masukan Pilihan : ";
	cin>>pilihan;

	if (pilihan==1) {
		set_standar();
		main_menu();
	}
	else if (pilihan==2) {
		set_proporsi_nilai();
		main_menu();
	}
	else if (pilihan==3) {
		input_nilai();
		main_menu();
	}
	while (pilihan!=4);

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
    cout<<"Input dalam persen"<<endl;
	cout<<"Masukan persentase UTS: ";
	cin>>psuts;
	cout<<"Masukan persentase UAS: ";
	cin>>psuas;
	cout<<"Masukan persentase TUBES: ";
	cin>>pstbs;
	if (psuts+psuas+pstbs !=100) {
		cout<<"Input yang anda masukan salah"<<endl;
		set_proporsi_nilai();
	}



    //=================================================
}

void set_standar(){
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    //=================================================
    cout<<"Masukan standar minimum A : ";
	cin>>iA;
	cout<<"Masukan standar minimum B : ";
	cin>>iB;
	cout<<"Masukan standar minimum C : ";
	cin>>iC;
	cout<<"Masukan standar minimum D : ";
	cin>>iD;
	cout<<"Masukan standar minimum E : ";
	cin>>iE;

	if(iE,iD,iC,iB >= iA) {
		cout<<"Input yang anda isi tidak sesuai,silahkan input kembali"<<endl;
		set_standar();
	}
	else if(iE,iD,iC >= iB) {
		cout<<"Input yang anda isi tidak sesuai,silahkan input kembali"<<endl;
		set_standar();
	}
	else if(iE,iD >= iC) {
		cout<<"Input yang anda isi tidak sesuai,silahkan input kembali"<<endl;
		set_standar();
	}
	else if(iE >= iD) {
		cout<<"Input yang anda isi tidak sesuai,silahkan input kembali"<<endl;
		set_standar();
	}
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
    totalnilai=uts*psuts/100+uas*psuas/100+tubes*pstbs/100;

	if (totalnilai >= iA) {
		index= 'A';
		cout<<"index nilai anda adalah A";
	}
	else if (totalnilai >= iB) {
		index= 'B';
		cout<<"index nilai anda adalah B";
	}
	else if (totalnilai >= iC) {
		index= 'C';
		cout<<"index nilai anda adalah C";
	}
	else if (totalnilai >= iD) {
		index= 'D';
		cout<<"index nilai anda adalah D";
	}
	else {
		index= 'E';
		cout<<"index nilai anda adalah E";
	}

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
    cout<<"Masukan nilai UTS : ";
	cin>>uts;
	cout<<"Masukan nilai UAS : ";
	cin>>uas;
	cout<<"Masukan nilai TUBES : ";
	cin>>tubes;

    //=================================================
}

void thank_you(){
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    //=================================================
   cout<<"Program ini dikerjakan dengan bantuan dari berbagai sumber, hatur nuhun sumber sumber tersebut hehehehe dalapan puluh 2 kali."<<endl;
   cout<<"Nama : Muhammad Adli Ghifari"<<endl;
   cout<<"NIM : 1301164374"<<endl;
    //=================================================
}
