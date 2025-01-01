#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    unordered_map<int, int> rem;
    rem[0] = 1;
    long long pre = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        pre += v[i];
        int remainder = (pre % n + n) % n;
        if (rem.find(remainder) != rem.end())
        {
            count += rem[remainder];
        }
        rem[remainder]++;
    }
    cout << count << endl;
    return 0;
}
