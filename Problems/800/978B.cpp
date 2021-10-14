typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, xs = 0, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'x')
        {
            xs++;
            if (xs == n || ((xs >= 2) && i == n - 1))
                ans += xs - 2;
        }
        else if (xs >= 2 && xs != n)
        {
            ans += xs - 2;
            xs = 0;
        }
        else
            xs = 0;
    }
    cout << ans << endl;
    return 0;
}