#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x;
        string s;
        cin>>x>>s;
        int k;
        for(k=0;k<6;k++){
            if(x.find(s)!=-1){
                cout<<k<<"\n";
                break;
            }
            x+=x;
        }
        if(k==6)cout<<"-1"<<"\n";
    }
    
    return 0;
}