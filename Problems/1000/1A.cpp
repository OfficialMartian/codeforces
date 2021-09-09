typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll n, m, a;
    cin >> n >> m >> a;
    printf("%.0llf", ceil(n / double(a)) * ceil(m / double(a)));
    return 0;
}