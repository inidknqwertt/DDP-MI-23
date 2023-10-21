#include <iostream>
using namespace std;


int main() {
   int n;
    cin >> n;

    if (n < 0 ){
        cout << "Negatif" << endl;
    } else if (n % 2 == 0) {
         cout << "Positif Genap" << endl;
    } else {
        cout << "Positif Ganjil" << endl;
    }
    
    
    return 0;
}
