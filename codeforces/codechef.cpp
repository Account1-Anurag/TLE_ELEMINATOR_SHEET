#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if(x>z){
            cout<<"-\n";
        }else{
            cout<<"+\n";
        }
    }
    return 0;
}