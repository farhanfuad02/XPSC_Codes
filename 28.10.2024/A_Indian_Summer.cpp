#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cin.ignore();
    set<string>st;
    for(int i=0; i<n; i++)
    {
        string s;
        getline(cin,s);
        st.insert(s);
    }
    cout << st.size() << endl;
    return 0;
}