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
        string s;
        cin >> s;
        if(count(s.begin(),s.end(),'1')==n || count(s.begin(),s.end(),'0')==n)
        {
            cout << n << endl;
        }
        else cout << 1 << endl;
    }
    return 0;
}