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
        ll n;
        cin >> n;
        ll max = -2e9, A[n], b = 0;
        for (int i = 1; i <= n; ++i)
        {
            cin >> A[i];
            b += A[i];
            if (max < A[i])
                max = A[i];
        }
        b -= max;
        printf("%.9lf\n", max + b / (double)(n - 1));
    }
    return 0;
}