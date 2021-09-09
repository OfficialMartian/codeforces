#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, sum = 0;
        cin >> n >> k;
        int A[n], B[n];
        for (int i = 0; i < n; ++i)
            cin >> A[i];
        for (int i = 0; i < n; ++i)
            cin >> B[i];
        sort(A, A + n);
        sort(B, B + n);
        for (int i = 0, j = n - 1; i < n; ++i)
        {
            if (k && A[i] < B[j])
            {
                sum += B[j];
                --k;
                --j;
            }
            else
                sum += A[i];
        }
        cout << sum << endl;
    }
    return 0;
}