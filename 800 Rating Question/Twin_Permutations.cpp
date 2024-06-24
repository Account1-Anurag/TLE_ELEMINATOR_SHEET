#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        
        vector<int> brr;
        // brr.push_back(arr[0] + arr[1]);
        for (int i = 0; i < n; i++)
        {
            brr.push_back((n+1)-arr[i]);
        }
        for(int i=0;i<n;i++){
            cout<<brr[i]<<" ";
        }
        
        cout << "\n";

        
    }
    return 0;
}