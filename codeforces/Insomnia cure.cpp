#include <iostream>
using namespace std;

int main() {
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int damagedCount = 0;
    // Loop through all dragons
    for (int i = 1; i <= d; ++i) {
        // Check if the current dragon is damaged by any of the conditions
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) {
            ++damagedCount;
        }
    }

    // Output the number of damaged dragons
    cout << damagedCount << endl;

    return 0;
}
