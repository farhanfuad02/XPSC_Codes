#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int m = 0,count=0,ans=0;
    while(n--)
    {
        int x;
        cin >> x;
        
        if(x>=m)
        {
            m = x;
            count++;
            ans = max(ans,count);
        }
        else
        {
            m = x;
            ans = max(ans,count);
            count = 1;
        }
        
    }
    cout << ans << endl;
    return 0;
}