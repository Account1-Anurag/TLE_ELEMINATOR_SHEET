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
//     ll t;
//     cin>>t;
//     while(t--){
//         ll n;
//         cin>>n;
//         ll maxi=0;
//         ll mini=0;
//         if(n%2!=0||n==2){
//             cout<<"-1\n";
//             continue;
//         }
//         else if((n%4==0)&&(n%6==0)){
//             maxi=(n/4);
//             mini=n/6;
//         }else{
//             if(n%4==0){
//                 if(n==4){
//                     maxi=1;
//                     mini=1;
//                 }
//                 else{
//                 maxi=(n/4);
//                 ll v=(n/6);
//                 ll re=(n%6)/2;
//                 mini+=(v-re);
//                 ll c=(n-(6*mini))/4;
//                 mini+=c;
//                 }
//             }
//             else if(n%6==0){
//                 if(n==6){
//                     maxi=1;
//                     mini=1;
//                 }
//                 else{
//                 mini=(n/6);
//                 ll vv=(n/4);
//                 ll ree=(n%4)/2;
//                 maxi+=(vv-ree);
//                 ll cc=(n-(4*mini))/6;
//                 maxi+=cc;
//                 }
//             }
//             else{
//                 ll v=(n/6);
//                 ll re=(n%6)/2;
//                 mini+=(v-re);
//                 ll c=(n-(6*mini))/4;
//                 mini+=c;
//                 ll vv=(n/4);
//                 ll ree=(n%4)/2;
//                 maxi+=(v-ree);
//                 ll cc=(n-(4*mini))/6;
//                 maxi+=cc;
//             }
//         }
//         cout<<mini<<" "<<maxi<<"\n";

//     }
//     return 0;
// }
