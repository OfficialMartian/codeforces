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
        long n;
        cin >> n;
        cout << "2" << endl;
        long cur = n;
        for (long p = n - 1; p >= 1; p--)
        {
            cout << p << " " << cur << endl;
            cur = (cur + p + 1) / 2;
        }
    }
    return 0;
}