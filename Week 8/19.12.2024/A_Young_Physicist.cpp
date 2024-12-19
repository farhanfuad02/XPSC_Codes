#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,a=0,b=0,c=0;
    cin >> n;
    while(n--)
    {
        int a1,a2,a3;
        cin >> a1 >> a2 >> a3;
        a += a1;
        b += a2;
        c += a3;
    }
    if(a==0 && b==0 && c==0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}