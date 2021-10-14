typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll n, x, count = 0;
    cin >> n >> x;
    for (ll i = 1; i <= n; i++)
        if (x % i == 0 && i * n >= x)
            count++;
    cout << count;
    return 0;
}