#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        if(n==1&&k==1){
            cout<<"YES\n";
        }
        else if(n%2==0){
            cout<<"YES"<<"\n";
        }
        else{
            if((n-k)%2==0){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}