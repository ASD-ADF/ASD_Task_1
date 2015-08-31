//1301144211 -atika WAHYUGIRINI

#include <iostream>

using namespace std;

main(){
int agk1,agk2;
char oprtr,mn;

mulai :
cout<<"Masukkan bilangan pertama: ";
cin>>agk1;
cout<<"Masukkan bilangan kedua: ";
cin>>agk2;
cout<<"Pilihlah operasi bilangan (+,-,*,/): ";
cin>>oprtr;

if (oprtr=='+'){
    cout<<"Hasilnya adalah = "<<agk1+agk2<<endl;
}

else if (oprtr=='-'){
    cout<<"Hasilnya adalah= "<<agk1-agk2<<endl;
}

else if (oprtr='*'){
    cout<<"Hasilnya adalah= "<<agk1*agk2<<endl;
}

else if (oprtr='/') {
    cout<<"Hasilnya adalah= "<<agk1/agk2<<endl;
}
else {
    cout<<"Perintah tidak tersedia";
}

cout<<"Tekan Y untuk menggunakan kalkulator lagi, dan tekan N untuk mengkahiri program.";
cin>>mn;

if (mn=='y'){
    goto mulai;
}
else if (mn=='n') {
     cout<<"Terimakasih sudah menggunakan program kalkulator.";
}
else {
     cout<<"Error.";
}
}
