typedef long long int ll;
#define push_back pb
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], total = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    total += a[0];
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
            total += abs(a[i + 1] - a[i]);
        total++;
    }
    total += n;
    cout << total << nl;
    return 0;
}