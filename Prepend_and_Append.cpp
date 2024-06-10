#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int m=0;
        for(int i=0,j=n-1;i<n/2;i++,j--){
            if(s[i]!=s[j]){
                m+=2;
            }
            else{
                break;
            }
        }
        cout<<n-m<<"\n";
    }
    return 0;
}