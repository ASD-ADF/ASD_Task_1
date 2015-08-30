#include <conio.h>
#include <iostream.h>
int main () {
    float a,b,c,d;
    char e;
    cout<<"Apakah Anda ingin menggunakan kalkulator? (Y/N) : ";
    cin>>e;
    while (e == 'y' || e == 'n' || e == 'Y' || e == 'N') {
        if (e == 'y' || e == 'Y')
                {
                    cout<<endl;
                    cout<<"MENU KALKULATOR\n"<<endl;
                    cout<<"1. PERTAMBAHAN"<<endl;
                    cout<<"2. PENGURANGAN"<<endl;
                    cout<<"3. PERKALIAN  "<<endl;
                    cout<<"4. PEMBAGIAN  \n"<<endl;
                    cout<<"Masukkan pilihan : ";
                    cin>>d;
                    cout<<"Masukkan angka pertama : ";
                    cin>>a;
                    cout<<"Masukkan angka kedua : ";
                    cin>>b;
                        if(d==1) {
                            c=a+b;
                        }
                        else if (d==2) {
                            c=a-b;
                        }
                        else if (d==3) {
                            c=a*b;
                        }
                        else {
                            c=a/b;
                        }
                        cout<<"Hasilnya adalah "<<c<<endl;
                        cout<<endl;
                        cout<<"Apakah Anda ingin menggunakan kalkulator? (Y/N) : ";
                        cin>>e;
                        cout<<endl;
                }


                else if (e == 'n' || e == 'N')
                {
                cout << "TERIMA KASIH" << endl;
                break;
                }

        }
getch();
}
