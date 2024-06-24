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
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int count=1;
        for(int i=0;i+1<n;i++){
            if(a[i]!=a[i+1])
              count++;
        }
        if(count==2){
            int count1=1,count2=0;
            int i;
            for(i=0;i+1<n;i++){
                if(a[i]==a[i+1])count1++;
                else break;
            }
            count2=n-count1;
            if(abs(count1-count2)<2)cout<<"Yes\n";
            else cout<<"No\n";
        }
        else if(count==1)cout<<"Yes\n";
        else cout<<"No\n";

    }
    return 0;
}