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
        int A[n];
        int sum = 0, neg = 0, pos = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            A[i] >= 0 ? pos += A[i] : neg -= A[i];
            sum += A[i];
        }
        sort(A, A + n);
        if (sum == 0)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            if (pos > neg)
                for (int i = n - 1; i >= 0; i--)
                    cout << A[i] << " ";
            else
                for (int i = 0; i < n; i++)
                    cout << A[i] << " ";
            cout << endl;
        }
    }
    return 0;
}