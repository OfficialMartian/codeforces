typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, max = 0, maxIndex = 1;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        int temp;
        cin >> temp;
        temp = (temp + m - 1) / m;
        if (temp >= max)
            max = temp, maxIndex = i;
    }
    cout << maxIndex;
    return 0;
}