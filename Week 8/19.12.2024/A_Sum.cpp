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
        int a,b,c;
        cin >> a >> b >> c;
        if(a+b==c || b+c==a || a+c==b)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}