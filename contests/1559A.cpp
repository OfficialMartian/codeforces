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
        ll min;
        cin >> n;
        ll A[n];
        cin >> A[0];
        min = A[0];
        for (int i = 1; i < n; ++i)
        {
            cin >> A[i];
            min = min & A[i];
        }
        cout << min << endl;
    }
    return 0;
}