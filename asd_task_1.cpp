/**
    NAMA  : RIAN PEBI
    NIM   : 1301154426
    KELAS : IF 39-06
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
int gradeuts,gradeuas,gradetubes,jumlah,A,B,C,D,E;

// YOUR CODE ENDS HERE
//=================================================


void main_menu();
void set_standar();
void set_proporsi_nilai();
char hitung_index(double uts, double uas, double tubes);
void input_nilai();
void thank_you();

int main()
{
    main_menu();
    return 0;
}

void main_menu()
{
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

    int pil;
    //=================================================
    // YOUR CODE STARTS HERE
    cout <<"1. set standar index nilai"<<endl;
    cout <<"2. set proporsi nilai"<<endl;
    cout <<"3. input nilai"<<endl;
    cout <<"4. keluar"<<endl;
    cout <<"masukkan pilihan       : ";
    cin >> pil;

    switch(pil)
    {
    case 1: set_standar();          break;
    case 2: set_proporsi_nilai();   break;
    case 3: input_nilai();          break;
    case 4: thank_you();            break;
    default: cout <<"pilihan tidak ada"<<endl;
        break;
    }
    // YOUR CODE ENDS HERE
    //=================================================
//   thank_you();    //
}


void set_proporsi_nilai()
{
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout<<"Input Presentase"<<endl;
    cout<<"Presentase UTS    : ";
    cin>>gradeuts;
    cout<<"Presentase UAS    : ";
    cin>>gradeuas;
    cout<<"Presentase Tugas  : ";
    cin>>gradetubes;

    if (gradeuts+gradeuas+gradetubes != 100)
    {
        set_proporsi_nilai();
    }
    main_menu();

    // YOUR CODE ENDS HERE
    //=================================================
}

void set_standar()
{
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user 0jika terdapat nilai yang overlap
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout <<"Masukkan standar indeks A   : ";
    cin >> A;
    cout <<"Masukkan standar indeks B   : ";
    cin >> B;
    cout <<"Masukkan standar indeks C   : ";
    cin >> C;
    cout <<"Masukkan standar indeks D   : ";
    cin >> D;

    main_menu();


    // YOUR CODE ENDS HERE
    //=================================================
}


char hitung_index(double uts, double uas, double tubes)
{
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/
    char index;
    double jumlah ;
    //=================================================
    // YOUR CODE STARTS HERE

        jumlah = ( gradeuts * uts / 100 + gradeuas * uas / 100 + gradetubes * tubes / 100 ) ;

			if ( jumlah >= A ) {

				index = 'A' ;

			} else if  ((jumlah >= B )  && (jumlah < A)) {

				index = 'B' ;
			} else if ((jumlah >= C )  && (jumlah < B )){
				 index = 'C' ;
			} else if ((jumlah >= D)   && (jumlah < C)){
				index = 'D' ;
			} else if (jumlah < D) {
			       index = 'E' ;
			}
			cout <<"Indeks anda adalah "<<index<<endl;
    // YOUR CODE ENDS HERE
    //=================================================
    return index;
}


void input_nilai()
{
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    double uts, uas, tubes;
    //=================================================
    // YOUR CODE STARTS HERE
    cout <<"Nilai UTS          : ";
    cin >> uts;
    cout <<"Nilai UAS          : ";
    cin >> uas;
    cout <<"Nilai Tubes        : ";
    cin >> tubes;

    hitung_index(uts,uas,tubes);
    thank_you();
    main_menu();
    // YOUR CODE ENDS HERE
    //=================================================
}

void thank_you()
{
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    //=================================================
    // YOUR CODE STARTS HERE
    cout <<"Terima Kasih"<<endl;
    cout <<"Rian Pebi"<<endl;
    cout <<"1301154426"<<endl;
    // YOUR CODE ENDS HERE
    //=================================================
}
