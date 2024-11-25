#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,x,y,t=0;
    cin >> n >> m >> x >> y;
    t = n*x + m*y;
    cout << t << endl;
    return 0;
}