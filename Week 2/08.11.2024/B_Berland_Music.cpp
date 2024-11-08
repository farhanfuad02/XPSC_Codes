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
        vector<int>a(n+1),b(n+1),ones,zeros;
        map<int,int>mp;
        for(int i=1; i<=n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
            mp[a[i]] = i;
        }
        string s;
        cin >> s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                zeros.push_back(s[i]);
            }
            else
            {
                ones.push_back(s[i]);
            }
        }
        sort(zeros.begin(),zeros.end());
        sort(ones.begin(),ones.end());
        sort(a.begin(),a.end());

        reverse(zeros.begin(),zeros.end());
        reverse(ones.begin(),ones.end());
        reverse(a.begin(),a.end());
        int i;
        for(i=0; i<ones.size(); i++)
        {
            b[mp[ones[i]]] = a[i];
        }
        for(int j=0; j<zeros.size(); j++)
        {
            b[mp[zeros[j]]] = a[i];
            i++;
        }
        for(int i=0; i<n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
    return 0;
}