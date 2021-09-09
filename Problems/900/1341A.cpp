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
        int a, b, c, d, n;
        cin >> n >> a >> b >> c >> d;
        int min = n * (a - b), max = n * (a + b);
        if (min <= c + d && max >= c - d)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}