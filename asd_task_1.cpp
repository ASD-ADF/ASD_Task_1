/**
    NAMA  : Vatana Rianti Aldefi
    NIM   : 1301154566
    KELAS : IF 39-06
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
double prsnuts, prsnuas, prsntubes = 0;
int min_A,min_B,min_C,min_D;
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

void main_menu() {
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
	while(pilihan != 4) {
		cout<<"======================================================\n";
		cout<<"Daftar Menu\n";
		cout<<"1. Set standar index nilai\n";
		cout<<"2. Set proporsi nilai\n";
		cout<<"3. Input nilai\n";
		cout<<"4. Keluar\n";
		cout<<"Pilih menu yang anda inginkan (pilih nomornya) : ";
		cin>>pilihan;
		cout<<"======================================================="<<endl;
		switch(pilihan) {
			case 1:
				set_standar();
				break;
			case 2:
				set_proporsi_nilai();
				break;
			case 3:
				input_nilai();
				break;
		}
	}
	// YOUR CODE ENDS HERE
	//=================================================
	thank_you();
}

void set_proporsi_nilai() {
	/**
	- fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
	- fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
	- fungsi akan mengulang menerima input dari user jika total prosentase != 100
	**/
	double jumlah;
	//=================================================
	// YOUR CODE STARTS HERE
	while (jumlah != 100) {
		cout<<"Masukan proporsi nilai (dalam persen)"<< endl;
		cout<<"Masukkan Prosentase UTS : ";
		cin>>prsnuts;
		cout<<"Masukkan prosentase UAS : ";
		cin>>prsnuas;
		cout<<"Masukkan prosentase Tubes : ";
		cin>>prsntubes;
		jumlah = prsnuts+prsnuas+prsntubes;
		if (jumlah != 100)
			cout<<"Jumlah <> 100%, silahkan input ulang!"<< endl;
	}
	// YOUR CODE ENDS HERE
	//=================================================
}

void set_standar() {
	/**
	- fungsi mengubah standar index A, B, C, D, dan E
	- fungsi akan menerima input rentang nilai untuk masing-masing index nilai
	- fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
	**/
	//=================================================
	// YOUR CODE STARTS HERE
	cout<<"Masukkan standar minimum A : ";
	cin>>min_A;
	cout<<"Masukkan standar minimum B : ";
	cin>>min_B;
	cout<<"Masukkan standar minimum C : ";
	cin>>min_C;
	cout<<"Masukkan standar minimum D : ";
	cin>>min_D;
	if (min_D >= min_C && min_C >= min_B && min_B >= min_A)
	{
		cout<<"Ada standar nilai yang overlap, silahkan input ulang!"<<endl;
		set_standar();
	}
	
	/**
	if (min_A < min_B && min_A < min_C && min_A < min_D){
		cout<<"Ada standar nilai yang overlap, silahkan input ulang!";
		set_standar();
	}
	else if (min_B > min_A && min_B < min_C && min_B < min_D){
		cout<<"Ada standar nilai yang overlap, silahkan input ulang!";
		set_standar();
	}
	else if (min_C > min_A && min_C > min_B && min_C < min_D){
		cout<<"Ada standar nilai yang overlap, silahkan input ulang!";
		set_standar();
	}
	else if (min_D > min_A && min_D > min_B && min_D > min_C){
		cout<<"Ada standar nilai yang overlap, silahkan input ulang!";
		set_standar();
	}
	**/
	// YOUR CODE ENDS HERE
	//=================================================
}

char hitung_index(double uts, double uas, double tubes) {
	/**
	- fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
	- fungsi menentukan index nilai berdasarkan standar nilai
	- fungsi mengembalikan karakter index nilai
	**/
	char index;
	double tot_nilai;
	//=================================================
	// YOUR CODE STARTS HERE
	tot_nilai=(uts*prsnuts/100+uas*prsnuas/100+tubes*prsntubes/100);
	if(tot_nilai>=min_A)
		index='A';
	else if(tot_nilai>=min_B)
		index='B';
	else if(tot_nilai>=min_C)
		index='C';
	else
		index='D';

	// YOUR CODE ENDS HERE
	//=================================================
	return index;
}

void input_nilai() {
	/**
	- fungsi menerima input nilai UTS, UAS, dan TUBES
	- fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
	**/
	double uas, uts, tubes;
	char index;
	//=================================================
	// YOUR CODE STARTS HERE
	cout<<"Masukkan nilai UTS : ";
	cin>>uts;
	cout<<"Masukkan nilai UAS : ";
	cin>>uas;
	cout<<"Masukkan niali Tubes : ";
	cin>>tubes;
	index=hitung_index(uts,uas,tubes);
	cout<<"Indeks nilai anda adalah "<<index<<endl;

	// YOUR CODE ENDS HERE
	//=================================================
}

void thank_you() {
	/**
	- fungsi menampilkan pesan singkat untuk mengakhiri program
	- tampilkan nim dan nama kalian
	**/
	//=================================================
	// YOUR CODE STARTS HERE
	cout<<"=======Terima Kasih Telah Menggunakan Program Ini======"<<endl;
	cout<<"================Vatana Rianti Aldefi===================\n";
	cout<<"=====================1301154566========================\n";
	// YOUR CODE ENDS HERE
	//=================================================
}
