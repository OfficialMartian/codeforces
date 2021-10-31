typedef long long int ll;
#define push_back pb
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;
int b[102][102] = {0};
bool even(int i, int j)
{
    int sum = b[i][j - 1] + b[i][j + 1] + b[i - 1][j] + b[i + 1][j];
    return sum & 1;
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            char t;
            cin >> t;
            if (t == 'o')
                b[i][j] = 1;
        }
    }
    bool flag = true;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (even(i, j))
            {
                flag = false;
                break;
            }
        }
    }
    cout << (flag ? "YES" : "NO") << nl;
    return 0;
}