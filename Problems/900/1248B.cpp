typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    ll ysum = 0, xsum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i < n; ++i)
        i < n / 2 ? ysum += a[i] : xsum += a[i];
    printf("%llu", ysum * ysum + xsum * xsum);
    return 0;
}