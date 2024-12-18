#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,n) for(ll i = 0; i < n; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define nl cout<<endl
#define arrin(i,arr,n); for(int i=0;i<n;i++){ cin >> arr[i]; }
#define arrout(i,arr,n); for(int i=0;i<n;i++){ cout << arr[i]; }
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
int main(){
    fast_cin();
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        if (n % 2 == 0) {
            cout << n / 2 << " " << n / 2 << "\n";
            continue;
        }

        ll largestDivisor = 1; // Start with 1 as the largest divisor
        // Find the largest divisor of n less than or equal to sqrt(n)
        for (ll i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                // If n is divisible by i, then check both i and n/i
                if (i <= n / 2) {
                    largestDivisor = max(largestDivisor, i);
                }
                if (n / i <= n / 2) {
                    largestDivisor = max(largestDivisor, n / i);
                }
            }
        }

        // Output the largest divisor and its complement
        cout << largestDivisor << " " << n - largestDivisor << "\n";
    }
    return 0;
}