#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "masukan panjang array yg di ingin kan," << endl << "maka kami akan mengisi array dengan nilai yang acak" << endl;
    cin >> n; 
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = (i*5+3);
    }
    cout << "masukan angka yang di cari\n";
    int x;
    cin >> x; 
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            for (int j = i; j < n-1; j++) {
                arr[j] = arr[j+1];
            }
            n--;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ", ";
    }
}