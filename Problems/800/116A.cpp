#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, n, curr = 0, req = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a >> b;
        curr = curr - a + b;
        if (req < curr)
            req = curr;
    }
    cout << req;

    return 0;
}