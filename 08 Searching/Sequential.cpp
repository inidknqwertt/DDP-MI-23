#include <iostream>
using namespace std;

int main(){
    int n, cari;
    bool ketemu = false;

    //menentukan panjang arra
    cout << "Input jumlah data: ";
    cin >> n;
    cout << endl;

    int list_data[n];


    //menentukan nilai kedalam array
    for(int i = 0; i < n; i++)
        cout << "Input data ke-" << i << ": ";
        cin >> list_data[i];

    cout << endl;

    //menentukan nilai yang ingin dicari
    cout << "Input bilangan yang dicari: ";
    cin >> cari;
    cout << endl;

    // Mencari dengan Squential Search
    for(int i = 0; i < n; i++) {
        if (list_data[i] == cari){
            ketemu = true;
            cout << "Data ditemukan pada index ke-" << i;
            break;
        }
    }

    if (!ketemu)
     cout << "Data tidak ditemukan";
}
