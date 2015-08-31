#include <iostream>
using namespace std

int main()
{
  int a,b;
  float hsl;
  char opr;
  string c;
  do {
  cout<< "kalkulator c++";
  cout<< "masukkan angka 1: \n";
  cin>>a;
  cout<< "masukkan angka 2: \n";
  cin>>b;
  cout<< "masukkan perhitungan yang diinginkan:";
  cin>>opr;
  if (opr=='+')
    hsl=a+b;
  else if (opr=='-')
    hsl=a-b;
  else if (opr=='*')
    hsl=a*b;
  else if (opr=='/')
    hsl=a/b;
  cout<< "hasil dari perhitungan adalah:"<<hsl<<".\n";
  cout<< "apakah ada yang ingin dihitung lagi? (ya/tidak)";
  cin>>c;
  }
  while (c!="tidak")
}
