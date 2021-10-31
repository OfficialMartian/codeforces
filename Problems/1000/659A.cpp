typedef long long int ll;
#define push_back pb
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, n;
    cin >> n >> a >> b;
    a += b;
    if (b >= 0)
        a = a % n;
    else
    {
        if (a <= 0)
            a = n - (abs(a) % n);
    }
    if (a == 0)
        a = n;
    cout << a << nl;
    return 0;
}