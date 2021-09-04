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
        int n, n1, dig = 0, addends = 0;
        cin >> n;
        n1 = n;
        while (n)
        {
            if (n % 10)
                addends++;
            n /= 10;
        }
        cout << addends << endl;
        while (n1)
        {
            if (n1 % 10)
                cout << (n1 % 10) * pow(10, dig) << " ";
            n1 /= 10;
            dig++;
        }
        cout << endl;
    }
    return 0;
}