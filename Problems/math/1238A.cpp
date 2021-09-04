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
        int n, flag = 1;
        cin >> n;
        int A[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> A[i];
            if (A[i] != i + 1)
                flag = 0;
        }
        if (flag)
            cout << 0;
        else
        {
            if (A[0] == n && A[n - 1] == 1)
                cout << 3;
            else if (A[0] == 1 || A[n - 1] == n)
                cout << 1;
            else
                cout << 2;
        }
        cout << endl;
    }
    return 0;
}