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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a <= b)
            cout << b;
        else if (c <= d)
            cout << "-1";
        else
        {
            a -= b;
            printf("%lld", b + ((a + c - d - 1) / (c - d) * c));
        }
        cout << endl;
    }
    return 0;
}