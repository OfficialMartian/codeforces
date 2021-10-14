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
        ll x, y, k;
        cin >> x >> y >> k;
        ll reqStick = k + k * y - 1, trades = 0;
        trades = reqStick / (x - 1);
        if (reqStick % (x - 1))
            trades++;
        cout << trades + k << endl;
    }
    return 0;
}