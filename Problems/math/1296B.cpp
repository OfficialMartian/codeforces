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
        ll n, total = 0;
        cin >> n;
        while (n > 0)
        {
            ll temp = n - (n % 10);
            total += temp;
            n = n % 10 + temp / 10;
            if (n < 10)
            {
                total += n;
                break;
            }
        }
        cout << total << endl;
    }
    return 0;
}