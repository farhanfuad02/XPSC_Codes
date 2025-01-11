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
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        int total = 0;
        for(int i=1; i<n; i++)
        {
            total += v[i-1]+v[i];
        }
        cout << total << endl;
    }
    return 0;
}