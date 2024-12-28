#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    unordered_map<char, int> freq;
    for (char c : s)
    {
        freq[c]++;
    }

    int oddCount = 0;
    char oddChar = '\0';
    for (auto p : freq)
    {
        if (p.second % 2 != 0)
        {
            oddCount++;
            oddChar = p.first;
        }
    }

    if (oddCount > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }

    string half = "";
    for (auto &p : freq)
    {
        half += string(p.second / 2, p.first);
    }

    string palindrome = half;
    if (oddCount == 1)
    {
        palindrome += oddChar;
    }
    reverse(half.begin(), half.end());
    palindrome += half;
    cout << palindrome << endl;
    return 0;
}