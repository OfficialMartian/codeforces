typedef long long int ll;
#define push_back pb
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;
bool clockwise(vector<int> &a)
{
    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i] != a[i + 1] - 1)
            if (a[i] != a.size() || a[i + 1] != 1)
                return false;
    }
    return true;
}

bool counter(vector<int> &a)
{
    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i] != a[i + 1] + 1)
            if (a[i] != 1 || a[i + 1] != a.size())
                return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (counter(a) || clockwise(a))
            cout << "YES";
        else
            cout << "NO";
        cout << nl;
    }
    return 0;
}