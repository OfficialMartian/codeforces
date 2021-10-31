typedef long long int ll;
#define push_back pb
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll l, r;
    cin >> l >> r;
    if (l == r && l % 2)
        cout << l << nl;
    else
        cout << 2 << nl;
    return 0;
}