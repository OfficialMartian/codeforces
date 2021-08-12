#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, r, i, temp;
    cin >> k >> r;
    temp = k;
    for (i = 1; i <= 10; ++i)
    {
        k *= i;
        if ((k % 10) == r || k % 10 == 0)
            break;
        k = temp;
    }
    cout << i;
    return 0;
}