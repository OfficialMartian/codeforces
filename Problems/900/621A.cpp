typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    ll sum = 0, minodd = INT_MAX;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        ll temp;
        cin >> temp;
        sum += temp;
        if (temp % 2 && minodd > temp)
            minodd = temp;
    }
    printf("%llu", (sum % 2 == 0 ? sum : sum - minodd));
    return 0;
}