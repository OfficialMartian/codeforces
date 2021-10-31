typedef long long int ll;
#define push_back pb
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c;
    cin >> n >> c;
    int a[n], max = 0;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n - 1; i++)
        if (a[i] - a[i + 1] - c > max)
            max = a[i] - a[i + 1] - c;
    cout << max << nl;
    return 0;
}