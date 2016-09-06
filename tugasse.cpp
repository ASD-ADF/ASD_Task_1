/**
    NAMA  : Wilson Antonio
    NIM   : 1301154104
    KELAS : IF-39-06
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
		
		int uts, uas, tub , ia, ib, ic, id;     
		
		

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

		cout << "menu"  << endl ;
		cout<< "1. set standar index nilai " << endl;
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
		 
		 cout << "masukkan proporsi nilai uts : " ;
		 cin >> uts ;
		 cout << "masukkan proporsi nilai uas : " ;
		 cin >> uas ;
		 cout << " masukkan proporsi nilai tubes : " ;
		 cin >> tub ;
		 
		 if (uts + uas + tub != 100){
		  	
		 	cout << " ulangi input proporsi nilai" << endl;
		 	
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
			
			cout << " masukkan index a : "  ;
			cin >> ia ;
			cout << " masukkan index b : "  ;
			cin >> ib ;
			cout << "masukkan index c : "   ;
			cin >> ic ;
			cout << "masukkan index d : "  ;
			cin >> id ;
			
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
    double total_nilai ;
    
    //=================================================
    // YOUR CODE STARTS HERE
		
		total_nilai = ( uts * uts / 100 + uas * uas / 100 + tub * tubes / 100 ) ;
		
			if ( total_nilai >= ia ) {
				
				index = 'A' ;
				
			} else if  ((total_nilai >= ib )  && (total_nilai < ia)) {
				
				index = 'B' ;  
			} else if ((total_nilai >= ic )  && (total_nilai < ib )){
				 index = 'C' ; 
			} else if ((total_nilai >= id)   && (total_nilai < ic)){
				index = 'D' ; 
			} else if (total_nilai < id) {
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
		
		cout << " nilai uts: " ;
		cin >> uts ;
		cout << " nilai uas: " ;
		cin >> uas ;
		cout << " nilai tubes: " ;
		cin >> tubes ; 

		cout << "hasil: " <<	hitung_index(uts, uas, tubes) ; 
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
		
		cout << " _______________________________ " << endl ;
		cout << " _________Danke Bosque__________ " ;
		cout << " _______________________________ " ;

    // YOUR CODE ENDS HERE
    //=================================================
}
