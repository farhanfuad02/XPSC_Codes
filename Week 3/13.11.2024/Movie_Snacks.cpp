#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x,y,z;
    cin >> x >> y >> z;
    
    if((z*2+y) < (2*x + y*3))
    {
        cout << (z*2+y) << endl;
    }
    else
    {
        cout << (2*x + y*3) << endl;
    }
    return 0;
}