/**
    NAMA  : Javiar Fasyah
    NIM   : 1301164477
    KELAS : IF 40-02
**/
//=================================================
// YOUR CODE STARTS HERE
    double hasil, uts, uas, tubes, a, b, c, d, e, ptubes, puts, puas;
// YOUR CODE ENDS HERE
//=================================================
    #include <iostream>
    using namespace std;

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
    int pilihan;
    //=================================================
    // YOUR CODE STARTS HERE
    cout<<" Daftar Menu"<<endl;
    cout<<" 1. Set Standar Index Nilai"<<endl;
    cout<<" 2. Set Proporsi Nilai"<<endl;
    cout<<" 3. Input Nilai"<<endl;
    cout<<" 4. Keluar"<<endl;
    cout<<" Masukan Pilihan : ";
    cin>>pilihan;
    switch(pilihan) {
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
        break; }
    // YOUR CODE ENDS HERE
    //=================================================
    thank_you();
    //thank_you();
}


    void set_proporsi_nilai(){
    //=================================================
    // YOUR CODE STARTS HERE


    do {
    cout<<" Proporsi UTS   : ";
    cin>>puts;
    puts = puts/100;
    cout<<" Proporsi UAS   : ";
    cin>>puas;
    puas = puas/100;
    cout<<" Proporsi TUBES : ";
    cin>>ptubes;
    ptubes = ptubes/100;} while (puts + puas + ptubes == 1);
    main_menu();
    // YOUR CODE ENDS HERE
    //=================================================
}
    void set_standar(){
    //=================================================
    // YOUR CODE STARTS HERE


    cout<<" Minimum Indeks A : ";
    cin>>a;
    cout<<" Minimum Indeks B : ";
    cin>>b;
    cout<<" Minimum Indeks C : ";
    cin>>c;
    cout<<" Minimum Indeks D : ";
    cin>>d;
    cout<<" Minimum Indeks E : ";
    cin>>e;
    main_menu();
    // YOUR CODE ENDS HERE
    //=================================================
}
    char hitung_index(double uts, double uas, double tubes){
    char index;
    //=================================================
    // YOUR CODE STARTS HERE


    hasil = (uts*puts)+(uas*puas)+(tubes*ptubes);
    if(hasil >= a){
        cout<<" Indeks : A"<<endl;
    }
    else if((hasil >= b) && (hasil < a)){
        cout<<" Indeks : B"<<endl;
    }
    else if((hasil >= c) && (hasil < b)){
        cout<<" Indeks : C"<<endl;
    }
    else if((hasil >= d) && (hasil < c)){
        cout<<" Indeks : D"<<endl;
    }
    else {
        cout<<" Indeks : E"<<endl;
    }
    // YOUR CODE ENDS HERE
    //=================================================
    return index; }

    void input_nilai(){
    double uas, uts, tubes;
    //=================================================
    // YOUR CODE STARTS HERE


    cout<<" Input UTS   : ";
    cin>>uts;
    cout<<" Input UAS   : ";
    cin>>uas;
    cout<<" Input TUBES : ";
    cin>>tubes;
    hitung_index(uts, uas, tubes);
    main_menu();
    // YOUR CODE ENDS HERE
    //=================================================
}
    void thank_you(){
    //=================================================
    // YOUR CODE STARTS HERE


    cout<<" Thank You!";
    // YOUR CODE ENDS HERE
    //=================================================
}
