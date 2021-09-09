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
        ll n, twos;
        cin >> n;
        for (twos = 1; twos <= n; twos *= 2)
            ;
        n = (n * (n + 1) / 2) - 2 * twos;
        cout << n + 2 << endl;
    }
    return 0;
}