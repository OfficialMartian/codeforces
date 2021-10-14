typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll f[100];
    f[0] = 0;
    f[1] = 1;
    ll n;
    cin >> n;
    if (n == 0)
        cout << "0 0 0" << endl;
    else if (n == 1)
        cout << "0 0 1" << endl;
    else if (n == 2)
        cout << "1 1 0" << endl;
    else
    {
        for (ll i = 2; i < 1000; ++i)
        {
            f[i] = f[i - 1] + f[i - 2];
            if (f[i] == n)
            {
                cout << f[i - 1] << " " << f[i - 3] << " " << f[i - 4] << endl;
                break;
            }
        }
    }
    return 0;
}