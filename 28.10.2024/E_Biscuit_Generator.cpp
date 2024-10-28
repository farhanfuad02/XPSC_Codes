#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    float a,b,t;
    cin >> a >> b >> t;
    float total = 0,i = 1,ini = a;
    while(ini <= (t+0.5))
    {
        total += b;
        i++;
        ini = a*i;
    }
    cout << total << endl;
    return 0;
}