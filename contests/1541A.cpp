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
        if (n % 2 == 1)
        {
            for (int i = 1; i < n; i += 2)
            {
                if (i + 2 == n)
                {
                    cout << i + 1 << " " << i + 2 << " " << i;
                    break;
                }
                cout << i + 1 << " " << i << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = 1; i < n; i += 2)
                cout << i + 1 << " " << i << " ";
            cout << endl;
        }
    }
    return 0;
}