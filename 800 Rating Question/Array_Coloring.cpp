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
        int b=0;

        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2!=0){
                b++;
            }
        }
        if(b%2==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }
    return 0;
}