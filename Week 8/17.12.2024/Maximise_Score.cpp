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
        vector<int>v(n),d(n-1);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        for(int i=0; i<n-1; i++)
        {
            d[i] = abs(v[i]-v[i+1]);
        }
        int score = INT_MAX;
        //first pick
        if(n>=2)
        {
            score = min(score,d[0]);
        }
        //last pick
        if(n>=2)
        {
            score = min(score,d[n-2]);
        }
        //middle pick
        for(int i=1; i<n-1; i++)
        {
            int m = max(d[i-1],d[i]);
            score = min(score,m);
        }
        cout << score << endl;
    }
    return 0;
}