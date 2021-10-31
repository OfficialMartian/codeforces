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
        ll x, y;
        cin >> x >> y;
        if (x == 1 && y == 1)
            cout << "YES" << endl;
        else if ((x == 2 || x == 3) && y < 4)
            cout << "YES" << endl;
        else if (x > 3)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}