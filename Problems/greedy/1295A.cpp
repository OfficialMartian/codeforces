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
        int n, ans = 0;
        cin >> n;
        if (n % 2 == 0)
            for (int i = 0; i < n / 2; ++i)
                cout << "1";
        else
        {
            cout << "7";
            for (int i = 0; i < n / 2 - 1; ++i)
                cout << "1";
        }
        cout << endl;
    }
    return 0;
}