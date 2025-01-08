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
        int count1 = 0,count2 = 0;
        for(int i=0; i<n; i++)
        {
            if(s1[i]=='1' && s2[i]=='1')
            {
                count1++;
            }
            else if((s1[i]=='1' && s2[i]=='0') || (s1[i]=='0' && s2[i]=='1'))
            {
                count2++;
            }
        }
        if(count1%2==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if(count2>=1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}