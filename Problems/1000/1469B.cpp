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
        int n, m;
        cin >> n;
        int s = 0, rmax = 0, bmax = 0;
        for (int i = 0; i < n; ++i)
        {
            int temp;
            cin >> temp;
            s += temp;
            rmax = max(rmax, s);
        }
        cin >> m;
        s = 0;
        for (int i = 0; i < m; ++i)
        {
            int temp;
            cin >> temp;
            s += temp;
            bmax = max(bmax, s);
        }
        cout << rmax + bmax << endl;
    }
    return 0;
}