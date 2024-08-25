#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k;
        cin >> n >> k;
        
        if (k == 0) {
            cout << 0 << endl;
            continue;
        }
        
        int diagonals = 0;
        
        if (k <= n) {
            diagonals = k;
        } else {
            diagonals = (k + n - 1) / n; // equivalent to ceil(k / n)
        }
        
        cout << diagonals << endl;
    }
    
    return 0;
}
