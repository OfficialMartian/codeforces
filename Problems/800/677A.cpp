#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, h, width = 0;
    cin >> n >> h;
    while(n--)
    {
        int x;
        cin >> x;
        if (x > h)
            width += 2;
        else
            width++;
    }
    cout << width;
    return 0;
}