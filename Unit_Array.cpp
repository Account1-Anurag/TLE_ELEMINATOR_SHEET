#include <bits/stdc++.h>
using namespace std;
int main() {
     int t;
     cin>>t;
     while(t--){
        int n;
        cin>>n;
        int ne = 0, po = 0;
        for(int i=0;i<n;i++){
            int x; cin>>x;
            if(x==1) po++;
            else ne++;
        }
        int sum = po-ne, v = 0;
        if(sum<0) v = (abs(sum)+1)/2;
        ne-=v;
        cout<<v+(ne%2)<<endl;
    }    
}