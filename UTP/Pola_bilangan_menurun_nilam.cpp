#include <iostream>
using namespace std;


int main() {
   int d, e, f;
    cin >> d >> e >> f;
    
    for (int i = d; i >= e; i+=f) {
        cout << i << " ";
    }
    
    
    
    return 0;
}
