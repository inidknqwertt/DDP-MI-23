#include <iostream>
using namespace std;

int main() {
    int d, k;
    cin >> d >> k;
    int matriks[d][k];
    
    for(int i = 0; i < d; i++){
        for(int j = 0; j < k; i++){
            cin >> matriks[d][k];
        }
    }
    for(int i = d - 1; i >= 0; i--){
        for(int j = k -1; j >= 0; i--){
        cout << matriks[d][k] << " ";
        } 
    }
      cout << endl;
    
    return 0;
}
