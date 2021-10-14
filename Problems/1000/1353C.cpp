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
        ll n;
        cin >> n;
        n /= 2;
        ll res = 8 * n * (n + 1) * (2 * n + 1) / 6;
        printf("%lld\n", res);
    }
    return 0;
}