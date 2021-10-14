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
        ll a, b;
        int count = 0, ans = INT_MAX;
        cin >> a >> b;
        for (int i = 0; i * i <= a; ++i)
        {
            if (b == 1 and i == 0)
                continue;
            count = i;
            ll c = a;
            while (c)
            {
                c /= (b + i);
                count++;
            }
            ans = min(ans, count);
        }
        cout << ans << endl;
    }
    return 0;
}