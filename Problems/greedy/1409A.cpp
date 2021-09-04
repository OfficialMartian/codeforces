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
        ll a, b;
        cin >> a >> b;
        printf("%.0lf\n", ceil(abs(a - b) / 10.0));
    }
    return 0;
}