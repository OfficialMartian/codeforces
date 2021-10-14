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
        ll a, b, n;
        int count = 0;
        cin >> a >> b >> n;
        while (a <= n || b <= n)
        {
            a <= b ? a += b : b += a;
            count++;
        }
        cout << count - 1 << endl;
    }
    return 0;
}