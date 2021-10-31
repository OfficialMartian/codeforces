typedef long long int ll;
#define push_back pb
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int d1, d2, d3;
    cin >> d1 >> d2 >> d3;
    int a = min(d1, d2 + d3);
    a += min(d3, d2 + d1);
    a += min(d2, d3 + d1);
    cout << a << nl;
    return 0;
}