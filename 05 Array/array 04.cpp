#include <iostream>
using namespace std;

int main(){
    int matriks[100][100];
    int jum_baris, jum_kolom, i, j;

    cout << "input jumlah baris matriks: ";
    cin >> jum_baris;

    cout << "input jumllah kolom matriks: ";
    cin >> jum_kolom;
    cout << endl;

    //proses input array
    for(i = 0; i < jum_baris; i++){
        for(j = 0; j < jum_kolom; j++){
            cout << "Baris " <<i+1<<", kolom " <<j+1<< " = ";
            cin >> matriks[i][j];
        }
    cout << endl;
}
    cout << "Hasil matrik: ";

    // menampilkan array
    for(i = 0; i < jum_baris; i++){
        for(j = 0; i < jum_kolom; j++){
        }
    }
    cout << endl;
}