#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s,t;
    cin >> s >> t;
    int op = 0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!=t[i])
        {
            op++;
        }
    }
    cout << op << endl;
    return 0;
}