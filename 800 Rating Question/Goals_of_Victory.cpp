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
        
        for (int i = 0; i < n-1; i++)
        {
            cin >> arr[i];
        }
        int sum = 0;
        for (int i = 0; i < n-1; i++)
        {
            sum += arr[i];
        }
        // cout<<sum<<"\n";
        if (sum >= 0)
        {
            cout << (-1) * sum << "\n";
        }
        else
        {
            cout << abs(sum) << "\n";
        }
    }
    return 0;
}