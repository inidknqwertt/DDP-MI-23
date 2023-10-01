#include <iostream>
using namespace std;


int main() 
{
    int bilangan;
    cin >> bilangan;
    
    if (bilangan >= 0 && bilangan <= 9){
        cout << "Satuan";
    } else if (bilangan >= 10 && bilangan <= 99) {
        cout << "Puluhan";
    } else if (bilangan >= 100 && bilangan <= 999) {
        cout << "Ratusan";
    } else {
        cout << "Tidak Tahu";
    }
}   
