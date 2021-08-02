#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, h;
        cin >> h >> m;
        cout << 1440 - (h * 60 + m) << endl;
    }
    return 0;
}