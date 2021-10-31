typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, v;
    cin >> n >> v;
    vector<vector<int>> s(n);
    vector<int> ans;
    for (int i = 0; i < n; ++i)
    {
        int items;
        cin >> items;
        for (int j = 0; j < items; ++j)
        {
            int price;
            cin >> price;
            s[i].pb(price);
        }
    }
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < s[i].size(); ++j)
            if (s[i][j] < v)
            {
                ans.pb(i + 1);
                break;
            }
    cout << ans.size() << endl;
    for (auto x : ans)
        cout << x << " ";
    return 0;
}