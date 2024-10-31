#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int sz = s.size();
        bool flag = true;
        for (int i = 0; i < sz - 1; i++)
        {
            cout << s[i];
            if (s[i] == s[i + 1] && flag)
            {
                flag = false;
                if (s[i] == 'a')
                    cout << 'b';
                else
                    cout << 'a';
            }
        }
        cout << s[sz - 1];
        if (flag)
        {
            if (s[sz - 1] == 'a')
                cout << 'b';
            else
                cout << 'a';
        }
        cout << endl;
    }
    return 0;
}