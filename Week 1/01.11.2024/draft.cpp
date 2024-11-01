#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    unordered_set<int>u;
    while(n--)
    {
        int x;
        cin >> x;
        u.insert(x);
    }
    for(auto it : u)
    {
        cout << it << " ";
    }
    return 0;
}