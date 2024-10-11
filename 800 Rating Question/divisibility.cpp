#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n>=1900){
            cout<<"Division 1\n";
        }else if(1600<=n&&1899>=n){
            cout<<"Division 2\n";
        }else if(1400<=n&&1599>=n){
            cout<<"Division 3\n";
        }else{
            cout<<"Division 4\n";
        }
    }
    return 0;
}