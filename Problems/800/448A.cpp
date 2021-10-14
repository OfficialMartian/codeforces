typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1, a2, a3, b1, b2, b3, n;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;
    int a = ((a1 + a2 + a3) / 5) + ((a1 + a2 + a3) % 5 > 0);
    int b = ((b1 + b2 + b3) / 10) + ((b1 + b2 + b3) % 10 > 0);
    cout << ((a + b) <= n ? "YES" : "NO");
    return 0;
}