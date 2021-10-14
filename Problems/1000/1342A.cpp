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
        ll x, y, a, b;
        cin >> x >> y >> a >> b;
        if (y < x)
            swap(x, y);
        ll Acost = (x + y) * a, Bcost = x * b + (y - x) * a;
        cout << min(Acost, Bcost) << endl;
    }
    return 0;
}