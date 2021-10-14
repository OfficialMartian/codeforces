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
        ll r, g, b, w;
        cin >> r >> g >> b >> w;
        bool can = false;
        if ((r % 2 == 0 && g % 2 == 0 && b % 2 == 0) ||
            (g % 2 == 0 && b % 2 == 0 && w % 2 == 0) ||
            (b % 2 == 0 && w % 2 == 0 && r % 2 == 0) ||
            (w % 2 == 0 && r % 2 == 0 && g % 2 == 0))
            can = true;
        else
        {
            if (r > 0 && g > 0 && b > 0)
            {
                --r;
                --g;
                --b;
                w += 3;
                if ((r % 2 == 0 && g % 2 == 0 && b % 2 == 0) ||
                    (g % 2 == 0 && b % 2 == 0 && w % 2 == 0) ||
                    (b % 2 == 0 && w % 2 == 0 && r % 2 == 0) ||
                    (w % 2 == 0 && r % 2 == 0 && g % 2 == 0))
                    can = true;
            }
        }
        cout << (can ? "Yes" : "No") << endl;
    }
    return 0;
}