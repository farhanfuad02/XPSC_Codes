#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin >> x;
    int cnt = 0;
    int v[3] = {1,2,4};
    for(int i=0; i<3; i++)
    {
        if(x>=v[i])
        {
            cnt++;
            x-=v[i];
        }
        else break;
    }
    cout << cnt << endl;
    return 0;
}