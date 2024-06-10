#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=arr[0];
    for(int i=1;i<n;i++){
        int d=arr[i]-arr[i-1];
        ans=max(ans,d);
    }
    int v=2*(x-arr[n-1]);
    cout<<max(ans,v)<<"\n";
    }
    return 0;
}