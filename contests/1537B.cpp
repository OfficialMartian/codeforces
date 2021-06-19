#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, clock = 0;
    cin >> t;
    vector<vector<int>> a(t);
    while (t--)
    {
        int n, m, i, j;
        cin >> n >> m >> i >> j;
        a[clock].push_back(1);
        a[clock].push_back(1);
        a[clock].push_back(n);
        a[clock].push_back(m);
        clock++;
    }
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < 4; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}