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
        int x;
        cin >> x;
        if(x>=127)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}