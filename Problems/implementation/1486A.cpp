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
        bool flag = false;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (n == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        ll temp = a[0];
        a[0] = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[i - 1])
            {
                temp += a[i] - (a[i - 1] + 1);
                a[i] = a[i - 1] + 1;
            }
            else if (a[i - 1] == a[i])
            {
                if (temp > 0)
                {
                    a[i]++;
                    temp--;
                }
            }
            else
            {
                ll diff = a[i - 1] - a[i] + 1;
                if (diff <= temp)
                {
                    a[i] += diff;
                    temp -= diff;
                }
            }
        }
        for (int i = 1; i < n; i++)
        {
            if (a[i] > a[i - 1])
                flag = true;
            else
            {
                flag = false;
                break;
            }
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}