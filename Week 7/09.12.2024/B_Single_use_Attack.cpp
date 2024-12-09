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
        int h,x,y;
        cin >> h >> x >> y;
        int sum = y;
        int m = 1;
        while(sum < h)
        {
            sum += x;
            m++;
        }
        cout << m << endl;
    }
    return 0;
}