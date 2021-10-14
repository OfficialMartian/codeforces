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
        int n, m, x, y, price = 0;
        cin >> n >> m >> x >> y;
        vector<string> T;
        for (int i = 0; i < n; ++i)
        {
            string s;
            cin >> s;
            T.pb(s);
        }
        if (2 * x <= y)
            for (auto s : T)
                for (int i = 0; i < s.length(); ++i)
                {
                    if (s[i] == '.')
                        price += x;
                }
        else
            for (auto s : T)
            {
                for (int i = 0; i < s.length(); ++i)
                {
                    if (i == s.length() - 1)
                    {
                        if (s[i] == '.' and s[i - 1] != '.')
                            s[i] = '*', price += x;
                        continue;
                    }
                    if (s[i] == '.')
                    {
                        if (s[i + 1] == '.')
                            s[i] = '*', s[i + 1] = '*', price += y;
                        else
                            s[i] = '*', price += x;
                    }
                }
            }
        cout << price << endl;
    }
    return 0;
}