#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, d, count = 0;
    cin >> a >> b >> c >> d;
    if (a == b)
        count++;
    if (c == b || c == a)
        count++;
    if (d == c || d == b || d == a)
        count++;
    cout << count;
    return 0;
}