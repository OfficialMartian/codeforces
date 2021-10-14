typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll s, n;
    bool flag = true;
    cin >> s >> n;
    vector<pair<int, int>> A(n);
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        A[i] = make_pair(x, y);
    }
    sort(A.begin(), A.end());
    for (auto x : A)
        if (s > x.first)
            s += x.second;
        else
        {
            flag = false;
            break;
        }
    cout << (flag ? "YES" : "NO");
    return 0;
}