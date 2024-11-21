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
        int x,y;
        cin >> x >> y;
        int d1 = x%3;
        int d2 = y%3;
        cout << max(d1,d2) << endl;
    }
    return 0;
}