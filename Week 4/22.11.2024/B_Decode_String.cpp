#include<bits/stdc++.h>
#define ll long long int
using namespace std;

char x(int i)
{
    return 'a' + i - 1;
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
        string s,m;
        cin >> n >> s;
        int i=n-1;
        while(i>=0)
        {
            if(s[i]!='0')
            {
                m += x(s[i]-'0');
                i--;
            }
            else
            {
                m += x(stoi(s.substr(i-2,2)));
                i -= 3;
            }
        }
        reverse(m.begin(),m.end());
        cout << m << endl;
    }
    return 0;
}