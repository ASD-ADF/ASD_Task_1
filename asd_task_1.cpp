/**
    NAMA  :Elza Fitria
    NIM   :1301154533
    KELAS :IF-39-01
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
	int A=0,B=0,C=0,D=0,puts,puas,ptubes,prosentase;
	char in;


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
    cout<<"DAFTAR MENU"<<endl;
	cout<<"1.Set standar indeks nilai"<<endl;
	cout<<"2.Set proporsi nilai"<<endl;
	cout<<"3.Input nilai"<<endl;
	cout<<"4.Keluar"<<endl;
	cout<<"Masukkan Pilihan"<<endl;
	cin>>pilihan;

		switch(pilihan)
		{
		 case 1 : set_standar();break;
		 case 2 : set_proporsi_nilai();
		 case 3 : input_nilai();break;
		 case 4 : thank_you();break;
		}

}


void set_proporsi_nilai(){
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
	cout<<"input Prosentase Nilai dalam persen :"<<endl;
	cout<<"Masukkan prosentase UTS : ";
	cin>>puts;
	cout<<"Masukkan prosentase UAS : ";
	cin>>puas;
	cout<<"Masukkan prosentase TUBES : ";
	cin>>ptubes;

	prosentase = puts+puas+ptubes;
	if(prosentase !=100) {
		cout<<"total input prosentase !=100, silahkan ulangi lagi"<<endl;
		set_proporsi_nilai();
	}
	main_menu();
    //=================================================
    // YOUR CODE STARTS HERE


    // YOUR CODE ENDS HERE
    //=================================================
}

void set_standar(){
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
	cout<<"masukkan standar nilai minimum A : ";
	cin>>A;
	cout<<"masukkan standar nilai minimum B : ";
	cin>>B;
	cout<<"masukkan standar nilai minimum C : ";
	cin>>C;
	cout<<"masukkan standar nilai minimum D : ";
	cin>>D;

	if(B>A) {
		cout<<"input standar salah, silahkan ulangi lagi"<<endl;
		set_standar();
	}else if (C>B){
		cout<<"input standar salah, silahkan ulangi lagi"<<endl;
		set_standar();
	}else if(D>C){
		cout<<"input standar salah, silahkan ulangi lagi"<<endl;
		set_standar();
	}

	main_menu();
    //=================================================
    // YOUR CODE STARTS HERE


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
	double sum;

	sum=(((uts*puts)/100)+((uas*puas)/100)+((tubes*ptubes)/100));
	if(sum>=A)
		index ='A';
	else if (sum>=B && sum<=A)
		index='B';
	else if (sum>=C && sum<=B)
		index='C';
	else if (sum>=D && sum<=C)
		index='D';
	else
		index='E';

    //=================================================
    // YOUR CODE STARTS HERE


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
	cout<<"masukkan nilai uts : ";
	cin>>uts;
	cout<<"masukkan nilai uas : ";
	cin>>uas;
	cout<<"masukkan nilai tubes : ";
	cin>>tubes;
	cout<<"indeks nilai anda adalah "<<hitung_index(uts,uas,tubes)<<endl;
	
	main_menu();
    //=================================================
    // YOUR CODE STARTS HERE


    // YOUR CODE ENDS HERE
    //=================================================
}

void thank_you(){
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
	cout<<endl;
	cout<<"Terima Kasih telah meggunakan aplikasi kami"<<endl;
	cout<<"1301154533 - ELZA FITRIA";
	cout<<endl;
    //=================================================
    // YOUR CODE STARTS HERE


    // YOUR CODE ENDS HERE
    //=================================================
}
