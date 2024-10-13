#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     vector<pair<int,int>> v;
     for(int i=0; i<n; i++){
          int x,y;
          cin>>x>>y;
          v.push_back({x,y});
     }
     int mx = INT32_MIN;
     for(int i=0; i<n-1; i++){
          v[i+1].second = (v[i].second+v[i+1].second)-v[i+1].first;
          if(v[i].second>mx){
               mx = v[i].second;
          }
     }
     cout<<mx<<endl;
     return 0;
}