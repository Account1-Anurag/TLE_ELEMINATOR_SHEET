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
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<ll> v64;
typedef vector<vector<ll>> vv64;
typedef vector<vector<p64>> vvp64;
typedef vector<p64> vp64;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i, n) for (ll i = 0; i < n; i++)
#define forsn(i, s, e) for (ll i = s; i < e; i++)
#define rforn(i, s) for (ll i = s; i >= 0; i--)
#define rforsn(i, s, e) for (ll i = s; i >= e; i--)
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define nl cout << endl
#define arrin(i, arr, n)       \
    ;                          \
    for (ll i = 0; i < n; i++) \
    {                          \
        cin >> arr[i];         \
    }
#define arrout(i, arr, n)      \
    ;                          \
    for (ll i = 0; i < n; i++) \
    {                          \
        cout << arr[i];        \
    }
#define INF 2e18
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        arrin(i, arr, n);
        int maxi = 0;
        int mini = 100000;
        int mi = 0;
        int minm = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > maxi)
            {
                maxi = arr[i];
                mi = i;
            }
            if (arr[i] < mini)
            {
                mini = arr[i];
                minm = i;
            }
        }
        if (minm == 0 && mi == n - 1)
        {
            cout << (maxi - mini) << "\n";
        }
        else
        {
            int a,b, diff,c=0;
            a = maxi - arr[0];
            b = arr[n-1] - mini;
            for(int i=n-1;i>=1;i--){
                int diff = arr[i-1]-arr[i];
                c = max(c,diff);
            }
            cout<<max({a,b,c})<<endl;
        }
    }
    return 0;
}
// // Mainak and Array
// //https://codeforces.com/contest/1726/problem/A
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long 
// #define gcd __gcd
// #define ull unsigned long long
// #define endl "\n"
// int solve(){
// }
// int main() {
// 	int tc;
// 	cin>>tc;
// 	while(tc--){
//         int n;
//         cin>>n;
//         int maxi = -1, mini = 9999;
//         int maxidx, mindx ; int arr[n];
//         for(int i=0;i<n;i++){
//             int x; cin>>x;
//             arr[i] = x;
//             if(x>maxi){
//                 maxi = x;
//                 maxidx = i;
//             }
//             if(x<mini){
//                 mini = x;
//                 mindx = i;
//             }
//         }
//         cout<<maxi<<"\n";
//         cout<<mini<<"\n";
//         if(mindx == 0 or maxidx == n-1) cout<<maxi-mini<<endl;
//         else{
//             int a,b, diff,c=0;
//             a = maxi - arr[0];
//             b = arr[n-1] - mini;
//             for(int i=n-1;i>=1;i--){
//                 int diff = arr[i-1]-arr[i];
//                 c = max(c,diff);
//             }
//             cout<<max({a,b,c})<<endl;
//         }
// 	}
// }