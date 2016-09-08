/**
    NAMA  : Firhan Wibianto
    NIM   : 1301154099
    KELAS : IF 39-01
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE

double a,b,c;
double nilai[4];

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

    while (pilihan !=4)
    {
        cout<<"Menu" <<endl;
        cout<<"1. Set standar index nilai" <<endl;
        cout<<"2. Set proporsi nilai" <<endl;
        cout<<"3. Input Nilai" <<endl;
        cout<<"4. Keluar" <<endl;



        cout<<"Pilih : ";
        cin>>pilihan;

        cout<<endl;

            switch(pilihan)
            {
                case 1 :
                    set_standar();
                    break;

                case 2 :
                    set_proporsi_nilai();
                    break;

                case 3 :
                    input_nilai();
                    break;

                case 4 :
                    thank_you();
                    break;
            }

    }

}


void set_proporsi_nilai(){
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/

    double jum;

    do
    {
        cout<<endl;
        cout<<"Masukan prosentase nilai UTS : ";
        cin>>a;
        cout<<"Masukan prosetase nilai UAS : ";
        cin>>b;
        cout<<"Masukan prosetase nilai TUBES : ";
        cin>>c;
        jum = a+b+c;
        if (jum != 100)
            cout<<"Masukan inputan anda bernilai 100, silahka coba lagi !";
            cout<<endl;
    }

    while(jum != 100);

}

void set_standar(){
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    //=================================================
    // YOUR CODE STARTS HERE

    nilai[4]=0;
    cout<<"Masukkan standar nilai minimum A: ";
    cin>> nilai[0];
    cout<<"Masukkan standar nilai minimum B: ";
    cin>> nilai[1];
    cout<<"Masukkan standar nilai minimum C: ";
    cin>> nilai[2];
    cout<<"Masukkan standar nilai minimum D: ";
    cin>> nilai[3];
    if (nilai[0]<nilai[1] )
    {
        cout<<"Nilai yang dimasukan salah \n";
        set_standar();
    }
    else if (nilai[1]<nilai[2])
    {
        cout<<"Nilai yang dimasukan salah \n";
        set_standar();
    }
    else if (nilai[2]<nilai[3])
    {
        cout<<"Nilai yang dimasukan salah \n";
        set_standar();
    }
    else if (nilai[0]>nilai[1] && nilai[1]>nilai[2] && nilai[2]>nilai[3] )
    {
        main_menu();

    }
    // YOUR CODE ENDS HERE
    //=================================================
}


char hitung_index(double uts, double uas, double tubes){

    char index;
    double tot;
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    //=================================================
    // YOUR CODE STARTS HERE
    tot = (uts*(a/100) + uas*(b/100) + tubes*(c/100));
    if (tot < nilai[3]) index = 'E';
    if (tot >= nilai[3] && tot < nilai[2]) index = 'D';
    if (tot >= nilai[2] && tot < nilai[1]) index = 'C';
    if (tot >= nilai[1] && tot < nilai[0]) index = 'B';
    if (tot >= nilai[0]) index = 'A';
    // YOUR CODE ENDS HERE
    //=================================================
    return index;
}


void input_nilai(){
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    char index;
    double uas, uts, tubes;
    //=================================================
    // YOUR CODE STARTS HERE
    cout <<"Masukan Nilai"<< endl;
    cout <<"Nilai UTS : ";
    cin >> uts;
    cout <<"Nilai UAS : ";
    cin >> uas;
    cout <<"Nilai TUBES : ";
    cin >> tubes;
    index = hitung_index(uts,uas,tubes);
    cout << "\n Indeks Nilai akhir anda adalah : "<< index<<endl;
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
    cout<<"\nTerima Kasih "<< endl;
    cout<<"Program Ini dibuat oleh \n\nNama : Firhan Wibianto (HanswibbyProject)\n\nNIM : 1301154099"<<endl;
    // YOUR CODE ENDS HERE
    //=================================================
}
