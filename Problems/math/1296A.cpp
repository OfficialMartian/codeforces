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
        int n, temp, count = 0;
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cin >> temp;
            if (temp % 2)
                count++;
        }
        if (count == 0)
            cout << "NO" << endl;
        else if (!(n % 2) && count == n)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}