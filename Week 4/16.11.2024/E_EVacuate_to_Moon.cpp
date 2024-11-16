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
        int car,powerOutlet,hr;
        cin >> car >> powerOutlet >> hr;
        vector<int>EnergyCapacity(car);
        vector<int>powerOutletCapacity(powerOutlet);
        for(int i=0; i<car; i++)
        {
            cin >> EnergyCapacity[i];
        }
        for(int i=0; i<powerOutlet; i++)
        {
            cin >> powerOutletCapacity[i];
        }
        sort(EnergyCapacity.begin(),EnergyCapacity.end(),greater<>());
        sort(powerOutletCapacity.begin(),powerOutletCapacity.end(),greater<>());
        int total = 0;
        for(int i=0; i<min(car,powerOutlet); i++)
        {
            if(powerOutletCapacity[i]*hr > EnergyCapacity[i])
            {
                total += EnergyCapacity[i];
            }
            else
            {
                total += powerOutletCapacity[i]*hr;
            }
        }
        cout << total << endl;
    }
    return 0;
}