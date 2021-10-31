typedef long long int ll;
#define push_back pb
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
        cout << (!(360 % (180 - a)) ? "YES" : "NO") << nl;
    }
    return 0;
}