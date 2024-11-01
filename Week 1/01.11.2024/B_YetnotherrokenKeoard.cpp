#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        stack<int>capital,small;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>='A' && s[i]<='Z' && s[i]!='B')capital.push(i);
            if(s[i]>='a' && s[i]<='z' && s[i]!='b')small.push(i);
            if(s[i]=='B' && !capital.empty())
            {
                int t = capital.top();
                capital.pop();
                s[t] = '$';
            }
            if(s[i]=='b' && !small.empty())
            {
                int t = small.top();
                small.pop();
                s[t] = '$';
            }
        }
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]!='B' && s[i]!='b' && s[i]!='$')
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}