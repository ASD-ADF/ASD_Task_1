/**
    NAMA  : Joel Andrew Montana K.G
    NIM   : 1301164165
    KELAS : IF40-02
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
int nilaiA,nilaiB,nilaiC,nilaiD,persenuas,persentubes,persenuts;


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
    cout<< "Menu Utama" << endl;
    cout<< "1.Set Standar index nilai"<< endl;
    cout<< "2.Set proporsi nilai"<< endl;
    cout<< "3.Input nilai"<< endl;
    cout<< "4.Keluar"<< endl;
    cout<< "Masukan Pilihan: ";
    cin>> pilihan;
    switch (pilihan) {
        case 1:
            set_standar();
            main_menu();
        case 2:
            set_proporsi_nilai();
            main_menu();
        case 3:
            input_nilai();
            main_menu();
        case 4:
            thank_you();
            
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
    do {
        cout<< "Masukan persentase masing masing nilai(Persentase menunjukan nilai di angka 100%)";
        cout<< "\nMasukan nilai persentasi UTS ";
        cin>> persenuts;
        cout<< "Masukan nilai persentasi UAS ";
        cin>> persenuas;
        cout<< "Masukan nilai persentasi TUBES ";
        cin>> persentubes;
    } while (persenuts + persenuas + persentubes !=100);
    


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
    cout<<"Masukan nilai minimum A: ";
    cin>> nilaiA;
    cout<<"Masukan nilai minimum B: ";
    cin>> nilaiB;
    cout<<"Masukan nilai minimum C: ";
    cin>> nilaiC;
    cout<<"Masukan nilai minimum D: ";
    cin>> nilaiD;


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
    uts = uts * persenuts/100;
    uas = uas * persenuas/100;
    tubes = tubes* persentubes/100;
    
    if (uts + uas + tubes >= nilaiA) {
        index = 'A';
    } else if (uts + uas + tubes >= nilaiB){
        index = 'B';
        
    } else if (uts + uas + tubes >= nilaiD){
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
    cout<< "Masukan nilai UTS:  ";
    cin>> uts;
    cout<< "Masukan nilai UAS: ";
    cin>> uas;
    cout<< "Masukan nilai TUBES: ";
    cin>> tubes;
    cout<< "\n\nNilai Index : " << hitung_index(uts, uas, tubes)<< endl;


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
    cout<< " Selamat Menikamati Susahnya C++ Semangat Sayang !!!!!";
    exit(0);

    // YOUR CODE ENDS HERE
    //=================================================
}
