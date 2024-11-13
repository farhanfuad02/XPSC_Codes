#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double x,y,z;
    cin >> x >> y >> z;
    
    double teamPoint = x*1.0 + y*0.5;
    double opPoint = y*0.5 + z*1.0;
    double rem = 4-x-y-z;
    if(rem*1.0 + teamPoint > opPoint)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}