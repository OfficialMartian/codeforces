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
        ll a, b, k;
        cin >> a >> b >> k;
        if (k % 2)
            cout << (k / 2 + 1) * a - (k / 2) * b;
        else
            cout << (k / 2) * a - (k / 2) * b;
        cout << endl;
    }
    return 0;
}