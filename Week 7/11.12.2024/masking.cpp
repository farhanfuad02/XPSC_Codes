#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for(int mask=0; mask<(1<<n); mask++)
    {
        cout << mask << " -> ";
        for(int k=0; k<n; k++)
        {
            if((mask>>k)&1)
            {
                cout << 1 << " ";
            }
            else
            {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}