typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll x;
    int count = 0;
    cin >> x;
    while (x)
    {
        if (x % 2 == 1)
            count++;
        x = x >> 1;
    }
    cout << count;
    return 0;
}