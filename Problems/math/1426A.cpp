#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        int c = 2, floor = 1;
        while (c < n)
        {
            c += x;
            floor++;
        }
        cout << floor << endl;
    }
    return 0;
}