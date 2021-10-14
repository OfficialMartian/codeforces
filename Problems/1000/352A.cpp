typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, f = 0, z = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if (temp == 0)
            z++;
        else if (temp == 5)
            f++;
    }
    if (z == 0)
        cout << -1 << endl;
    else if (f < 9)
        cout << 0 << endl;
    else
    {
        f -= f % 9;
        while (f--)
            cout << 5;
        while (z--)
            cout << 0;
    }
    return 0;
}