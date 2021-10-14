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
        ll a, b, count = 0;
        cin >> a >> b;
        if (a == b)
        {
            cout << 0<<endl;
            continue;
        }
        else if (a > b)
            swap(a, b);
        if (b % a != 0)
            cout << -1;
        else
        {
            ll n = b / a;
            while (n % 8 == 0)
            {
                n /= 8;
                count++;
            }
            while (n % 4 == 0)
            {
                n /= 4;
                count++;
            }
            while (n % 2 == 0)
            {
                n /= 2;
                count++;
            }
            cout << (n == 1 ? count : -1);
        }
        cout << endl;
    }
    return 0;
}