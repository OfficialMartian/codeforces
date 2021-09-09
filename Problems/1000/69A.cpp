typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x = 0, y = 0, z = 0;
    cin >> n;
    while (n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }
    cout << (!x && !y && !z ? "YES" : "NO");
    return 0;
}