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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 1e9;
        for(int i='a'; i<='z'; i++)
        {
            int c = 0;
            int l=0,r=n-1;
            while(l<=r)
            {
                if(s[l]!=s[r])
                {
                    if(s[l]==i)
                    {
                        l++;
                        c++;
                    }
                    else if(s[r]==i)
                    {
                        r--;
                        c++;
                    }
                    else
                    {
                        c = 1e9;
                        break;
                    }
                }
                else
                {
                    l++;
                    r--;
                }
            }
            ans = min(ans,c);
        }
        if(ans == 1e9)cout << -1 << endl;
        else cout << ans << endl;
    }
    return 0;
}