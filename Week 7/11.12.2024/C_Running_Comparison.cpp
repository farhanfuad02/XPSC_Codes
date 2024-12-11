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
        vector<int>a(n),b(n);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin >> b[i];
        }
        int m = 0;
        for(int i=0; i<n; i++)
        {
            if(min(a[i],b[i])*2 < max(a[i],b[i]))
            {
                continue;
            }
            else m++;
        }
        cout << m << endl;
    }
    return 0;
}