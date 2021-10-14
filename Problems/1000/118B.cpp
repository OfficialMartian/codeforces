typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // for (int i = 0; i <= n; ++i)
    // {
    //     for (int k = i; k < n; ++k)
    //         cout << "  ";
    //     int j;
    //     for (j = 0; j <= i; ++j)
    //         cout << j << " ";
    //     while (--j)
    //         cout << j << " ";
    //     cout << "\b\b0";
    //     cout << endl;
    // }
    // for (int i = n - 1; i >= 0; --i)
    // {
    //     for (int k = i; k < n; ++k)
    //         cout << "  ";
    //     int j;
    //     for (j = 0; j <= i; ++j)
    //         cout << j << " ";
    //     while (--j)
    //         cout << j << " ";
    //     cout << "\b\b0";
    //     cout << endl;
    // }
    for (int row = -n; row <= n; ++row)
    {
        int top = n - abs(row);
        for (int i = 0; i < abs(row); ++i)
            cout << "  ";
        for (int i = 0; i < top; ++i)
            cout << i << " ";
        for (int i = top; i > 0; --i)
            cout << i << " ";
        cout << 0 << endl;
    }
    return 0;
}