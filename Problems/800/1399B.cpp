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
        vector<ll> a(n), b(n);
        ll A = INT_MAX, B = INT_MAX, total = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            A = min(A, a[i]);
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
            B = min(B, b[i]);
        }
        for (int i = 0; i < n; ++i)
        {
            ll d1 = a[i] - A, d2 = b[i] - B;
            total += max(d1, d2);
        }
        cout << total << endl;
    }
    return 0;
}