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
        ll w, h, n, count = 1;
        cin >> w >> h >> n;
        while ((w % 2 == 0) || (h % 2 == 0))
        {
            count *= 2;
            if (h % 2 == 0)
                h /= 2;
            else if (w % 2 == 0)
                w /= 2;
        }
        if (count < n)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}