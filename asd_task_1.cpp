/**
    NAMA  :DHEVIN ANDREAN AKBAR
    NIM   :1301150015
    KELAS :IF 39-01
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
double z,x,c;
double nilai_akhir[4];

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
    //while (pilihan !=4)
    {
        cout<<"------------------------------------"<<endl;
        cout<<"|                                  |"<<endl;
        cout<<"|       PROGRAM NILAI AKHIR        |"<<endl;
        cout<<"|                                  |"<<endl;
        cout<<"------------------------------------"<<endl;
        cout<< "\n1. Set standar nilai \n\n2. set proporsi nilai\n\n3. input nilai\n\n4. keluar\n"<< endl;
        cout<<"Masukan Pilihan : ";
        cin>> pilihan;
        switch (pilihan)
        {
        case 1:
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


    // YOUR CODE ENDS HERE
    //=================================================

}
}


void set_proporsi_nilai(){
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    double jum;
    //=================================================
    // YOUR CODE STARTS HERE

    do
    {
        cout<< "\nMasukan Prosentase Nilai Akhir "<< endl;
        cout<<"masukan prosentase nilai UTS : ";
        cin>> z;
        cout<<"masukan prosentase nilai UAS : ";
        cin>> x;
        cout<<"masukan prosentase nilai TUBES : ";
        cin>> c;
        jum = z+x+c;
        if (jum != 100)
            cout<< "inputan anda harus bernilai 100 silahkan ulangi lagi"<< endl;
    }
    while(jum!=100);
    {
        main_menu();
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
    nilai_akhir[4]=0;
    cout<<"Masukkan standar nilai minimum A: ";
    cin>> nilai_akhir[0];
    cout<<"Masukkan standar nilai minimum B: ";
    cin>> nilai_akhir[1];
    cout<<"Masukkan standar nilai minimum C: ";
    cin>> nilai_akhir[2];
    cout<<"Masukkan standar nilai minimum D: ";
    cin>> nilai_akhir[3];
    if (nilai_akhir[0]<nilai_akhir[1])
    {
        cout<<"Nilai yang dimasukan salah \n";
        set_standar();
    }
    else if (nilai_akhir[1]<nilai_akhir[2])
    {
        cout<<"Nilai yang dimasukan salah \n";
        set_standar();
    }
    else if (nilai_akhir[2]<nilai_akhir[3])
    {
        cout<<"Nilai yang dimasukan salah \n";
        set_standar();
    }
    else if (nilai_akhir[0]>nilai_akhir[1] && nilai_akhir[1]>nilai_akhir[2] && nilai_akhir[3] )
    {
        main_menu();
    }


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
    double tot;
    //=================================================
    // YOUR CODE STARTS HERE
    tot = (uts*(z/100) + uas*(x/100) + tubes*(c/100));
    if (tot < nilai_akhir[3]) index = 'E';
    if (tot >= nilai_akhir[3] && tot < nilai_akhir[2]) index = 'D';
    if (tot >= nilai_akhir[2] && tot < nilai_akhir[1]) index = 'C';
    if (tot >= nilai_akhir[1] && tot < nilai_akhir[0]) index = 'B';
    if (tot >= nilai_akhir[0]) index = 'A';


    // YOUR CODE ENDS HERE
    //=================================================
    return index;
}


void input_nilai(){
    /**
    - fungsi menerima input nilai UTS, UAS, dan TUBES
    - fungsi menampilkan index yang didapat berdasarkan input nilai UTS, UAS, dan TUBES
    **/
    char index ;
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

    {
        main_menu();
    }


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
    cout<<"Program Telah Selesai Oleh \n\nNama : Dhevin Andrean Akbar\n\nNIM : 1301150015"<<endl;


    // YOUR CODE ENDS HERE
    //=================================================
}
