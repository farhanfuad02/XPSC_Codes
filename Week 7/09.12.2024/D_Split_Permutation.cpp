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
        int n;
        cin >> n;
        int i=1,j=n;
        if(n%2!=0)
        {
            j--;
        }
        for(int k=0; i<n/2; k++)
        {
            cout << i << " " << j << " ";
            i++,j--;
        }
        if(n%2!=0)cout << n;
        cout << endl;
    }
    return 0;
}