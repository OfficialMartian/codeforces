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
        ll a, b, n, S;
        cin >> a >> b >> n >> S;
        ll rem = min(S / n, a);
        rem = S - rem * n;
        cout << (rem > b ? "NO" : "YES") << endl;
    }
    return 0;
}