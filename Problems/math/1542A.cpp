#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, temp, odd = 0, even = 0;
        cin >> n;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> temp;
            if (temp % 2)
                odd++;
            else
                even++;
        }
        if (odd == even)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}