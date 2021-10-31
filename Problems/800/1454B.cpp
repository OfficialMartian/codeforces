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
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        map<int, int> m;
        int res = INT_MAX;
        for (auto itr : a)
            m[itr]++;
        for (auto itr : m)
            if (itr.second == 1)
                res = min(res, itr.first);
        if (res == INT_MAX)
            cout << "-1" << endl;
        else
        {
            int idx;
            for (int i = 0; i < n; ++i)
                if (a[i] == res)
                {
                    idx = i + 1;
                    break;
                }
            cout << idx << endl;
        }
    }
    return 0;
}