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
        ll a,b,c;
        cin >> a >> b >> c;
        ll first = a-1;
        ll second = abs(c-b) + (c-1);
        if(first == 0)cout << 1 << endl;
        else if(first < second)cout << 1 << endl;
        else if(first > second)cout << 2 << endl;
        else cout << 3 << endl;
    }
    return 0;
}