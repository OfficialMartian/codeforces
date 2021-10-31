typedef long long int ll;
#define push_back pb
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    if (a == b && a == 0)
        cout << "NO" << nl;
    else
        cout << (abs(a - b) <= 1 ? "YES" : "NO");
    return 0;
}