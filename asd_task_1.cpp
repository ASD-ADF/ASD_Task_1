/**
    NAMA  : ANJAR AFRIZAL
    NIM   : 1301154239
    KELAS : IF-39-01
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
int indexA,indexB,indexC,indexD,prouas,prouts,protubes,prosentase;

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
    // YOUR CODE STARTS HERE
cout << "Daftar Menu" <<endl;
    cout << "1. set standar index nilai"<<endl;
    cout << "2. set proporsi nilai"<<endl;
    cout << "3. input nilai"<<endl;
    cout << "4. keluar"<<endl;
    cout << "Masukkan Pilihan: ";
    cin >> pilihan;

        switch (pilihan) {
            case 1 : set_standar(); break;
            case 2 : set_proporsi_nilai(); break;
            case 3 : input_nilai(); break;
            case 4 : thank_you(); break;
        }

    // YOUR CODE ENDS HERE
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
    // YOUR CODE STARTS HERE
	cout << "input prosentase dalam persen"<<endl;
    cout << "masukkan prosentase UTS : ";
    cin >> prouts;
    cout << "masukkan prosentase UAS : ";
    cin >> prouas;
    cout << "masukkan prosentase TUBES : ";
    cin >> protubes;

    prosentase = prouas + prouts + protubes;

    if (prosentase != 100) {
        cout << "total input prosentase !=100, silahkan ulangi lagi"<<endl;
        set_proporsi_nilai();
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
	cout << "masukkan standar nilai minimum A: ";
    cin >> indexA;
    cout << "masukkan standar nilai minimum B: ";
    cin >> indexB;
    cout << "masukkan standar nilai minimum C: ";
    cin >> indexC;
    cout << "masukkan standar nilai minimum D: ";
    cin >> indexD;

	if (indexB > indexA) {
    cout << "input standar salah, silahkan ulangi lagi"<<endl;
    set_standar();
	} else if (indexC > indexB) {
    cout << "input standar salah, silahkan ulangi lagi"<<endl;
    set_standar();
	} else if (indexD > indexC) {
    cout << "input standar salah, silahkan ulangi lagi"<<endl;
    set_standar();
	}
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
	double sum;

    sum = (((uts * prouts)/100) + ((uas * prouas)/100) + ((tubes * protubes)/100));
    if (sum>=indexA) {
        index = 'A';
    } else if (sum>=indexB && sum<indexA) {
        index = 'B';
    } else if (sum>=indexC && sum<indexB) {
        index = 'C';
    } else if (sum>=indexD && sum<indexC) {
        index = 'D';
    } else {
        index = 'E';
    }

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
	cout << "masukkan nilai uts : ";
    cin >> uts;
    cout << "masukkan nilai uas : ";
    cin >> uas;
    cout << "masukkan nilai tubes : ";
    cin >> tubes;
    cout << "index nilai anda adalah " << hitung_index(uts,uas,tubes) << endl;
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
	cout << endl;
    cout << "Terima Kasih telah menggunakan aplikasi kami"<<endl;
    cout << "1301154239 | Anjar Afrizal";
    cout << endl;

    // YOUR CODE ENDS HERE
    //=================================================
}
