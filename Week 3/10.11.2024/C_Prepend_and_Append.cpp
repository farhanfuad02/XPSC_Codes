#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        deque<char> s;
        for (int i = 0; i < n; i++)
        {
            char c;
            cin >> c;
            s.push_back(c);
        }
        while (!s.empty())
        {
            if (s.front() == s.back())
            {
                break;
            }
            s.pop_front();
            s.pop_back();
        }
        cout << s.size() << endl;
    }
    return 0;
}