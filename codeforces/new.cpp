#include <iostream>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        cout<<(n%2==0?"Sakurako":"Kosuke")<<endl;
    }
    return 0;
}