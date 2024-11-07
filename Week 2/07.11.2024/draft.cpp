#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int a, b;
    cin >> a >> b;
    auto m1 = find(v.begin(), v.end(), a);
    auto m2 = find(v.begin(), v.end(), b);
    cout << *m1 << " " << *m2 << endl;
    return 0;
}