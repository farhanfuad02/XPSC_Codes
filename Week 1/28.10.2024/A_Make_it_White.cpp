#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n,p1=0,p2=0;
        string s;
        cin >> n;
        cin >> s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='B')
            {
                p1 = i;
                // s[i] = 'X';
                break;
            }
        }
        for(int i=p1; i<n; i++)
        {
            if(s[i]=='B')
            {
                p2 = i;
            }
        }
        cout << (p2-p1+1) << endl;
    }
    return 0;
}