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
        int n;
        cin >> n;
        n *= 2;
        vector<int> A(n);
        for (int i = 0; i < n; ++i)
            cin >> A[i];
        sort(A.begin(), A.end());
        for (int i = 0; i < n / 2; ++i)
            cout << A[i] << ' ' << A[n - i - 1] << ' ';
    }
    return 0;
}