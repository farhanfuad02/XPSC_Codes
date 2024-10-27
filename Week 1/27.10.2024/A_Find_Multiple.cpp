#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a,b,c,r=-1;
    cin >> a >> b >> c;
    for(int i=a; i<=b; i++)
    {
        if(i%c==0)
        {
            r = i;
        }
    }
    cout << r << endl;
    return 0;
}