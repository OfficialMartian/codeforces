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
        ll l, r, d;
        cin >> l >> r >> d;
        l--;
        if ((l / d) || (d > r))
            cout << d << endl;
        else
        {
            ll x = r / d;
            x++;
            cout << x * d << endl;
        }
    }
    return 0;
}