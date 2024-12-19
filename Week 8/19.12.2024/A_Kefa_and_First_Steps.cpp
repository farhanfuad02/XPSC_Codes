#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int m=0,c=0,last=0;
    while(n--)
    {
        int x;
        cin >> x;
        if(x>=m)
        {
            m = x;
            c++;
        }
        else
        {
            m = x;
            last = max(last,c);
            c=0;
        }
    }
    cout << c << endl;
    return 0;
}