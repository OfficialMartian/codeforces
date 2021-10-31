typedef long long int ll;
#define push_back pb
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> a;
        for (int i = 0; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            a.pb(make_pair(x, y));
        }
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            bool curr = true;
            for (int j = 0; j < n; j++)
            {
                if (abs(a[i].first - a[j].first) + abs(a[i].second - a[j].second) > k)
                {
                    curr = false;
                    break;
                }
            }
            if (curr)
            {
                flag = true;
                break;
            }
        }
        cout << (flag ? "1" : "-1") << nl;
    }
    return 0;
}