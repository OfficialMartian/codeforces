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
        ll n, k;
        cin >> n >> k;
        if (k % n == 0)
            cout << k / n;
        else if (n % k == 0)
            cout << 1;
        else
        {
            if (n > k)
            {
                ll n0 = n - (n % k);
                cout << (n % n0 == 0 ? n / n0 : n / n0 + 1);
            }
            else
                cout << k / n + 1;
        }
        cout << endl;
    }
    return 0;
}