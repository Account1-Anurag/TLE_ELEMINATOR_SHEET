
#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, n) for (ll i = 0; i < n; i++)
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

class cmp {
public:
    bool operator()(pair<int, int> &p1, pair<int, int> &p2) {
        int a = p1.first, b = p1.second;
        int c = p2.first, d = p2.second;
        if(a!=c) return a>c;
        else return b<d;
        }
};

int main() {
    fast_cin();
    int tc;
    cin >> tc;
    while (tc--) {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        vector<pair<int, int>> p;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] < k) {
                // If health is less than k, keep it as is
            } else if (arr[i] % k == 0) {
                arr[i] = k;
            } else {
                arr[i] %= k;
            }
            p.push_back({arr[i], i});
        }

        sort(p.begin(), p.end(), cmp());

        for (auto &c : p) {
            cout << c.second + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}
