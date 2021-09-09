typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll n, k;
    cin >> n >> k;
    if (n % 2 == 0)
    {
        if (k <= n / 2)
            cout << (k - 1) * 2 + 1;
        else
            cout << (k - n / 2) * 2;
    }
    else
    {
        if (k <= n / 2 + 1)
            cout << k * 2 - 1;
        else
            cout << (k - n / 2 - 1) * 2;
    }
    return 0;
}