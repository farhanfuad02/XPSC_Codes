#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int check_on_off(int n,int k)
{
    return (n>>k)&1;
}

void print_on_off(int n)
{
    for(int k=7; k>=0; k--)
    {
        if(check_on_off(n,k))
        {
            cout << 1 << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n = 45;
    // cout << check_on_off(n,2) << endl;
    print_on_off(n);
    return 0;
}