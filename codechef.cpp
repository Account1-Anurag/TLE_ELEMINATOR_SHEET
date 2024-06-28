#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    vector<int>b(n+1,0);
	   for(int i=0;i<n;i++){
	       int c=arr[i];
	       b[c]=b[c]+1;
	   }
	   for(int i=0;i<n+1;i++){
	       cout<<b[i]<<" ";
	   }
	   cout<<"\n";
	    
	}

}
