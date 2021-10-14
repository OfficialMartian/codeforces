typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{

    ll n, k, maxJoy = INT_MIN;
    cin >> n >> k;
    ll f[n], t[n];
    for (ll i = 0; i < n; ++i)
    {
        cin >> f[i] >> t[i];
        if (t[i] > k)
            maxJoy = maxJoy > (f[i] - t[i] + k) ? maxJoy : (f[i] - t[i] + k);
        else
            maxJoy = maxJoy > f[i] ? maxJoy : f[i];
    }
    cout << maxJoy;
    return 0;
}