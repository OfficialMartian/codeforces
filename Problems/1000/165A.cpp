typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ans = 0;
    cin >> n;
    int x[n], y[n];
    for (int i = 0; i < n; ++i)
        cin >> x[i] >> y[i];
    for (int i = 0; i < n; ++i)
    {
        int left = 0, right = 0, top = 0, bottom = 0;
        for (int j = 0; j < n; ++j)
        {
            if (x[i] == x[j] && y[i] < y[j])
                bottom++;
            else if (x[i] < x[j] && y[i] == y[j])
                left++;
            else if (x[i] == x[j] && y[i] > y[j])
                top++;
            else if (x[i] > x[j] && y[i] == y[j])
                right++;
        }
        if (top && left && right && bottom)
            ans++;
    }
    cout << ans;
    return 0;
}