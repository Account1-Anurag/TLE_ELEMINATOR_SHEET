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
        int c = 0;
        int ans = 0;
        int flag = 0;
        int one = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 0)
            {
                c++;
                ans = max(ans, c);
            }
            else
            {
                c = 0;
            }
        }
            cout << ans << "\n";
        
    }
    return 0;
}