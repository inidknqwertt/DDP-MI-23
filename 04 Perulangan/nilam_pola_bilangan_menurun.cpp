#include <iostream>
using namespace std;

int main () {
    int f, g, h;
    cin >> f >> g >> h;
        
        for (int i = f; i >= g; i+=h) {
        cout << i << " ";   
        }
    return 0;
}
