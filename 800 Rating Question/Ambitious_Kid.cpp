#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=abs(arr[i]);
    }
    int ans=arr[0];
    for(int i=1;i<n;i++){
        ans=min(ans,arr[i]);
    }
    cout<<ans<<"\n";
    return 0;
}