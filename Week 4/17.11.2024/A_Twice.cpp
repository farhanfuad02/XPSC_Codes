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
        int n,total=0;
        cin >> n;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            int m;
            cin >> m;
            mp[m]++;
        }
        for(auto [x,y] : mp)
        {
            total += y/2;
        }
        cout << total << endl;
    }
    return 0;
}