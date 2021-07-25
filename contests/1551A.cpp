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
        int two = 0, one = 0;
        if (!(n % 3))
        {
            two = n / 3;
            one = two;
        }
        else if (n % 3 == 1)
        {
            two = n / 3;
            one = two + 1;
        }
        else
        {
            two = n / 3 + 1;
            one = two - 1;
        }
        cout << one << " " << two << endl;
    }
    return 0;
}