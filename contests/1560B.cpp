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
        ll a, b, c;
        cin >> a >> b >> c;
        ll n = (abs(a - b) - 1) * 2 + 2;
        if (a > n || b > n || c > n)
            cout << "-1" << endl;
        else if (c == n / 2 + 1)
            cout << "1" << endl;
        else if (c > n / 2 + 1)
            cout << c - abs(a - b) << endl;
        else if (c < n / 2 + 1)
            cout << c + abs(a - b) << endl;
    }
    return 0;
}