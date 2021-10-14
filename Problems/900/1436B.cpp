typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
                cout << ((j == i || j + i == n - 1 || i + j == n) ? "1 " : "0 ");
            cout << endl;
        }
    }
    return 0;
}