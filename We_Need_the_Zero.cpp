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

        if (n == 1)
        {
            cout << arr[0] << "\n";
        }

        else
        {
            int v = arr[0];
            for (int i = 1; i < n; i++)
            {
                v = v ^ arr[i];
            }
            for(int i=0;i<n;i++){
                arr[i]=v^arr[i];
            }
            int ans=arr[0];
            for(int i=1;i<n;i++){
                ans=ans^arr[i];
            }
            if(ans==0){
                cout<<v<<"\n";
            }
            else{
                cout<<"-1\n";
            }
        }
    }
    return 0;
}