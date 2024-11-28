#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int bit_on(int n,int k)
{
    return (n | (1<<k));
}

int bit_off(int n,int k)
{
    return (n & ~(1<<k));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 45;
    cout << bit_off(n,3) << endl;
    cout << bit_on(n,4) << endl;
    return 0;
}