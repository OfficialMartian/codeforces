#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, count = 1;
    cin >> a >> b;
    while (true)
    {
        a *= 3;
        b *= 2;
        if (a > b)
            break;
        count++;
    }
    cout << count;
    return 0;
}