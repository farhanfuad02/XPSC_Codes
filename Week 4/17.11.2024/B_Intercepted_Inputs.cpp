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
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        for(int i=0; i<n; i++)
        {
            if((n-2)%v[i]==0)
            {
                cout << (n-2)/v[i] << " " << v[i] << endl;
                break;
            }
        }
    }
    return 0;
}