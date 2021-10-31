typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    int x = 0, y = 0;
    x += t[0] - s[0];
    y += t[1] - s[1];
    cout << max(abs(x), abs(y)) << endl;
    while (x != 0 || y != 0)
    {
        if (x == 0 && y > 0)
        {
            cout << "U" << endl;
            y--;
        }
        else if (x == 0 && y < 0)
        {
            cout << "D" << endl;
            y++;
        }
        else if (x < 0 && y == 0)
        {
            cout << "L" << endl;
            x++;
        }
        else if (x > 0 && y == 0)
        {
            cout << "R" << endl;
            x--;
        }
        else if (x > 0 && y > 0)
        {
            cout << "RU" << endl;
            x--, y--;
        }
        else if (x < 0 && y > 0)
        {
            cout << "LU" << endl;
            y--, x++;
        }
        else if (x > 0 && y < 0)
        {
            cout << "RD" << endl;
            y++, x--;
        }
        else if (x < 0 && y < 0)
        {
            cout << "LD" << endl;
            y++, x++;
        }
    }

    return 0;
}