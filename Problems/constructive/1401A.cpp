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
        int n, k;
        cin >> n >> k;
        if (n <= k)
            cout << k - n << endl;
        else
        {
            if ((k + n) % 2 == 0)
                cout << "0" << endl;
            else
                cout << "1" << endl;
        }
    }
    return 0;
}