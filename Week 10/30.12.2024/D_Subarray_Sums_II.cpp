#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x;
    cin >> n >> x;
    vector<int>a(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> a[i];
    }
    unordered_map<int,int> pre;
    int currentSum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        currentSum += a[i];

        if (currentSum == x) {
            count++;
        }

        count += pre[currentSum - x];
        pre[currentSum]++;
    }
    cout << count << endl;
    return 0;
}