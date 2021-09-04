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
        ll A[3];
        cin >> A[0] >> A[1] >> A[2];
        sort(A, A + 3);
        cout << max(ll(0), 2 * (A[2] - A[0] - 2)) << endl;
    }
    return 0;
}