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
        ll a[3];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        if (a[0] + a[1] >= a[2] - 1)
            cout << "Yes" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}