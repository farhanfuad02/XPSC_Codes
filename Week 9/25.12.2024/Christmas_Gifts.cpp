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
        int h,l,w;
        cin >> h >> l >> w;
        int vol = 2*(h*l + l*w + h*w);
        int m = 1000/vol;
        cout << m << endl;
    }
    return 0;
}