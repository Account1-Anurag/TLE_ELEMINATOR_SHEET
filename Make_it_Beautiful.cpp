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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        int flag=0;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                flag=1;
            }
            else{
                flag=0;
                break;
            }
        }
        if(flag){
            cout<<"NO\n";
        }
        else{
            sort(arr,arr+n,greater<int>());
            swap(arr[1],arr[n-1]);
            cout<<"YES\n";
            for(int i=0;i<n;i++){
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}