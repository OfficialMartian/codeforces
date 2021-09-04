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
        for (int i = 2; i > 0; i++)
        {
            int k = pow(2, i) - 1;
            if (n % k == 0)
            {
                cout << n / k << endl;
                break;
            }
        }
    }
    return 0;
}