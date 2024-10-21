#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n,k;
       cin>>n>>k;
       int curr=0;
       int count=0;
       for(int i=0;i<n;i++){
           int temp;
           cin>>temp;
           if(temp==0 and curr>0){
               count++;
               curr--;
           }
           else if(temp>=k){
               curr+=temp;
           }
       }
       cout<<count<<"\n";
    }
}