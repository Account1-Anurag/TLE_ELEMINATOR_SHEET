#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
    vector<char>arr={'A','B','C','D'};
    vector<int>ans;
    int t;
    cin>>t;//test cases
    while(t)
    {
        int store=0;
        map<char,int>count;
        int n;
        cin>>n;//enter n
        string s;
        cin>>s;//string enter karo
        for(int i=0;i<s.length();i++)
        count[s[i]]++;//map mein store kar lo
        for(int i=0;i<arr.size();i++)
        {
            if(count[arr[i]]>=n)
            store+=n;
            else
            store+=count[arr[i]];
        }
        ans.push_back(store);
        t--;
    }
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<endl;
}