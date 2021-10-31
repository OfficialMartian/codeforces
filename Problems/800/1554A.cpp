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
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        ll ans = INT_MIN;
        for (int i = 0; i < n - 1; i++)
            ans = max(a[i] * a[i + 1], ans);
        cout << ans << endl;
    }
    return 0;
}