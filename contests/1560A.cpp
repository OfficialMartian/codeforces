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
        int k, i = 1;
        cin >> k;
        while (k--)
        {
            if (i % 3 == 0 || i % 10 == 3)
                k++;
            i++;
        }
        cout << i - 1 << endl;
    }
    return 0;
}