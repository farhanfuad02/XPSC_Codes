#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    unordered_set<string>st;
    while(n--)
    {
        string s;
        cin >> s;
        if(st.count(s))
        {
            cout << "YES" << endl;
        }
        else
        {
            st.insert(s);
            cout << "NO" << endl;
        }
    }
    return 0;
}