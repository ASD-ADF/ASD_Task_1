/**
    NAMA  :rizki hidayatullah
    NIM   :1301154118
    KELAS :IF 39-06
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
int puas, puts, ptubes, a, b, c, d, prauas, prauts, pratubes;
double jumlah;

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
    cout<<"Daftar Menu"<<endl;
	cout<<"1. set standar index nilai"<<endl;
	cout<<"2. set proporsi nilai"<<endl;
	cout<<"3. input nilai"<<endl;
	cout<<"4. keluar"<<endl;
	cout<<"Masukkan pilihan: ";
	cin>>pilihan;

	if (pilihan==1)
    set_standar();
    else if  (pilihan==2)
        set_proporsi_nilai();
    else if  (pilihan==3)
        input_nilai();
    else thank_you();
	return;


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
cout<<"input prosentase dalam persen"<<endl;
    cout<<"masukkan prosentase UTS: ";
    cin>>prauts;

    cout<<"masukkan prosentase UAS: ";
    cin>>prauas;

    cout<<"masukkan prosentase TUBES: ";
    cin>>pratubes;

    if (prauts+prauas+pratubes!=100){

       	cout<<"total input prosentase != 100, silahkan ulangi lagi\n";

    	cout<<"masukkan prosentase UTS: ";
    	cin>>prauts;

    	cout<<"masukkan prosentase UAS: ";
    	cin>>prauas;

    	cout<<"masukkan prosentase TUBES: ";
    	cin>>pratubes;

	}
    main_menu();

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

cout<<"masukkan standar minimum A: ";
    cin>>a;
    cout<<"masukkan standar minimum B: ";
    cin>>b;
    cout<<"masukkan standar minimum C: ";
    cin>>c;
    cout<<"masukkan standar minimum D: ";
    cin>>d;

	main_menu();
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

jumlah=((uts*prauts/100)+(uas*prauas/100)+(tubes*pratubes/100));

    if (jumlah>=a)
    	cout<<"index nilai anda adalah A\n";
	else if ((jumlah<a) && (jumlah>=b))
		cout<<"index nilai anda adalah B\n";
	else if ((jumlah<b) && (jumlah>=c))
		cout<<"index nilai anda adalah C\n";
	else if ((jumlah<c) && (jumlah>=d))
		cout<<"index nilai anda adalah D\n";
	else cout<<"index nilai anda adalah E\n";
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

cout<<"masukkan nilai uts: ";
    cin>>uts;
    cout<<"masukkan nilai uas: ";
    cin>>uas;
    cout<<"masukkan nilai tubes: ";
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

cout<<"Terima Kasih &&"<<endl;
    cout<<"rizki hidayatullah"<<endl;
    cout<<"1301154118"<<endl;
    // YOUR CODE ENDS HERE
    //=================================================
}
