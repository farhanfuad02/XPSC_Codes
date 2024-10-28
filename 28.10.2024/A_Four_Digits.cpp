#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    if(s.size()<4)
    {
        int n = 4 - s.size();
        for(int i=0; i<n; i++)
        {
            cout << 0;
        }
        cout << s << endl;
    }
    else
    {
        cout << s << endl;
    }
    return 0;
}