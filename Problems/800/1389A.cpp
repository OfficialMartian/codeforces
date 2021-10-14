typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, l, r, cnt = 0, cn = 0, ans = 0, sum = 0;
        cin >> x >> y;
        l = x;
        r = 2 * x;
        if (r > y)
            l = -1, r = -1;
        cout << l << " " << r << endl;
    }
    return 0;
}