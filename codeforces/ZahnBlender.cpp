#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,x,y;
    cin>>t;
    while(t--){
        cin>>n>>x>>y;
        int p=n/(min(x,y));
        int q=n%(min(x,y));
        if(q) cout<<p+1<<endl;
        else cout<<p<<endl;
    }
}