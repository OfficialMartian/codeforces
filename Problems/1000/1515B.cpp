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
        ll n;
        cin >> n;
        int flag = 0;
        for (int i = 1, t; (t = i * i * 2) <= n; i++)
            if (t == n || t * 2 == n)
            {
                flag = 1;
                break;
            }
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}