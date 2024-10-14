// #include <bits/stdc++.h> 
// #include <complex>
// #include <queue>
// #include <set>
// #include <unordered_set>
// #include <list>
// #include <chrono>
// #include <random>
// #include <iostream>
// #include <algorithm>
// #include <cmath>
// #include <string>
// #include <vector>
// #include <map>
// #include <unordered_map>
// #include <stack>
// #include <iomanip>
// #include <fstream>
// using namespace std;

// typedef long long ll;
// typedef long double ld;
// typedef pair<ll,ll> p64;
// typedef pair<double,double> pdd;
// typedef vector<ll> v64;
// typedef vector<vector<ll> > vv64;
// typedef vector<vector<p64> > vvp64;
// typedef vector<p64> vp64;
// ll MOD = 998244353;
// double eps = 1e-12;
// #define forn(i,n) for(ll i = 0; i < n; i++)
// #define forsn(i,s,e) for(ll i = s; i < e; i++)
// #define rforn(i,s) for(ll i = s; i >= 0; i--)
// #define rforsn(i,s,e) for(ll i = s; i >= e; i--)
// #define mp make_pair
// #define pb push_back
// #define fi first
// #define se second
// #define nl cout<<endl
// #define arrin(i,arr,n); for(int i=0;i<n;i++){ cin >> arr[i]; }
// #define arrout(i,arr,n); for(int i=0;i<n;i++){ cout << arr[i]; }
// #define INF 2e18
// #define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
// #define all(x) (x).begin(), (x).end()
// #define sz(x) ((ll)(x).size())
// int main(){
//     fast_cin();
//     int t;
//     cin>>t;
//     while(t--){
//         int n,k,q;
//         cin>>n>>k>>q;
//         vector<int>arr(n);
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         int ans=0;
//         int c=0;
//         for(int i=0;i<n;i++)
//         {
//             if(arr[i]<=q){
//                 c++;
//             }else{
//                 if(c>=k){
//                     int f=c-k;
//                     ans+=((c*(c+1))/2);
//                     c=0;
//                 }
//             }
//         }
//         if(c>=k){
//             ans += ((c * (c + 1)) / 2);
//         }
//         cout<<ans<<"\n";
//     }
//     return 0;
// }

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
