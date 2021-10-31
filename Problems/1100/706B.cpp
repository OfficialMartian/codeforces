typedef long long int ll;
#define push_back pb
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int temp;
        cin >> temp;
        int *p = upper_bound(a, a + n, temp);
        cout << (p == a + n ? n : p - a) << nl;
    }

    return 0;
}