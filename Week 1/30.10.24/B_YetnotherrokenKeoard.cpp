#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        string s,result;
        cin >> s;
        for(auto c : s)
        {
            if(c=='b')
            {
                int pos = -1;
                for(int i=result.size()-1; i>=0; i--)
                {
                    if(result[i]>='a' && result[i]<='z')
                    {
                        pos = i;
                        break;
                    }
                }
                if(pos!=-1)
                {
                    result.erase(pos,1);
                }
            }
            else if(c=='B')
            {
                int pos = -1;
                for(int i=result.size()-1; i>=0; i--)
                {
                    if(result[i]>='A' && result[i]<='Z')
                    {
                        pos = i;
                        break;
                    }
                }
                if(pos!=-1)
                {
                    result.erase(pos,1);
                }
            }
            else
            {
                result += c;
            }
        }
        cout << result << endl;
    }
    return 0;
}