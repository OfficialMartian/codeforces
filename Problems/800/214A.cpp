typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, count = 0;
    cin >> n >> m;
    for (int i = 0; i <= 32; ++i)
        for (int j = 0; j <= 32; ++j)
            if (i * i + j == n && i + j * j == m)
                ++count;
    cout << count;
    return 0;
}