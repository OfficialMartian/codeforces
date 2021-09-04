typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i;
    cin >> n >> m;
    for (i = 1; n > 0; ++i)
    {
        n--;
        if (i % m == 0)
            n++;
    }
    cout << i - 1;
    return 0;
}