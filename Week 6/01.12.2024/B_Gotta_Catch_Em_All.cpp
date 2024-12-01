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
        int n,x,y;
        cin >> n >> x >> y;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        int total = 0;
        for(int i=0; i<n; i++)
        {
            if(v[i]*x < y)
            {
                total += v[i]*x;
            }
            else
            {
                total += y;
            }
        }
        cout << total << endl;
    }
    return 0;
}