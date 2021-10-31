typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    vector<pair<int, int>> ans;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        ans.pb(make_pair(temp, i + 1));
    }
    sort(ans.begin(), ans.end());
    int i, m = k;
    for (i = 0; i < n; i++)
    {
        if (m >= ans[i].first)
            m -= ans[i].first;
        else
            break;
    }
    cout << i << endl;
    for (auto x : ans)
    {
        if (k >= x.first)
            k -= x.first, cout << x.second << " ";
        else
            break;
    }

    return 0;
}