typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, cubes = 0, i = 1;
    cin >> n;
    while (cubes <= n)
    {
        cubes += i * (i + 1) / 2;
        ++i;
    }
    cout << i - 2;

    return 0;
}
