typedef long long int ll;
#define push_back pb
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    while (1)
    {
        n -= __gcd(a, n);
        if (n == 0)
        {
            cout << 0 << nl;
            break;
        }
        n -= __gcd(b, n);
        if (n == 0)
        {
            cout << 1 << nl;
            break;
        }
    }
    return 0;
}