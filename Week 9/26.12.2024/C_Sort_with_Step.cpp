#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int func()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    map<int, int> m2;

    for (auto &x : v)
    {
        cin >> x;
    }
    vector<int> temp = v;
    sort(temp.begin(), temp.end());

    map<int, set<int>> m;
    for (int i = 0; i < n; i++)
    {
        m[i % k].insert(v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        auto check = m[i % k];
        if (check.find(temp[i]) == check.end())
        {
            m2[i % k]++;
        }
    }
    if (m2.size() == 0)
    {
        cout << "0" << endl;
        return 0;
    }

    int count = 0;
    for (auto x : m2)
    {
        if (x.second == 1)
        {
            count++;
        }
        else
        {
            count += 100;
        }
    }
    if (count == 2)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        func();
    }
    return 0;
}
