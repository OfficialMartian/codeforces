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
        int n;
        cin >> n;
        ll a[n], total = 0;
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < n; ++i)
        {
            if (a[i] > 0)
                total += a[i];
            else if (a[i] < 0)
            {
                ll k = min(total, -a[i]);
                a[i] += k;
                total -= k;
            }
        }
        total = 0;
        for (int i = 0; i < n; ++i)
            if (a[i] < 0)
                total += abs(a[i]);
        cout << total << endl;
    }
    return 0;
}