/**
    NAMA  : KHARISMA OKTAVIANING HERWANDA
    NIM   : 1301154496
    KELAS : IF-39-06
    **/

#include <iostream>
using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE

int index_A, index_B, index_C, index_D;
int G_UTS, G_UAS, G_TUBES;


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
    
    
    do {
    	cout << "Hello, selamat datang!!!"   <<endl;
        cout << "1. SET STANDAR INDEX NILAI" << endl;
        cout << "2. SET PROPORSI NILAI"      << endl;
        cout << "3. SET INPUT NILAI"         << endl;
        cout << "4. KELUAR"                  << endl;
        cout << endl;
        cout << " Silahkan input nilai Anda :";
        cin >> pilihan;

        if (pilihan==1){
            set_standar();
        } else if (pilihan==2){
            set_proporsi_nilai();

        }else if (pilihan==3){
                input_nilai();
        };
        }while(pilihan!=4);

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

    do {
        cout << "Masukkan dalam persen nilai UTS Anda :";
        cin >> G_UTS;
        cout << "Masukkan dalam persen nilai UAS Anda :";
        cin >> G_UAS;
        cout << "Masukkan dalam persen nilai TUBES Anda :";
        cin >> G_TUBES;

        if (G_UTS + G_UAS + G_TUBES!=100) {
            cout << "Jumlahnya yaitu !=100, mohon menginputkan lagi terimakasih :)" <<endl;
    }

 }while (G_UTS + G_UAS + G_TUBES !=100);
 cout << endl;
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

    bool catcher;
    do {
        catcher = false;
        cout << "Masukkan KKM untuk index A : ";
        cin >> index_A;
        cout << "Masukkan KKM untuk index B : ";
        cin >> index_B;

        if (index_B >= index_A){
            catcher = true;
        };

        cout <<"Masukkan KKM untuk index C : ";
        cin >> index_C;

        if (index_C >= index_B){
            catcher = true;

        };

        cout << "Masukkan KKM untuk index D : ";
        cin >> index_D;

        if (index_D >= index_C){
            catcher = true;

        };
        if (catcher){
            cout << "Ulangi input Data Anda :" <<endl;


        };
        } while (catcher);
        cout << endl;
    // YOUR CODE ENDS HERE
    //=================================================
}

char hitung_index(double UTS, double UAS, double TUBES){
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    //=================================================
    // YOUR CODE STARTS HERE
    double total;
        total = (UTS*G_UTS/100)+(UAS*G_UAS/100)+(TUBES*G_TUBES/100);
    if  ((total<=100) && (total>=index_A)) {
        index = 'A';
    } else if ((total<index_A) && (total>=index_B)) {
        index = 'B';
    } else if ((total<index_B) && (total>=index_C)) {
        index = 'C';
    } else if ((total<index_C) && (total>=index_D)) {
        index = 'D';
    } else if ((total<index_D) && (total>=0)) {
        index = 'E';
    };
    // YOUR CODE ENDS HERE
    //=================================================
    return index;
}

void input_nilai(){
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    double UTS, UAS, TUBES;
    //=================================================
    // YOUR CODE STARTS HERE
    cout << "Inputkan nilai UTS Anda :" ;
    cin >> UTS;
    cout << "Inputkan nilai UAS Anda :" ;
    cin >> UAS;
    cout << "Inputkan nilai TUBES Anda :" ;
    cin >> TUBES;
    cout << "Maka nilai Anda : " << hitung_index(UTS, UAS, TUBES);
    cout << endl;

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
    
    cout<< "Terimakasih telah menggunakan jasa layanan program kami :)"<<endl;
    cout<< "Silahkan berkunjung lain waktu :)"<<endl;
    cout<< "Kharisma Oktavianing Herwanda (1301154496)"<<endl;
    
    
    
	// YOUR CODE ENDS HERE
    //=================================================



}


