typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll a, b, s, c;
    cin >> a >> b >> s;
    ll x = abs(a) + abs(b);
    if (x == s)
        c = 1;
    else if (x > s)
        c = 0;
    else
    {
        if (s % 2 == 0 && x % 2 == 0)
            c = 1;
        else if (s % 2 == 1 && x % 2 == 1)
            c = 1;
        else
            c = 0;
    }
    cout << (c == 1 ? "Yes" : "No");
    return 0;
}