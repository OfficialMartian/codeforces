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
        int n, m, k;
        cin >> n >> m >> k;
        if (m <= n / k)
            cout << m;
        else
            cout << (n / k) - ceil((m - n / k) / double(k - 1));
        cout << endl;
    }
    return 0;
}