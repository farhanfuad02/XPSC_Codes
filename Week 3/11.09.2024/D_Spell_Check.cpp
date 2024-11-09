#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin >> x;
    string t = "Timur";
    sort(t.begin(), t.end());
    while (x--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if (s.size() == 5)
        {
            sort(s.begin(), s.end());
            if (s == t)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
