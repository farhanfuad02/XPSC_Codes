#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int turn_on_bit(int n,int k)
{
    return (n | (1<<k));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 45;
    cout << turn_on_bit(n,4) << endl;
    return 0;
}