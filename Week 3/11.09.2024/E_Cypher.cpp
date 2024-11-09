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
        vector<int>v(n),v2(n);
        vector<pair<int,string>>v1(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        for(int i=0; i<n; i++)
        {
            cin >> v1[i].first >> v1[i].second;
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<v1[i].first; j++)
            {
                if(v1[i].second[j]=='D')
                {
                    v[i] = v[i]+1;
                    if(v[i]>9)v[i]=0;
                }
                else if(v1[i].second[j]=='U')
                {
                    v[i] = v[i]-1;
                    if(v[i]<0)v[i]=9;
                }
            }
        }
        for(auto x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}