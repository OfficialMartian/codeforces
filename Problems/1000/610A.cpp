typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll n;
    cin >> n;
    ll sum = 0;
    if (n % 2)
        cout << 0;
    else
    {
        if (n <= 2)
            cout << 0;
        else
            cout << (n % 4 ? (n / 2) / 2 : n / 4 - 1);
    }
    return 0;
}