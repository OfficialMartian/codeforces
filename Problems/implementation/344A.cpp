#include <bits/stdc++.h>
using namespace std;
int main()
{
    int prev = 0, n, g = 0;
    cin >> n;
    while (n--)
    {
        int temp;
        cin >> temp;
        if (temp != prev)
            ++g;
        prev = temp;
    }
    cout << g;
    return 0;
}