typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, sum = 0;
    cin >> n >> m;
    int A[n];
    for (int i = 0; i < n; ++i)
        cin >> A[i];
    sort(A, A + n);
    for (int i = 0; i < m; ++i)
        if (A[i] < 0)
            sum -= A[i];
    cout << sum;
    return 0;
}