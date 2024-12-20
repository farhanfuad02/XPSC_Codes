#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    int even_count = 0, odd_count = 0;
    int even_index = -1, odd_index = -1;

    for (int i = 1; i <= n; i++)
    {
        if (v[i] % 2 == 0)
        {
            even_count++;
            even_index = i;
        }
        else
        {
            odd_count++;
            odd_index = i;
        }
    }

    if (even_count == 1)
    {
        cout << even_index << endl;
    }
    else
    {
        cout << odd_index << endl;
    }

    return 0;
}