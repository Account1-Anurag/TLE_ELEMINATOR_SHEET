// #include <stdio.h>
// int main() {
//     long long n, k;
//     scanf("%lld %lld", &n, &k);
//     long long c = (n + 1) / 2;
    
//     if (k <= c) {
//         printf("%lld\n", 2 * k - 1);
//     } else {
//         printf("%lld\n", 2 * (k - c));
//     }
//      return 0;
// }
#include<bits/stdc++.h>
using namespace std;

int main(){
	int testCase;
	cin>>testCase;
	for(int t=0;t<testCase;t++){
		int x,y;
		cin>>x;
		//x önemsiz
		cin>>y;
		if(y>=-1){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
}