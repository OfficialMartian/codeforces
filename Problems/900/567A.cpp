typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    ll A[n];
    for (int i = 0; i < n; ++i)
        cin >> A[i];
    for (int i = 0; i < n; ++i)
    {
        if (i == 0)
            cout << abs(A[0] - A[1]) << " " << abs(A[0] - A[n - 1]);
        else if (i == n - 1)
            cout << abs(A[i] - A[i - 1]) << " " << abs(A[i] - A[0]);
        else
        {
            if (abs(A[i] - A[i - 1]) > abs(A[i] - A[i + 1]))
                cout << abs(A[i] - A[i + 1]);
            else
                cout << abs(A[i] - A[i - 1]);
            cout << " ";
            if (abs(A[i] - A[0]) > abs(A[i] - A[n - 1]))
                cout << abs(A[i] - A[0]);
            else
                cout << abs(A[i] - A[n - 1]);
        }
        cout << endl;
    }
    return 0;
}