#include <bits/stdc++.h> 
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        ll ans = 0;
        int c = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] <= q) {
                c++;
            } else {
                if (c >= k) {
                    ll valid_length = c - k + 1; 
                    ans += (valid_length * (valid_length + 1)) / 2; 
                }
                c = 0;
            }
        }
        if (c >= k) {
            ll valid_length = c - k + 1;
            ans += (valid_length * (valid_length + 1)) / 2;
        }
        cout << ans << "\n";
    }
    return 0;
}
