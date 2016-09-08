/**
    NAMA  : Egriano Aristianto
    NIM   : 1301150043
    KELAS : IF 39-01
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
double proputs, propuas, proptubes = 0;
double grade[4];

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
while(pilihan !=4)
{
    cout<<"1. Set standar index nilai\n2. set proporsi nilai\n3. input nilai\n4. keluar\nPilih:";
    cin>>pilihan;
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
    }
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
double total;
do
{
    cout<<"Silahkan masukan proporsi nilai (dalam persen)" << endl;
    cout<<"Proporsi UTS: ";
    cin>>proputs;
    cout<<"Proporsi UAS: ";
    cin>>propuas;
    cout<<"Proporsi Tubes: ";
    cin>>proptubes;
    total=proputs+propuas+proptubes;
    if (total != 100)
        cout<<"Input salah, total input tidak boleh melebihi 100, silahkan coba lagi"<<endl;
}
while(total !=100);

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
for (int i=0; i<5; i++)
    grade[i]=0;
do
{
    cout<<"Silahkan masukan Grade dibawah ini"<<endl;
    cout<<"Grade D= ";
    cin>>grade[1];
    if(grade[0]<grade[1])
    {
        cout<<"Grade C= ";
        cin>> grade[2];
        if (grade[1] < grade[2])
        {
            cout<<"Grade B= ";
            cin>>grade[3];
            if(grade[2] < grade[3])
            {
                cout<<"Grade A= ";
                cin>>grade[4];

            }
        }
    }
for (int i=0; i<5; i++)
{
    if (grade[i]>100)
        grade[i]=0;
}
if(grade[4]==0)
{
    cout<<"Input salah, silahkan ulangi lagi"<<endl;
}
}
while(grade[4]==0);

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
total = (uts*(proputs/100))+(uas*(propuas/100))+(tubes*(proptubes/100));
if (total < grade[1]) index = 'E';
if (total >= grade[1] && total < grade[2]) index ='D';
if (total >= grade[2] && total < grade[3]) index ='C';
if (total >= grade[3] && total < grade[4]) index ='B';
if (total >=grade[4]) index ='A';

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
    char indeks;
    //=================================================
    // YOUR CODE STARTS HERE
cout<<"Masukan nilai UTS: ";
cin >> uts;
cout<<"Masukan nilai UAS: ";
cin>>uas;
cout<<"Masukan nilai Tubes: ";
cin>>tubes;
indeks = hitung_index(uts,uas,tubes);
cout<<"Index dari nilai anda adalah" <<indeks << endl;

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
cout<<"Terima kasih telah menggunakan aplikasi ini"<<endl;
cout<<"Saya Egriano Aristianto dengan NIM 1301150043"<<endl;

    // YOUR CODE ENDS HERE
    //=================================================
}
