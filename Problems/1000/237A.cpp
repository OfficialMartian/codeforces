typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, max = 1, count = 1;
    cin >> n;
    int h[n], m[n];
    cin >> h[0] >> m[0];
    for (int i = 1; i < n; ++i)
    {
        cin >> h[i] >> m[i];
        if (h[i] == h[i - 1] && m[i] == m[i - 1])
        {
            count++;
            if (max < count)
                max = count;
        }
        else
            count = 1;
    }
    cout << max;
    return 0;
}