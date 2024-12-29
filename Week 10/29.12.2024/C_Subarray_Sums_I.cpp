#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int l = 0, r = 0; 
    ll curSum = 0;
    int count = 0;
    while (r < n)
    {
        curSum += v[r];
        while (curSum > x && l <= r)
        {
            curSum -= v[l];
            l++;
        }
        if (curSum == x)
        {
            count++;
        }
        r++;
    }
    cout << count << endl;
    return 0;
}
