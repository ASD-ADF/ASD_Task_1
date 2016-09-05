/**
    NAMA  :RITA AJENG NUGRAHENI
    NIM   :1301154524
    KELAS :IF 39-06
**/


#include <iostream>


using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
int uts,uas,tubes;
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

    while (pilihan != 4){
    cout<<"======Selamat Datang====="<<endl;
	cout<<"1.set standar index nilai"<<endl;
	cout<<"2.set proporsi nilai"<<endl;
	cout<<"3.input nilai"<<endl;
	cout<<"4.Keluar"<<endl;
    cout<<"========================="<<endl;
    cout<<"Pilih menu yang anda inginkan : ";
    cin>>pilihan;
    cout<<"******************************"<<endl;
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
    thank_you();
}
// YOUR CODE ENDS HERE
//================================================//

void set_proporsi_nilai() {
	/**
	- fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
	- fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
	- fungsi akan mengulang menerima input dari user jika total prosentase != 100
	**/

	//=================================================
	// YOUR CODE STARTS HERE
	double puts,puas,ptubes, total;

	cout<<" presentase nilai UTS :";
	cin>>puts;
	cout<<" presentase nilai UAS :";
	cin>>puas;
	cout<<" presentase nilai TUBES :";
	cin>>ptubes;
	total=puts+puas+ptubes;
	if (total != 100) {
		cout<<"Angka yang anda masukan salah input ulang";


		// YOUR CODE ENDS HERE
		//=================================================
	}
}

void set_standar() {
	/**
	- fungsi mengubah standar index A, B, C, D, dan E
	- fungsi akan menerima input rentang nilai untuk masing-masing index nilai
	- fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
	**/

	//=================================================
	// YOUR CODE STARTS HERE
	int a,b,c,d,e;

	cout<<"Masukan standar nilai A : ";
	cin>>a;
	cout<<"Masukan standar nilai B : ";
	cin>>b;
	cout<<"Masukan standar nilai C : ";
	cin>>c;
	cout<<"Masukan standar niali D : ";
	cin>>d;
	cout<<"Masukan standar nilai E : ";
	cin>>e;
	if (a>b and b>c and c>d and d>e)
		cout<<main;
	else
		cout<<"Anda salah dalam menginputkan";
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
	int a,b,c,d;
	double puts,puas,ptubes,total;

	//=================================================
	// YOUR CODE STARTS HERE
	total =uts*puts/100 + uas*puas/100 + tubes*ptubes/100;
	if ((total>= a) && (total<=100)){
    index = 'A'; }
	else if((total>=b)&& (total < a)){
	index = 'B';}
	else if((total>=c)&&(total<b)){
	index = 'C';}
	else if((total>=d)&& (total <c)){
	index = 'D';}
	else
		{index = 'E';}
	// YOUR CODE ENDS HERE
	//=================================================
	return index;
}


void input_nilai() {
	/**
	- fungsi menerima input nilai UTS, UAS, dan TUBES
	- fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
	**/
	/**double uas, uts, tubes;**/
	char index;
	cout<<"Nilai UTS :"<<endl;
	cin>>uts;
	cout<<"Nilai UAS :"<<endl;
	cin>>uas;
	cout<<"Nilai TUBES :"<<endl;
	cin>>tubes;
	index = hitung_index( uts, uas, tubes);
	cout<<" Indeks nilai yang diperoleh :";
	cout<<index<<endl;
	//=================================================
	// YOUR CODE STARTS HERE


	// YOUR CODE ENDS HERE
	//=================================================
}

void thank_you() {
	/**
	- fungsi menampilkan pesan singkat untuk mengakhiri program
	- tampilkan nim dan nama kalian
	**/
	cout<<"============================================================"<<endl;
	cout<<" Terimakasih telah menggunakan aplikasi ini semoga bermanfaat"<<endl;
	cout<<"=============RITA AJENG NUGRAHENI/1301154524================="<<endl;
	cout<<"============================================================"<<endl;
	//=================================================
	// YOUR CODE STARTS HERE


	// YOUR CODE ENDS HERE
	//=================================================
}


