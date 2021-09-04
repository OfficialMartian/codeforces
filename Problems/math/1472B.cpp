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
        int one = 0, two = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp == 1)
                one++;
            else if (temp == 2)
                two++;
        }
        int div = (one + 2 * two) / 2;
        if ((one + 2 * two) % 2 != 0)
            cout << "NO" << endl;
        else
        {
            if (div % 2 == 0)
                cout << "YES" << endl;
            else if (div % 2 == 1 && one != 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}