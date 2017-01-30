/**
    NAMA  : Riandi Kartiko
    NIM   : 1301164300
    KELAS : IF-40-02
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
	double p_uts, p_uas, p_tubes, a_std,b_std,c_std,d_std, total;

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

    int pilihan;
    //=================================================
    // YOUR CODE STARTS HERE
    cout<<"Daftar Menu\n";
    cout<<"-----------\n";
    cout<<"(1.) Set Standar Index Nilai\n";
    cout<<"(2.) Set Proporsi Nilai\n";
    cout<<"(3.) Input Nilai\n";
    cout<<"(4.) Exit\n";
    cout<<"Masukkan Pilihan: ";
    cin>>pilihan;

        switch(pilihan)
        {
        case 1:
            set_standar();
            main_menu();
        case 2:
            set_proporsi_nilai();
            main_menu();
        case 3:
            input_nilai();
            main_menu();
        
            
        


    // YOUR CODE ENDS HERE
    //=================================================
    case 4:
    thank_you();
}
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
	   
	do
	{
	
	   cout<<"Presentasi UTS   : ";cin>>p_uts;
	   cout<<"Presentasi UAS   : ";cin>>p_uas;
	   cout<<"Presentasi TUBES : ";cin>>p_tubes;
	   
	   
	} while (p_uts+p_uas+p_tubes !=100);
    // YOUR CODE ENDS HERE
    //=================================================
}

void set_standar()
{
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    //=================================================
    // YOUR CODE STARTS HERE
	   cout<<"Nilai Minimal A: ";cin>>a_std;
	   cout<<"Nilai Minimal B: ";cin>>b_std;
	   cout<<"Nilai Minimal C: ";cin>>c_std;
	   cout<<"Nilai Minimal D: ";cin>>d_std;
	   

    // YOUR CODE ENDS HERE
    //=================================================
}


char hitung_index(double uts, double uas, double tubes,double total)
{
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    //=================================================
    // YOUR CODE STARTS HERE
	uts 	= uts*p_uts / 100;
	uas 	= uas*p_uas / 100;
	tubes 	= tubes*p_tubes /100;
	total	= uts+uas+tubes;
	
	
	if (total >= a_std)
	{
		cout<<"Index Nilai : A";
	}else
	if (total >=b_std)
	{
		cout<<"Index Nilai : B";
	}else
	if (total >=c_std)
	{
	
		cout<<"Index Nilai : C";
	}else
	if (total >=d_std)
	{
		cout<<"Index Nilai : D";
	}
	
	
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
    double uas, uts, tubes;
    //=================================================
    //
    cout<<"Input Nilai UTS: \n";
    cin>>uts;
    cout<<"Input Nilai UAS: \n";
    cin>>uas;
    cout<<"Input Nilai TUBES: \n";
    cin>>tubes;
    cout<<hitung_index(uts,uas,tubes,total)<<endl;
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
	cout<<"Riandi Kartiko\n";
	cout<<"1 3 0 1 1 6 4 3 0 0";
	exit(0);

    // YOUR CODE ENDS HERE
    //=================================================
}
