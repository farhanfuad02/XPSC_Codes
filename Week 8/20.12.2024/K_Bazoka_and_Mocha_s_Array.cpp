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
        bool flag = false;
        for(int i=0; i<n; i++)
        {
            flag |= is_sorted(v.begin(),v.end());
            rotate(v.begin(),v.begin()+1,v.end());
        }
        if(flag)cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}