typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, l, ans = 0, i, j;
    cin >> n >> l;
    l--;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    if (a[l] == 1)
        ans++;
    for (i = l - 1, j = l + 1; i >= 0 && j < n;)
    {
        if (a[i] == 1 && a[j] == 1)
            ans += 2;
        i--, j++;
    }
    if (i < 0)
    {
        while (j < n)
        {
            if (a[j] == 1)
                ans++;
            j++;
        }
    }
    else if (j == n)
    {
        while (i >= 0)
        {
            if (a[i] == 1)
                ans++;
            i--;
        }
    }
    cout << ans;
    return 0;
}