#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,x;
    cin >> n >> x;
    vector<int>v1,v2;
    for(int i=0; i<n; i++)
    {
        int m;
        cin >> m;
        v1.push_back(m);
    }
    for(auto z : v1)
    {
        if(z != x)
        {
            v2.push_back(z);
        }
    }
    for(auto z : v2)
    {
        cout << z << " ";
    }
    return 0;
}