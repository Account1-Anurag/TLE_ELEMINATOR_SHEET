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
        int dif=arr[1]-arr[0];
        for(int i=2;i<n;i++){
            int f=arr[i]-arr[i-1];
            dif=min(dif,f);
        }
        if(dif<0){
            cout<<"0"<<"\n";
        }
        else if(dif==0){
            cout<<"1"<<"\n";
        }
        else{
            cout<<(dif/2)+1<<"\n";
        }
    }
    return 0;
}