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
        int n,m;
        cin >> n >> m;
        int a1=0,b1=0,a2=0,b2=0;
        for(int i=0; i<n; i++)
        {
            char c;
            cin >> c;
            if(c=='a')a1++;
            else b1++;
        }
        for(int i=0; i<m; i++)
        {
            char c;
            cin >> c;
            if(c=='a')a2++;
            else b2++;
        }
        if(a1==a2)
        {
            if(b1==b2)
            {
                cout << "Yes" << endl;
            }
            else if(b1<=2*a1 && b2<=2*a2)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else cout << "No" << endl;
    }
    return 0;
}