typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int ans = n;
        reverse(s.begin(), s.end());
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '5')
            {
                for (int j = i + 1; j < n; ++j)
                    if (s[j] == '2' || s[j] == '7')
                        ans = min(ans, i + ((j - 1) - i));
            }
            else if (s[i] == '0')
                for (int j = i + 1; j < n; ++j)
                    if (s[j] == '0' || s[j] == '5')
                        ans = min(ans, i + ((j - 1) - i));
        }
        cout << ans << endl;
    }
    return 0;
}