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
        int n,k,x=0;
        cin >> n >> k;
        string s1,s2;
        cin >> s1 >> s2;
        for(int i=0; i<n; i++)
        {
            if(s1[i]!=s2[i])
            {
                s2[i] = s1[i];
                x++;
            }
        }
        if(s1==s2 && x==k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}