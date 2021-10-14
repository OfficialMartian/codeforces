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
        ll m = max(max(a, b), c);
        ll mi = min(min(a, b), c);
        if (m == mi)
        {
            cout << "1 1 1" << endl;
            continue;
        }
        else if (m == a && m == b)
            cout << "1 1 " << m - c + 1 << endl;
        else if (m == c && m == b)
            cout << m - a + 1 << " 1 1" << endl;
        else if (m == a && m == c)
            cout << "1 " << m - b + 1 << " 1" << endl;
        else
        {
            cout << (m == a ? m - a : m - a + 1) << " ";
            cout << (m == b ? m - b : m - b + 1) << " ";
            cout << (m == c ? m - c : m - c + 1) << endl;
        }
    }
    return 0;
}