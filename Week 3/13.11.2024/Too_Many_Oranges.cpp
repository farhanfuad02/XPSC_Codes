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
        int s1 = n*10;
        int s2 = n*12;
        if(k>=s1 && k<=s2)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}