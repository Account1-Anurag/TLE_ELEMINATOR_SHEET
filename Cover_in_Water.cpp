#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int v=0;
        int flag=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                v++;
            }
            else{
                v=0;
            }
            if(v==3){
                flag=1;
                continue;
            }
        }
        int m=0;
        for(int i=0;i<n;i++){
            if(s[i]=='#'){
                m++;
            }
        }
        if(flag){
            cout<<"2\n";
        }else
        cout<<n-m<<"\n";
    }
    return 0;
}