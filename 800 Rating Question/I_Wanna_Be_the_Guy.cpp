#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; // Number of levels in the game
    cin >> n;

    int p; 
    cin >> p;
    set<int> levels; 
    for (int i = 0; i < p; i++) {
        int level;
        cin >> level;
        levels.insert(level);
    }

    int q; 
    cin >> q;
    for (int i = 0; i < q; i++) {
        int level;
        cin >> level;
        levels.insert(level);
    }

    // Check if the combined set of levels has all levels from 1 to n
    if (levels.size() == n) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
