#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    deque<int>dq;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
    }
    sort(dq.begin(),dq.end());
    auto it = dq.begin();
    while(it!=--dq.end())
    {
        if(*it < *(it+1))
        {
            dq.pop_front();
        }
        it++;
    }
    cout << dq.size() << endl;
    return 0;
}