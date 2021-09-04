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
        ll A[n];
        for (int i = 0; i < n; i++)
            cin >> A[i];
        bool flag = false;
        for (int i = 0; i < n - 1; i++)
            if (A[i] <= A[i + 1])
                flag = true;
        cout << (!flag ? "NO" : "YES") << endl;
    }
    return 0;
}