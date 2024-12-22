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
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int jumps = (n - 1) / (a + b + c) * 3;
        int rem = n - (a + b + c) * (jumps / 3);
        if (rem > 0)
        {
            if (rem <= a)
            {
                jumps++;
            }
            else if (rem <= a + b)
            {
                jumps += 2;
            }
            else
            {
                jumps += 3;
            }
        }
        cout << jumps << endl;
    }

    return 0;
}