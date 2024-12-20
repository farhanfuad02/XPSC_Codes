#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    int count = 0;
    while(t--)
    {
        int m;
        cin >> m;
        count += m;
    }
    int car = (count+3)/4;
    cout << car << endl;
    return 0;
}