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
        ll n;
        cin >> n;
        int count = 0;
        while (n)
        {
            if (n == 1)
            {
                cout << count << endl;
                break;
            }
            else if (n % 3 == 0)
            {
                if (n % 6 == 0)
                    n /= 6;
                else
                    n *= 2;
                count++;
            }
            else if (n % 3)
            {
                cout << "-1" << endl;
                break;
            }
        }
    }
    return 0;
}