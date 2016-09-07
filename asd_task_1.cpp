/**
    NAMA  : FAUZI KURNIAWAN
    NIM   : 13O1154267
    KELAS : IF-39-01
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
double A,B,C;
double angka[4];
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
    while (pilihan !=4)
        {
        cout<<"||=============================================||"<<endl;
        cout<<"||              NILAI MAHASISWA                ||"<<endl;
        cout<<"||=============================================||"<<endl;
        cout<<"||1. Set standar nilai                         ||"<<endl;
        cout<<"||2. set proporsi nilai                        ||"<<endl;
        cout<<"||3. input nilai mahasiswa                     ||"<<endl;
        cout<<"||4. keluar                                    ||"<<endl;
        cout<<"||=============================================||"<<endl;
        cout<<"\nninput menu : ";
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
    }

    // YOUR CODE ENDS HERE
    //=================================================
}


void set_proporsi_nilai(){
    /**
    - fungsi mengubah prosentase nilai UTS, UAS, dan TUBES
    - fungsi akan menerima 3 input prosentase dari user untuk UTS, UAS, dan TUBES
    - fungsi akan mengulang menerima input dari user jika total prosentase != 100
    **/
    int jum;
    //=================================================
    // YOUR CODE STARTS HERE
    do
        {
            cout<< "\n\n input Prosentase Nilai Mahasiswa "<< endl;
            cout<<"inpit prosentase nilai UTS : ";
            cin>> A ;
            cout<<"input prosentase nilai UAS : ";
            cin>> B ;
            cout<<"input prosentase nilai TUBES : ";
            cin>> C ;
            jum = A+B+C;
            if (jum != 100)
                cout<< "INPUTAN HARUS BERJUMLAH 100,SILAHKAN ULANGI"<< endl;
        }
    while(jum!=100);

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
    angka[4]=0;
    cout<<"input standar nilai minimum A: ";
    cin>> angka[0];
    cout<<"input standar nilai minimum B: ";
    cin>> angka[1];
    cout<<"input standar nilai minimum C: ";
    cin>> angka[2];
    cout<<"input standar nilai minimum D: ";
    cin>> angka[3];
    if (angka[0]<angka[1] )
    {
        cout<<"inputan salah";
        set_standar();
    }
    else if (angka[1]<angka[2])
    {
        cout<<"inputan salah \n";
        set_standar();
    }
    else if (angka[2]<angka[3])
    {
        cout<<"inputan salah \n";
        set_standar();
    }
    else if (angka[0]>angka[1] && angka[1]>angka[2] && angka[2]>angka[3] )
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
    double hasil;
    //=================================================
    // YOUR CODE STARTS HERE
    //angka[4]=0;

    hasil= (uts*(A/100)+ uas*(B/100)+tubes*(C/100));
    if (hasil > angka[3]) index = 'E';
    if (hasil >= angka[3] && hasil < angka[2]) index = 'D';
    if (hasil >= angka[2] && hasil < angka[1]) index = 'C';
    if (hasil >= angka[1] && hasil < angka[0]) index = 'B';
    if (hasil >= angka[0]) index = 'A';

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
    cout <<"Input Nilai Mahasiswa"<< endl;
    cout <<"Nilai UTS : ";
    cin >> uts;
    cout <<"Nilai UAS : ";
    cin >> uas;
    cout <<"Nilai TUBES : ";
    cin >> tubes;
    index = hitung_index(uts,uas,tubes);
    cout << "         Indeks Nilai mahasiswa adalah : "<< index<<endl;

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
    cout<<"\nSELAMAT DAN SUKSES ATAS NILAINYA"<<endl;
    cout<<"\n\nNIM  :1301154267"<<endl;
    cout<<"NAMA :FAUZI KURNIAWANA"<<endl;

    // YOUR CODE ENDS HERE
    //=================================================
}
