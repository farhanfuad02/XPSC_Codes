#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,count=0;
        cin >> n >> x;
        for(int i=1; i<=n; i++)
        {
            if(i!=x && (i+x)%2==0)count++;
        }
        cout << count << endl;
    }
    return 0;
}