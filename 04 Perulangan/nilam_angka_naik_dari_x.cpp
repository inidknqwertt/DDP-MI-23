#include <iostream>
using namespace std;


int main() {
   int k, l;
    cin >> k >> l;
    
    if (k <= l) {
        for (int i = k; i <= l; i++) {
            cout << i << " ";
        }
    } else {
        for ( int i = k; i <= l; i++) {
            cout << i << " ";
        }
    }
     cout<<endl;
    return 0;
}
