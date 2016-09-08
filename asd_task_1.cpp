/**
    NAMA  : Aditya Alif Nugraha
    NIM   : 1301154183
    KELAS : IF-39-01
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
double peruts,peruas,pertubes;
int A,B,C,D,E;

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
    cout<<"\n\nSelamat Datang di Aplikasi Penghitung Indeks Nilai"<<endl;
    cout<<"1. Set standar index nilai"<<endl;
    cout<<"2. Set proporsi nilai"<<endl;
    cout<<"3. Input nilai"<<endl;
    cout<<"4. Keluar"<<endl;
    cout<<"Masukkan Pilihan: "; cin>>pilihan;
    switch (pilihan)
    {
    case 1 :
        set_standar();
        break;
    case 2:
        set_proporsi_nilai();
        break;
    case 3:
        input_nilai();
        break;
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
    cout<<"\n\nPresentase Nilai UTS: "; cin>>peruts;
    cout<<"Presentase Nilai UAS: "; cin>>peruas;
    cout<<"Presentase Nilai TUBES: "; cin>>pertubes;
    if ((peruts+peruas+pertubes) != 100)
    {
        cout<<"Persentase belum 100%. Silahkan masukkan kembali!"<<endl;
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
    cout<<"\n\nMasukkan minimum indeks A: "; cin>>A;
    cout<<"Masukkan minimum indeks B: "; cin>>B;
    cout<<"Masukkan minimum indeks C: "; cin>>C;
    cout<<"Masukkan minimum indeks D: "; cin>>D;
    if ((A<=B) || (B<=C) || (C<=D))
    {
        cout<<"Input nilai minimum salah. Silahkan ulang kembali!"<<endl;
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
    double total;
    //=================================================
    // YOUR CODE STARTS HERE
    total = (uts*(peruts/100)+(uas*(peruas/100))+(tubes*(pertubes/100)));
    if (total >= A)
    {
        cout<<"Indeks nilai anda: A"<<endl;
    }
    else if (total >= B)
    {
        cout<<"Indeks nilai anda: B"<<endl;
    }
    else if (total >= C)
    {
        cout<<"Indeks nilai anda: C"<<endl;
    }
    else if (total >= D)
    {
        cout<<"Indeks nilai anda: D"<<endl;
    }
    else
    {
        cout<<"Indeks nilai anda: E"<<endl;
    }
    main_menu();
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
    cout<<"\n\nMasukkan Nilai UTS: "; cin>>uts;
    cout<<"Masukkan Nilai UAS: "; cin>>uas;
    cout<<"Masukkan Nilai TUBES: "; cin>>tubes;
    hitung_index(uts,uas,tubes);

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
    cout<<"\n\n\nTerima Kasih Telah Menggunakan Progam Ini"<<endl;

    // YOUR CODE ENDS HERE
    //=================================================
}
