typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll ans = (n - 1) * n * (n + 1) / 6 + n;
    cout << ans << endl;
    return 0;
}