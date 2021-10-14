typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, tot = 0;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for (int i = 0; i < n - 1; ++i)
    {
        if (a[i] + a[i + 1] < k)
        {
            tot += k - (a[i] + a[i + 1]);
            a[i + 1] += k - (a[i] + a[i + 1]);
        }
    }
    cout << tot << endl;
    for (int i = 0; i < n; ++i)
        cout << a[i] << " ";
    return 0;
}