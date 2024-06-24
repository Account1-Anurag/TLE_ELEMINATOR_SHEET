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
        int arr[n];
        int v=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==0)v++;
        }
        if(v%2!=0){
            cout<<"-1"<<"\n";
        }
        else{
            int m=v/2;
            int c=0;
            for(int i=0;i<n;i++){
                if(arr[i]==2)c++;
                if(c==m){
                    cout<<i+1<<"\n";
                    break;
                }
            }
        }
        
    }
    return 0;
}