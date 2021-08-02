#define pb push_back
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n;
        vector<int> A;
        for (int i = 0; i < n; ++i)
        {
            cin >> x;
            A.pb(x);
        }
        sort(A.begin(), A.end());
        x = 1;
        for (int i = 0; i < A.size() - 1; ++i)
        {
            if (abs(A[i] - A[i + 1]) > 1)
            {
                cout << "NO" << endl;
                x = 0;
                break;
            }
        }
        if (x)
            cout << "YES" << endl;
    }
    return 0;
}