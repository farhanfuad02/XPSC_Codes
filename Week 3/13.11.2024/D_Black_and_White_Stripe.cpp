// #include<bits/stdc++.h>
// #define ll long long int
// using namespace std;
// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n,k;
//         cin >> n >> k;
//         string s;
//         cin >> s;
//         int l=0,r=0,ans=0,chk=0;
//         while(r<n)
//         {
//             if(r-l+1==k)
//             {
//                 if(s[l]!='B')
//                 {
//                     ans++;
//                 }
//                 l++,r++;
//             }
//             else
//             {
//                 r++;
//             }
            
            
//         }
//         cout << ans << endl;
//     }
//     return 0;
// }
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        // Initial count of 'W's in the first window of length k
        int currentConversions = 0;
        for (int i = 0; i < k; i++) {
            if (s[i] == 'W') currentConversions++;
        }
        
        // Initialize minimum number of conversions needed
        int minConversions = currentConversions;

        // Slide the window across the string
        for (int i = k; i < n; i++) {
            // Add the new character to the window
            if (s[i] == 'W') currentConversions++;
            // Remove the character that goes out of the window
            if (s[i - k] == 'W') currentConversions--;
            
            // Update the minimum conversions needed
            minConversions = min(minConversions, currentConversions);
        }

        cout << minConversions << endl;
    }

    return 0;
}
