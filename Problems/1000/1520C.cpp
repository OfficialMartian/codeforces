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
        if (n == 2)
        {
            cout << -1 << endl;
            continue;
        }
        int j = 1;
        for (int i = 1; i <= n * n; i += 2, ++j)
        {
            cout << i << " ";
            if (j % n == 0)
                cout << endl;
        }
        for (int i = 2; i <= n * n; i += 2, ++j)
        {
            cout << i << " ";
            if (j % n == 0)
                cout << endl;
        }
    }
    return 0;
}