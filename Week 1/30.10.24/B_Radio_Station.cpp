#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    string s1[n][2],s2[m][2];
    for(int i=0; i<n; i++)
    {
        cin >> s1[i][0] >> s1[i][1];
    }
    for(int i=0; i<m; i++)
    {
        cin >> s2[i][0] >> s2[i][1];
        s2[i][1].pop_back();
        for(int j=0; j<n; j++)
        {
            if(s1[j][1]==s2[i][1])
            {
                cout << s2[i][0] << " " << s2[i][1] << "; #" << s1[j][0] << endl;
            }
        }
    }
    return 0;
}