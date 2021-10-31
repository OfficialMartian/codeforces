typedef long long int ll;
#define push_back pb
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool flag = true;
    int n;
    cin >> n;
    vector<int> a(2 * n);
    cin >> a[0];
    for (int i = 1; i < 2 * n; i++)
    {
        cin >> a[i];
        if (a[i] != a[i - 1])
            flag = false;
    }
    if (flag)
        cout << "-1" << nl;
    else
    {
        sort(a.begin(), a.end());
        for (auto x : a)
        {
            cout << x << " ";
        }
    }
    return 0;
}