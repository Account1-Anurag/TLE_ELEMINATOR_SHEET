#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        long long n,m,r,c;
        cin>>n>>m>>r>>c;
      cout<< ((n-r)*m)-(n-r)+(n*m)-((r-1)*m+c)<<endl;
    }
    return 0;
}