typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, a = 1;
    cin >> n >> t;
    if (n == 1 && t == 10)
        cout << -1 << endl;
    else
    {
        cout << t;
        if (t == 10)
            a++;
        while (a < n)
        {
            cout << '0';
            a++;
        }
    }
    return 0;
}