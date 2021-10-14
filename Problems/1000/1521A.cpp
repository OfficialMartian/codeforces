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
        ll A, B;
        cin >> A >> B;
        if (B == 1)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        if (B == 2)
        {
            cout << A << " " << A * 3 << " " << A * 4 << endl;
            continue;
        }
        cout << A << " " << A * (B - 1) << " " << A * B << endl;
    }
    return 0;
}