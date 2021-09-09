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
        ll n, ans = 0;
        cin >> n;
        if (n < 6)
        {
            cout << 15 << endl;
            continue;
        }
        ll x = n / 6, y = n % 6;
        ans = x * 15;
        if (y == 0)
            ans += 0;
        else if (y <= 2)
            ans += 5;
        else if (y <= 4)
            ans += 10;
        else
            ans += 15;
        cout << ans << endl;
    }
    return 0;
}