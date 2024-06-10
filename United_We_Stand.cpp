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
        vector<int>b;
        vector<int>c;
        sort(arr,arr+n);
        int m=0;
        b.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]){
                b.push_back(arr[i]);
                
            }
            else{
                m=i;
                break;
            }
        }
        for(int i=m;i<n;i++){
            c.push_back(arr[i]);
        }
        if(n==b.size()){
            cout<<"-1\n";
        }else{
        cout<<b.size()<<" "<<c.size()<<"\n";
        for(int i=0;i<b.size();i++){
            cout<<b[i]<<" ";
        }
        cout<<"\n";
        for(int i=0;i<c.size();i++){
            cout<<c[i]<<" ";
        }
        cout<<"\n";
        }


    }
    return 0;
}