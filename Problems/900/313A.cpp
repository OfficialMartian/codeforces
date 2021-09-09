typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll n;
    cin >> n;
    if (n >= 0)
    {
        cout << n;
    }
    else
    {
        int ones = abs(n) % 10, tens = abs((n / 10) % 10);
        if (ones >= tens)
        {
            n /= 10;
        }
        else
        {
            n /= 100;
            n = 10 * n - ones;
        }
        cout << n;
    }
    return 0;
}