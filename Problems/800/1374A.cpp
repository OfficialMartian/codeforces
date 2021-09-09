#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y, n, k, i;
        cin >> x >> y >> n;
        i = n % x;
        if (i >= y)
            cout << n - i + y << endl;
        else
            cout << n - i - x + y << endl;
    }
    return 0;
}