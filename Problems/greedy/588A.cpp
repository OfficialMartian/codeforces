typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, min = INT_MAX, total = 0;
    cin >> n;
    int A[n], P[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i] >> P[i];
        if (P[i] < min)
            min = P[i];
        total += min * A[i];
    }
    cout << total;
    return 0;
}