typedef long long int ll;
#define push_back pb
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;
bool ok(ll n)
{
    ll temp = n;
    while (n)
    {
        int k = n % 10;
        if (k == 0)
        {
            n = n / 10;
            continue;
        }
        if (temp % k)
            return false;
        n /= 10;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        while (!ok(n))
            n++;
        cout << n << nl;
    }
    return 0;
}