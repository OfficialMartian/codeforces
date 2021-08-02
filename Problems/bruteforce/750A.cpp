#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, flag = 0, n, k, prod = 0;
    cin >> n >> k;
    for (i = 1; i <= n; ++i)
    {
        prod += 5 * i;
        if (prod + k > 240)
        {
            cout << --i << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        cout << --i << endl;
    return 0;
}