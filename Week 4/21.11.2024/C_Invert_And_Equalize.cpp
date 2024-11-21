#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int check(string s)
{
    int d = 0;
    char c = s[0];
    for(auto x : s)
    {
        if(x!=c)
        {
            d++;
            c = x;
        }
    }
    d++;
    return (d/2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n==1)cout << 0 << endl;
        else
        {
            int m = check(s);
            cout << m << endl;
        }
    }
    return 0;
}