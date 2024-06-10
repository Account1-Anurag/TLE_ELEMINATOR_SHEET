#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        if(x%k==0){
            cout<<"2"<<"\n";
            if(x>0){
            cout<<x-1<<" "<<"1"<<"\n";
            }
            else{
                cout<<x+1<<" "<<"1"<<"\n";
            }
        }
        if(x%k!=0){
            cout<<"1"<<"\n";
            cout<<x<<"\n";
        }
    }
    return 0;
}