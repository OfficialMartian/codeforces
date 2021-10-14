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
        string s, t;
        cin >> s >> t;
        int u = s.size(), v = t.size(), lcm = u * v / __gcd(u, v);
        string x = "", y = "";
        for (int i = 0; i < lcm / u; i++)
            x += s;
        for (int i = 0; i < lcm / v; i++)
            y += t;
        cout << (x == y ? x : "-1") << endl;
    }
    return 0;
}