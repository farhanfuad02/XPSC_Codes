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
        int n,even=0,odd=0;
        cin >> n;
        for(int i=1; i<=n; i++)
        {
            if(i%2==0 && n%i==0)even++;
            else if(i%2!=0 && n%i==0)odd++;
        }
        if(even > odd)cout << 1 << endl;
        else if(even < odd)cout << -1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}