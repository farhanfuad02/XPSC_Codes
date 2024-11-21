#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y;
    cin >> x >> y;
    if(y>x)cout << "CSK" << endl;
    else
    {
        int d = x-y;
        if(d>=18)cout << "RCB" << endl;
        else cout << "CSK" << endl;
    }
    return 0;
}