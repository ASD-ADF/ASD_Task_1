#include <conio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

int main (){
        int a;
        int b;
        int hasil;
        int operasi;

        cout<<("Angka Pertama : ");
        cin>>a;
        cout<<("Angka Kedua : ");
        cin>>b;

        cout<<("Operator : ")<<endl;
        cout<<("1. Tambah")<<endl;
        cout<<("2. Kurang")<<endl;
        cout<<("3. Kali")<<endl;
        cout<<("4. Bagi")<<endl;
        cout<<("Operator yang Anda pilih: ");
        cin>>operasi;

        switch(operasi){
        case 1:
            hasil = a+b;
        break;
        case 2:
            hasil = a-b;
        break;
        case 3:
            hasil = a*b;
        break;
        case 4:
            hasil = a/b;
        break;
        }
        cout<<"Hasil : "<<hasil;
}
