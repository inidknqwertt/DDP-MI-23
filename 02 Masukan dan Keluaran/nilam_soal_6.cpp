#include <iostream>
using namespace std;

int main() {
int f, g;
    cin >> f >> g;
    
    int pembagian = f / g;
    int sisa_bagi = f % g;
    
    cout << "masing-masing " << pembagian << endl;
    cout << "bersisa " << sisa_bagi << endl; 
    return 0;
}