typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, min = INT_MAX;
    cin >> n >> m;
    int A[m];
    for (int i = 0; i < m; ++i)
    {
        cin >> A[i];
    }
    sort(A, A + m);
    for (int i = 0; i + n - 1 < m; ++i)
    {
        if (A[i + n - 1] - A[i] < min)
            min = A[i + n - 1] - A[i];
    }
    cout << min;
    return 0;
}