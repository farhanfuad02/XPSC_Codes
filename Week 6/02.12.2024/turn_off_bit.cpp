#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int turn_off_bit(int n,int k)
{
    return (n & ~(1<<k));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 45;
    cout << turn_off_bit(n,3) << endl;
    return 0;
}