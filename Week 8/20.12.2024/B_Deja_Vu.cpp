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
        int n,q;
        cin >> n >> q;
        vector<int>a(n),x(q);
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i=0; i<q; i++)
        {
            cin >> x[i];
        }

        set<int>st;

        for(int i=0; i<q; i++)
        {
            if(st.count(x[i]))
            {
                continue;
            }
            st.insert(x[i]);
            for(int j=0; j<n; j++)
            {
                int d = pow(2,x[i]);
                if(a[j]%d==0)
                {
                    a[j] += pow(2,x[i]-1);
                }
            }
        }
        for(auto m : a)
        {
            cout << m << " ";
        }
        cout << endl;
    }
    return 0;
}