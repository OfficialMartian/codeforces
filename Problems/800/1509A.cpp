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
        vector<int> a, b;
        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            if (x % 2 == 0)
                a.pb(x);
            else
                b.pb(x);
        }
        for (int i = 0; i < a.size(); i++)
            cout << a[i] << " ";
        for (int i = 0; i < b.size(); i++)
            cout << b[i] << " ";
        cout << endl;
    }
    return 0;
}