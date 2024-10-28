#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, cnt = 0;
    cin>>n;
    set<string> s;
    while(n--){
        string sp, col;
        cin>>sp>>col;

        string st = sp + " " + col;
        s.insert(st);

    }
    cout<<s.size()<<endl;
    return 0;
}