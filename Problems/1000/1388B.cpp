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
        int x = (n + 3) / 4;
        n -= x;
        while (n--)
            cout << 9;
        while (x--)
            cout << 8;
        cout << endl;
    }
    return 0;
}