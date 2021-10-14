typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, n, count = 0;
    cin >> n >> a >> b;
    for (int i = a; i < n; ++i)
        for (int j = 0; j <= b; ++j)
            if (i + j + 1 == n)
                count++;
    cout << count;
    return 0;
}