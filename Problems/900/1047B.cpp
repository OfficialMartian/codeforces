typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, max = INT_MIN;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        int x, y;
        cin >> x >> y;
        if (max <= x + y)
            max = x + y;
    }
    cout << max;
    return 0;
}