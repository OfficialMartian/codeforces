typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, c, n, min = 0;
        cin >> a >> b >> c >> n;
        if (a >= b && a >= c)
            min = 2 * a - b - c;
        else if (b >= a && b >= c)
            min = 2 * b - a - c;
        else
            min = 2 * c - a - b;
        if ((n - min) % 3 || n < min)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}