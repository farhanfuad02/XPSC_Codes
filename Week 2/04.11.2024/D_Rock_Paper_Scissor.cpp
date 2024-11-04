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
        int n,chef=0,chefina=0;
        cin >> n;
        string s1,s2;
        cin >> s1 >> s2;
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]=='R' && s2[i]=='S')chef++;
            else if(s1[i]=='S' && s2[i]=='R')chefina++;
            else if(s1[i]=='P' && s2[i]=='S')chefina++;
            else if(s1[i]=='S' && s2[i]=='P')chef++;
            else if(s1[i]=='P' && s2[i]=='R')chef++;
            else if(s1[i]=='R' && s2[i]=='P')chefina++;
        }
        if(chefina > chef)
        {
            cout << (chefina-chef) << endl;
        }
        else if(chefina == chef)
        {
            cout << 1 << endl;
        }
        else cout << 0 << endl;
    }
    return 0;
}