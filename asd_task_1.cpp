/**
    NAMA  : SURYA FACHRI IDRIS NASUTION
    NIM   : 1301154230
    KELAS : IF 39-06
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE

    int Ruts, Ruas, Rtubes , A, B, C, D;

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
        cout << "MAIN MENU"  << endl ;
		cout << "1. Set standar index nilai " << endl;
		cout <<"2. set proporsi nilai " << endl ;
		cout << "3. input nilai" << endl ;
		cout << "4. keluar " << endl ;

		cin >> pilihan ;
		switch ( pilihan ) {

            case 1 : set_standar ()  ; break ;
			case 2 : set_proporsi_nilai () ; break ;
			case 3 : input_nilai() ; break ;
			case 4 : thank_you() ; break ;

        }

            main_menu ();

    // YOUR CODE ENDS HERE
    //=================================================

}


void set_proporsi_nilai(){
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    //=================================================
    // YOUR CODE STARTS HERE

        cout << "Masukkan proporsi nilai UTS : " ;
		 cin >> Ruts ;
		 cout << "Masukkan proporsi nilai UAS : " ;
		 cin >> Ruas ;
		 cout << " Masukkan proporsi nilai TUBES : " ;
		 cin >> Rtubes ;

		 if (Ruts + Ruas + Rtubes != 100){

            cout << " repeat input proporsi nilai:)" << endl;

		 	set_proporsi_nilai () ;

		  } else {

		  	    main () ;
		  }


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

        cout << " masukkan index A : "  ;
			cin >> A ;
			cout << " masukkan index B : "  ;
			cin >> B ;
			cout << "masukkan index C : "   ;
			cin >> C ;
			cout << "masukkan index D : "  ;
			cin >> D ;

			 main () ;


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
    double totalnilai ;
    //=================================================
    // YOUR CODE STARTS HERE

        totalnilai = ( Ruts * uts / 100 + Ruas * uas / 100 + Rtubes * tubes / 100 ) ;

			if ( totalnilai >= A ) {

				index = 'A' ;

			} else if  ((totalnilai >= B )  && (totalnilai < A)) {

				index = 'B' ;
			} else if ((totalnilai >= C )  && (totalnilai < B )){
				 index = 'C' ;
			} else if ((totalnilai >= D)   && (totalnilai < C)){
				index = 'D' ;
			} else if (totalnilai < D) {
			       index = 'E' ;
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

        cout << " masukkan nilai UTS : " ;
		cin >> uts ;
		cout << " masukkan nilai UAS : " ;
		cin >> uas ;
		cout << " masukkan nilai tubes : " ;
		cin >> tubes ;

		cout << "hasilnya adalah : " <<	hitung_index(uts, uas, tubes) ;
		cout << endl;

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

            cout << " Thank You " << endl ;
		    cout << "SURYA / 1301154230" ;


    // YOUR CODE ENDS HERE
    //=================================================
}
