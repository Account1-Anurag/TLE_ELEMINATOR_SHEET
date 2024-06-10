#include <bits/stdc++.h>
using namespace std;
int countDigits(int number) {
    int count = 0;
    if (number < 0) {
        number *= -1;
    }
    string numString = to_string(number);
    count = numString.length();
    return count;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c=countDigits(n);
        int value=((9*(c-1))+1);
        int m=pow(10,(c-1));
        int f=n/m;
        cout<<value+(f-1)<<"\n";
    }
    return 0;
}