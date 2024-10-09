// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;
//         if (a > b)
//         {
//             cout << "First"
//                  << "\n";
//         }
//         else if (b > a)
//         {
//             cout << "Second\n";
//         }
//         else
//         {
//             if (c % 2 == 0)
//             {
//                 cout << "Second\n";
//             }
//             else
//             {
//                 cout << "First\n";
//             }
//         }
//     }
//     return 0;
// }


#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;  // number of test cases
    while (T--) {
        int N, M;
        cin >> N >> M;  // lengths of strings S and T
        string s1, s2;
        cin >> s1 >> s2;

        // Case 1: If the strings are already equal
        if (s1 == s2) {
            cout << 0 << endl;
            continue;
        }

        // Case 2: If strings are of the same length but not equal
        if (N == M) {
            cout << 2 << endl;
            continue;
        }

        // Case 3: Check prefix and suffix matching conditions
        // Ensure S is the larger string and s2 is the smaller string
        if (N < M) {
            int i=0,j=0;
            string temp="";
            while(i<N && j<M){
                if(s2[j]!=s1[i]){
                    break;
                }
                else{
                  temp+=s2[j];
                  j++;i++;
                }
            }
            i=N-1 , j=M-1;
            string temp2="";
            while(i>=0 && j>=0){
                if(s2[j]!=s1[i]){
                    break;
                }
                else{
                  temp2+=s2[j];
                  j--;i--;
                }
            }
            reverse(temp2.begin(),temp2.end());
            temp+=temp2;
            if(temp==s1){
                cout<<1<<"\n";
            }
            else{
                cout<<2<<"\n";
            }
        }
        else{
          int i=0,j=0;
            string temp="";
            while(i<N && j<M){
                if(s1[i]!=s2[j]){
                    break;
                }
                else{
                  temp+=s1[i];
                  j++;i++;
                }
            }
            i=N-1 , j=M-1;
            string temp2="";
            while(i>=0 && j>=0){
                if(s1[i]!=s2[j]){
                    break;
                }
                else{
                  temp2+=s2[i];
                  j--;i--;
                }
            }
            reverse(temp2.begin(),temp2.end());
            temp+=temp2;
            if(temp==s2){
                cout<<1<<"\n";
            }
            else{
                cout<<2<<"\n";
            }
        }
    }

    return 0;
}
