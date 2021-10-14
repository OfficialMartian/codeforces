typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int k, a[26], max = INT_MIN, tot = 0, n = s.length();
    cin >> k;
    for (int i = 0; i < 26; ++i)
    {
        cin >> a[i];
        if (max < a[i])
            max = a[i];
    }
    for (int i = 0; i < n; ++i)
        tot += (i + 1) * a[s[i] - 'a'];
    tot += max * (((n + k) * (n + k + 1) / 2) - ((n) * (n + 1) / 2));
    cout << tot;
    return 0;
}