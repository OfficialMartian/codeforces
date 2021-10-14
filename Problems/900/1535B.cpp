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
        int n, count = 0;
        cin >> n;
        vector<int> a, odd, even;
        for (int i = 1; i <= n; ++i)
        {
            int temp;
            cin >> temp;
            temp % 2 ? odd.pb(temp) : even.pb(temp);
        }
        for (auto x : even)
            a.pb(x);
        for (auto x : odd)
            a.pb(x);
        for (int i = 0; i < a.size(); ++i)
            for (int j = i + 1; j < a.size(); ++j)
                if (__gcd(a[i], 2 * a[j]) > 1)
                    count++;
        cout << count << endl;
    }
    return 0;
}