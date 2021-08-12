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
        ll n;
        cin >> n;
        ll count = 0;
        for (int digit = 1; digit <= 9; digit++)
        {
            ll current = digit;
            for (int rep = 1; rep <= 10; rep++)
            {
                if (current <= n)
                    ++count;
                else
                    break;
                current = 10 * current + digit;
            }
        }
        cout << count << endl;
    }
    return 0;
}