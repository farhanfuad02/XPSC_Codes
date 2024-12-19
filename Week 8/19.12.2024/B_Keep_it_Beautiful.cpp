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
        int n,num,f=-1,l=-1;
        cin >> n;
        bool flag = false;
        while(n--)
        {
            cin >> num;
            if(flag)
            {
                if(num>=l && num<=f)
                {
                    l = num;
                    cout << 1;
                }
                else
                {
                    cout << 0;
                }
            }
            else
            {
                if(f==-1)
                {
                    f = num;
                    l = num;
                    cout << 1;
                }
                else if(num >= l)
                {
                    l = num;
                    cout << 1;
                }
                else if(f>=num)
                {
                    l = num;
                    flag = true;
                    cout << 1;
                }
                else{
                    cout << 0;
                }
            }
        }
        cout << endl;
    }
    return 0;
}