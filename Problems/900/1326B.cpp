typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    ll b[n], a[n], maxval;
    cin >> b[1];
    cout << b[1] << " ";
    a[1] = b[1];
    maxval = a[1];
    for (int i = 2; i <= n; ++i)
    {
        cin >> b[i];
        a[i] = b[i] + maxval;
        if (maxval < a[i])
            maxval = a[i];
        cout << a[i] << " ";
    }
    return 0;
}