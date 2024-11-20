#include <bits/stdc++.h>
using namespace std;

// Fast input/output
void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast_io();

    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; ++i)
            cin >> A[i];
        for (int i = 0; i < N; ++i)
            cin >> B[i];

        // Find the card with the maximum A[i]
        int max_A_idx = 0;
        for (int i = 1; i < N; ++i)
        {
            if (A[i] > A[max_A_idx])
            {
                max_A_idx = i;
            }
        }

        // Check if Alice can win by selecting any card
        bool alice_can_win = false;
        for (int i = 0; i < N; ++i)
        {
            if (i == max_A_idx)
                continue; // Skip the card with maximum A[i]
            int alice_max = max(A[i], B[i]);
            int bob_max = max(A[max_A_idx], B[max_A_idx]);
            if (alice_max > bob_max)
            {
                alice_can_win = true;
                break;
            }
        }

        cout << (alice_can_win ? "Yes" : "No") << '\n';
    }

    return 0;
}
