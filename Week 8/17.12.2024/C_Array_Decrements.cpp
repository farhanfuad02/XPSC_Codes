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
        vector<int>a(n),b(n),d(n);

        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin >> b[i];
        }
        
        bool flag = true;
        for(int i=0; i<n; i++)
        {
            if(a[i]<b[i])
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            for(int i=0; i<n; i++)
            {
                d[i] = a[i] - b[i];
            }
            int m = a[0] - b[0];
            bool f = true;
            for(int i=1; i<n; i++)
            {
                if((a[i]==0 || b[i]==0) && d[i]<m)
                {
                    //nothing
                }
                else if(m!=d[i])
                {
                    f = false;
                    break;
                }
            }
            if(f)cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}