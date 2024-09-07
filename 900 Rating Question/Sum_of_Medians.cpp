#include <bits/stdc++.h> 
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--) {
         int n , k;
        cin>>n>>k;int arr[n*k];
        for(int i=0;i<n*k;i++){
            cin>>arr[i];
        }
        ll sum = 0;
        int i=n*k;
        int mid = n/2+n%2;
        int left = n-mid+1;
        while(k--){
            i-=left;
            sum+=arr[i];
        }
        cout<<sum<<endl;
    }
    
    return 0;
}
