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
        ll n, m, x;
        cin >> n >> m >> x;
        --x;
        ll row = x % n, col = x / n, res = row * m + col + 1;
        printf("%lld\n", res);
    }
    return 0;
}