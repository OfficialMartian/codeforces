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
        if (n == 1)
            cout << -1;
        else
        {
            cout << 6;
            while (--n)
                cout << 9;
        }
        cout << endl;
    }
    return 0;
}