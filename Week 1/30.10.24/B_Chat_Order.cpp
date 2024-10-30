#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    unordered_set<string>us;
    deque<string>dq;
    while(n--)
    {
        string s;
        cin >> s;
        if(us.count(s))
        {
            dq.erase(remove(dq.begin(),dq.end(),s),dq.end());
        }
        dq.push_front(s);
        us.insert(s);
    }
    for(auto x : dq)
    {
        cout << x << endl;
    }

    return 0;
}