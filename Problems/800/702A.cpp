typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll k, n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll count = 1, max = 1;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
            count++;
        else
        {
            if (count > max)
                max = count;
            count = 1;
        }
    }
    if (count > max)
        max = count;
    cout << max;
    return 0;
}