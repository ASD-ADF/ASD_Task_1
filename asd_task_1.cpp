/**
    NAMA  :Adhyfa Fahmy Hidayat
    NIM   :1301154127
    KELAS :IF3901
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
double j,k,l;
double nilai[4];

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
      3. input nilai//int i,n;
      4. keluar
    - fungsi meminta input pilihan menu dari user
      dan memanggil fungsi menu yang dipilih
    **/

    int pilihan;
    //=================================================
    // YOUR CODE STARTS HERE
    while(pilihan!=4)
    {
        cout<<"Daftar Menu: "<<endl;
        cout<<"1. set standar index nilai"<<endl;
        cout<<"2. set proporsi nilai"<<endl;
        cout<<"3. input nilai"<<endl;
        cout<<"4. keluar"<<endl;
        cout<<"\n masukkan nomor pilihan: "<<endl;
        cin>>pilihan;
        switch (pilihan)
        {
        case 1:
            set_standar();
            break;
        case 2:
            set_proporsi_nilai();
            break;
        case 3:
            input_nilai();
            break;//int i,n;
        case 4:
            thank_you();
            break;
        }

        // YOUR CODE ENDS HERE
        //=================================================
    }
}
void set_standar()
{
    /**
    - fungsi mengubah standar index A, B, C, D, dan E
    - fungsi akan menerima input rentang nilai untuk masing-masing index nilai
    - fungsi akan mengulang menerima input dari user jika terdapat nilai yang overlap
    **/
    //int i,n;//int i,n;
    //=================================================
    // YOUR CODE STARTS HERE
    nilai[4]=0;
    cout<<"masukkan nilai minimum A: ";
    cin>>nilai[0];
    cout<<"masukkan nilai minimum B: ";
    cin>>nilai[1];
    cout<<"masukkan nilai minimum C: ";
    cin>>nilai[2];
    cout<<"masukkan nilai minimum D: ";
    cin>>nilai[3];
    if (nilai[0]<nilai[1])
    {
        cout<<"nilai yang dimasukkan salah";
        set_standar();
    }//int i,n;
    else if(nilai[1]<nilai[2])
    {
        cout<<"nilai yang dimasukkan salah";
        set_standar();
    }
    else if(nilai[2]<nilai[3])
    {
        cout<<"nilai yang dimasukkan salah";
        set_standar();
    }
    else if (nilai[0]>nilai[1] && nilai[1]>nilai[2] && nilai[2]>nilai[3] )
    {
        main_menu();
    }
}
// YOUR CODE ENDS HERE
//=================================================



void set_proporsi_nilai()
{
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
        cin>> j ;
        cout<<"masukan prosentase nilai UAS : ";
        cin>> k ;
        cout<<"masukan prosentase nilai TUBES : ";
        cin>> l ;
        jum = j+k+l;
        if (jum != 100)
            cout<< "inputan anda harus bernilai 100 silahkan ulangi lagi"<< endl;
    }
    while(jum!=100);



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
    double tot;
    //=================================================
    // YOUR CODE STARTS HERE
    tot = (uts*(j/100) + uas*(k/100) + tubes*(l/100));
    if (tot < nilai[3]) index = 'E';
    if (tot >= nilai[3] && tot < nilai[2]) index = 'D';
    if (tot >= nilai[2] && tot < nilai[1]) index = 'C';
    if (tot >= nilai[1] && tot < nilai[0]) index = 'B';
    if (tot >= nilai[0]) index = 'A';

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
    cout<<"\n ~ThankYou~ "<< endl;
    cout<<"\n This program was created by \n\nName : Adhyfa Fahmy Hidayat\nNIM  : 1301154127"<<endl;


    // YOUR CODE ENDS HERE
    //=================================================
}
