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
        string s1,s2;
        cin >> s1 >> s2;
        size_t p1 = s1.find('G');
        while(p1 != string::npos)
        {
            s1[p1] = 'B';
            p1 = s1.find('G',p1+1);
        }
        size_t p2 = s2.find('G');
        while(p2 != string::npos)
        {
            s2[p2] = 'B';
            p2 = s2.find('G',p2+1);
        }
        if(s1==s2)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}