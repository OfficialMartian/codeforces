typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double ans = 0.0;
    for (double i = 1; i <= n; ++i)
        ans += double(1 / i);
    printf("%f", ans);
    return 0;
}