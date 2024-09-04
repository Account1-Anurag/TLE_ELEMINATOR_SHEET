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
#define bin(i,b,n); for(int i=0;i<n;i++){ cin >> b[i]; }
#define bout(i,b,n); for(int i=0;i<n;i++){ cout << b[i]; }
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
int main(){
    fast_cin();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char b[n][4];
        for(int i=0;i<n;i++){
            for(int j=0;j<4;j++){
                cin>>b[i][j];
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<4;j++){
                if(b[i][j]=='#'){
                    ans.push_back(j+1);
                    break;
                }
            }
        }
        reverse(ans.begin(),ans.end());
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}

