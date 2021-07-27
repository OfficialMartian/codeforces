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
        if (!((n / 2) % 2))
        {
            int even = 0, odd = 1;
            cout << "YES\n";
            for (int i = 0; i < n; ++i)
            {
                if (i < n / 2)
                {
                    even += 2;
                    cout << even << " ";
                }
                else if (i >= n / 2 && i + 1 != n)
                {
                    cout << odd << " ";
                    odd += 2;
                }
                else
                    cout << (3 * n - 2) / 2 << " ";
            }
            cout << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}