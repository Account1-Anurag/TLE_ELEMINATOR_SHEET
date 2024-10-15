#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    while(q--) {
        string s, t;
        cin >> s >> t;
        int m = min(s.length(), t.length());
        int n = max(s.length(), t.length());
        int i = 0;
        while(i < m && s[i] == t[i]) i++;
        cout << m + n - i + ((i) ? 1 : 0) << endl;
    }
    return 0;
}