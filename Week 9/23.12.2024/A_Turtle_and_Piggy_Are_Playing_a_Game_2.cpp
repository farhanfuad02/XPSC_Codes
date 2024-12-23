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
        sort(v.begin(),v.end());
        bool tur=true,p=false;
        while(v.size()>1)
        {
            if(tur==true)
            {
                auto it = v.begin();
                v.erase(it);
                tur = false;
                p = true;
            }
            else if(p==true)
            {
                auto it = v.end()-1;
                v.erase(it);
                tur = true;
                p = false;
            }
        }
        cout << v[0] << endl;
    }
    return 0;
}