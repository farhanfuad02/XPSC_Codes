#include<bits/stdc++.h>
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
        int m = 100-x;
        if(m%10==0)
        {
            cout << m << endl;
        }
        else
        {
            int a = m/10;
            cout << a*10 << endl;
        }
    }
    return 0;
}