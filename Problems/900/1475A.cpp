typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    for (ll i = 1; i <= 64; i++)
    {
        if ((1LL << i) == n)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}