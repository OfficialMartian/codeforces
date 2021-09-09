typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, flag = 0;
    cin >> n >> m;
    char a[n][m];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
            if (a[i][j] == 'C' || a[i][j] == 'M' || a[i][j] == 'Y')
                flag = 1;
        }
    if (flag)
        cout << "#Color";
    else
        cout << "#Black&White";
    return 0;
}