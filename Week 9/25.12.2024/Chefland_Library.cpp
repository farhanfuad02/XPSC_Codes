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
        unordered_map<int,int>penalty;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            int p=i+1;
            if(penalty[v[i]]<p)
            {
                penalty[v[i]]=p;
            }
        }
        int total=0;
        for(auto m:penalty)
        {
            total += m.second;
        }
        cout << total << endl;
    }
    return 0;
}