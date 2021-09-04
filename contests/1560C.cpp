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
        ll n, i = 1;
        cin >> n;
        for (int j = 1; i < n; ++j)
            i = j * j;
        ll rt = sqrt(i);
        if (i - rt + 1 > n)
            cout << rt - abs(i - rt + 1 - n) << " " << rt;
        else if (i - rt + 1 < n)
            cout << rt << " " << rt - abs(i - rt + 1 - n);
        else if (i - rt + 1 == n)
            cout << rt << " " << rt;
        cout << endl;
    }
    return 0;
}