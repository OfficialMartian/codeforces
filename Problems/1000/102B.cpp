typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll n = 0, ans = 0;
    string a;
    cin >> a;
    if (a.length() == 1)
        cout << '0';
    else
    {
        for (int i = 0; i < a.length(); ++i)
            n += a[i] - 48;
        ans++;
        while (n >= 10)
        {
            ll temp = n, sum = 0;
            while (temp)
                sum += temp % 10, temp /= 10;
            n = sum;
            ans++;
        }
        cout << ans;
    }
    return 0;
}