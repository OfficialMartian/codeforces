typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll n, m;
    int count = -1;
    cin >> n >> m;
    if (m % n == 0)
    {
        count = 0;
        ll d = m / n;
        while (d % 2 == 0)
        {
            d /= 2;
            count++;
        }
        while (d % 3 == 0)
        {
            d /= 3;
            count++;
        }
        if (d != 1)
            count = -1;
    }
    cout << count;
    return 0;
}