#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m = 0, c = 0;
    cin >> n;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
            m++;
        else if (b > a)
            c++;
    }
    if (m > c)
        cout << "Mishka";
    else if (m < c)
        cout << "Chris";
    else
        cout << "Friendship is magic!^^";
    return 0;
}