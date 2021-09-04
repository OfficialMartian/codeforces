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
        if (n < 10)
            cout << n;
        else if (n > 45)
            cout << "-1";
        else
        {
            int dig = 9;
            vector<int> A;
            while (n > 0)
            {
                if (n >= dig)
                {
                    A.pb(dig);
                    n -= dig;
                    dig--;
                }
                else
                {
                    A.pb(n);
                    n = 0;
                }
            }
            for (int i = A.size() - 1; i >= 0; i--)
                cout << A[i];
        }
        cout << endl;
    }
    return 0;
}