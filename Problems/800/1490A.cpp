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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        ll ans = 0;
        for (ll i = 0; i + 1 < n; i++)
        {
            ll u = a[i], v = a[i + 1];
            if (u > v)
                swap(u, v);
            while (2 * u < v)
            {
                ++ans;
                u *= 2;
            }
        }
        cout << ans << endl;
    }
    return 0;
}