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
        int sum = 0;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        int tt = (n+1)*100*0.5;
        if(sum >= tt)
        {
            cout << 0 << endl;
        }
        else if(sum+100<tt)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << tt-sum << endl;
        }
    }
    return 0;
}