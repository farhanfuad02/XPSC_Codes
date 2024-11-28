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
        int n,k;
        cin >> n >> k;
        vector<int>v;
        for(int i=0; i<k; i++)
        {
            v.push_back(n-i);
        }
        for(int i=0; i<(n-k); i++)
        {
            v.push_back(i+1);
        }
        for(int i=n-1; i>=0; i--)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
    return 0;
}