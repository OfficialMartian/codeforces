typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, prev = -1, cnt = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] == 0 && a[i - 1] == 1 && a[i + 1] == 1)
        {
            if (prev == i - 1)
                continue;
            else
                cnt++;
            prev = i + 1;
        }
    }
    cout << cnt;
    return 0;
}