/**
    NAMA  : RD. Havez Cahyan F
    NIM   : 1301154197
    KELAS : IF 39-01
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
    int uts,uas,tubes,total,A,B,C,D,E ;
    int P_uts,P_uas,P_tubes = 0 ;
    double hasil;

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

    //=================================================
            int opsi = 0;
            do{
            cout<<"1. Set Standar Index Nilai"<<endl;
            cout<<"2. Set Proporsi Nilai"<<endl;
            cout<<"3. Input Nilai"<<endl;
            cout<<"4. Keluar"<<endl;
            cout<<"Masukan Pilihan Anda :";
            cin >> opsi ;

            switch (opsi){
                case 1 : set_standar();
                         break;
                case 2 : set_proporsi_nilai();
                         break ;
                case 3 : input_nilai();
                         break;
                case 4 : cout<<"Nama  : Rd. Havez Cahyan F"<<endl;
                         cout<<"NIM   : 1301154197"<<endl;
                         cout<<"kelas : IF 39-01"<<endl;
            }
            thank_you();
            }
            while(opsi!=4);
            }
void set_proporsi_nilai(){
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    //=================================================
    {
        int total = 0;
        do{
        cout<<"Masukan presentase dalam persen"<<endl;
        cout<<"Masukan Presentase UTS : ";
        cin >> P_uts;
        cout<<"Masukan Presentase UAS : ";
        cin >> P_uas;
        cout<<"Masukan Presentase TUBES : ";
        cin >> P_tubes;
        total = P_tubes + P_uas + P_uts;
        if (total !=100)
            cout<<"Presentase melebihi batas"<<endl;
        else
            cout<<"Berhasil"<<endl;
        }
        while (total!=100);

    }
    //=================================================
}

void set_standar(){
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    //=================================================
     do
    {
        cout << "Index A : ";
        cin >> A;
        cout << "Index B : ";
        cin >> B;
        cout << "Index C : ";
        cin >> C;
        cout << "Index D : ";
        cin >> D;
        cout<< "Index E : ";
        cin>>E;

        if ((A<B)||(A<C)||(A<D)||(A<E)||(B<C)||(B<D)||(B<E)||(C<D)||(C<E)||(D<E))
            cout << "Inputan anda tidak benar" << endl;
        else
            cout << "BERHASIL!!" << endl;

    }
    while ((A<B)||(A<C)||(A<D)||(A<E)||(B<C)||(B<D)||(B<E)||(C<D)||(C<E)||(D<E));
}
    //=================================================


char hitung_index(double uts, double uas, double tubes){
    /**
    - fungsi menghitung total nilai berdasarkan input parameter dan proporsi nilai
    - fungsi menentukan index nilai berdasarkan standar nilai
    - fungsi mengembalikan karakter index nilai
    **/

    char index;
    //=================================================
    cout << "Indeks anda adalah : " ;
    hasil = (uts*P_uts/100)+(uas*P_uas/100)+(tubes*P_tubes/100);
    if (hasil >= A)
        cout << "A";
    else if (hasil >= B)
        cout << "B";
    else if (hasil >= C)
        cout << "C";
    else if (hasil >= D)
        cout << "D";
    else
        cout << "E";

    cout << endl;
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
    cout << "Nilai UTS   : ";
    cin >> uts;
    cout << "Nilai UAS   : ";
    cin >> uas;
    cout << "Nilai Tubes : ";
    cin >> tubes;
    hitung_index(uts,uas,tubes);
    //=================================================
}

void thank_you(){
    /**
    - fungsi menampilkan pesan singkat untuk mengakhiri program
    - tampilkan nim dan nama kalian
    **/
    //=================================================
    cout<<"TERIMA KASIH"<<endl;
    //=================================================
}
