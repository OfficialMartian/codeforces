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
        ll n, a, b;
        string s;
        cin >> n >> a >> b >> s;
        ll ans = a * n;
        if (b > 0)
            ans += b * n;
        else
        {
            int total = 0;
            for (int i = 1; i < n; i++)
                if (s[i] != s[i - 1])
                    total++;
            total++;
            ans += ((total / 2) + 1) * b;
        }
        cout << ans << endl;
    }
    return 0;
}