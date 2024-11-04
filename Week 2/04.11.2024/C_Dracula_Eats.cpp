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
        int n,cnt=0;
        cin >> n;
        for(int i=1; i<=n; i++)
        {
            if(i%7==2)cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}