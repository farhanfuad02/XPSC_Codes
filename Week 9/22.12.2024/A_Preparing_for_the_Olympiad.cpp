#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<int> dp(n + 1, 0); // dp[i] represents the maximum difference up to day i

        for (int i = 1; i <= n; i++)
        {
            // If Monocarp trains on day i, he solves a[i-1] problems and Stereocarp solves b[i-2] problems (if i > 1)
            dp[i] = max(dp[i], dp[i - 1] + a[i - 1] - (i > 1 ? b[i - 2] : 0));

            // If Monocarp does not train on day i, the difference remains the same as the previous day
            dp[i] = max(dp[i], dp[i - 1]);
        }

        cout << dp[n] << endl;
    }

    return 0;
}