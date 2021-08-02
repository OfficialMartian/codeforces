#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z, temp;
        cin >> x >> y >> z;
        if (x > y)
        {
            temp = x;
            x = y;
            y = temp;
        }
        if (x > z)
        {
            temp = x;
            x = z;
            z = temp;
        }
        if (y > z)
        {
            temp = y;
            y = z;
            z = temp;
        }
        if (y == z)
        {
            cout << "YES" << endl;
            cout << x << " " << x << " " << z << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}