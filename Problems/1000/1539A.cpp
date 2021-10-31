typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cin >> k;
    while (k--)
    {
        ll n, x, t;
        cin >> n >> x >> t;
        if (t < x)
        {
            cout << 0 << endl;
            continue;
        }
        ll first = t / x;
        if (first >= n - 1)
        {
            ll ans = n - 1;
            ans = (ans * (ans + 1)) / 2;
            cout << ans << endl;
        }
        else
        {
            ll ans = first;
            ans = (ans * (ans + 1)) / 2;
            ll ans1 = (n - 1 - first) * first;
            cout << ans + ans1 << endl;
        }
    }
    return 0;
}