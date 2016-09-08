/**
    NAMA  :Debora N Silaban
    NIM   :1301154575
    KELAS :if 39-01
**/


#include <iostream>

using namespace std;

/**
    - daftarkan seluruh variable global yang dibutuhkan di sini
**/
//=================================================
// YOUR CODE STARTS HERE
double peruts,peruas,pertubes;
int a,b,c,d;


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
    cout<<"daftar menu:"<<endl;
    cout<<"1.Set standar nilai index nilai"<<endl;
    cout<<"2.set proporsi nilai"<<endl;
    cout<<"3.input nilai"<<endl;
    cout<<"4.Keluar"<<endl;
    cout<<"masukkan pilihan:'";
    cin>>pilihan;
    switch(pilihan)
{
case 1:
        set_standar();
        break;
case 2:
    set_proporsi_nilai();
    break;
case 3:
    input_nilai();
    break;
case 4:
    thank_you();
    break;


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
    //=================================================
    // YOUR CODE STARTS HERE
cout<<"input persentase dalan persen"<<endl;
cout<<"masukkan persentase UTS:";
cin>>peruts;
cout<<"Masukkan persentase UAS:";
cin>>peruas;
cout<<"masukkan persentase TUBES:";
cin>>pertubes;
if ((peruts+peruas+pertubes)!=100)
{
    cout<<"Tolal input persentase !=100,silahkan masukkan nilai lagi.";
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
cout<<"masukkan standar minimum A:"; cin>>a;
cout<<"masukkan standar minimum B:"; cin>>b;
cout<<"masukkan standar minimum C:"; cin>>c;
cout<<"masukkan standar minimum D:"; cin>>d;
if (a<=b || b<=c ||c<=d )
    {
        cout<<"input standar minimum yang anda masukkan salah,silahkan ulang";
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
    double ntotal;
    //=================================================
    // YOUR CODE STARTS HERE

ntotal=((uts*(peruts/100))+(uas*(peruas/100))+(tubes*(pertubes/100)));
if (ntotal>=a)
{
    cout<<"indeks nilai anda adalah A";
}
else if (ntotal>=b && ntotal<a)
{
    cout<<"indeks nilai anda adalah B";
}
else if(ntotal>=c && ntotal<b)
{
    cout<<"indeks nilai anda adalah C";
}
else if (ntotal>=d && ntotal<c)
{
    cout<<"indeks nilai anda adalah D";
}
else if (ntotal>=d )
{
    cout <<"indeks nilai anda adalah E";
}
    cout<<endl;
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
    cout<<"masukkan nilai UTS:";
    cin>>uts;
    cout<<"masukkan nilai UAS:";
    cin>>uas;
    cout<<"masukkan nilai TUBES:";
    cin>>tubes;
    hitung_index(uas,uts,tubes);

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
cout<<"terimakasih telah mencoba:)"<<endl;
cout<<"Debora N Silaban"<<endl;
cout<<"1301154575"<<endl;

    // YOUR CODE ENDS HERE
    //=================================================
}

