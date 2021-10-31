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
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        bool flag = true;
        int k = 0;
        int m = -1;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if (b[i] < a[i])
                {
                    flag = false;
                    break;
                }
                k = b[i] - a[i];
                m = i;
                break;
            }
        }

        for (int i = m; i < n; i++)
        {
            if (a[i] == b[i])
                break;
            a[i] += k;
        }

        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}