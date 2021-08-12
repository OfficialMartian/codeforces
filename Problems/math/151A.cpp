#include <bits/stdc++.h>
using namespace std;
int smallest(int x, int y, int z)
{
    return x < y ? (x < z ? x : z) : (y < z ? y : z);
}
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int drinks = k * l / nl, slices = c * d, salt = p / np;
    cout << smallest(drinks, slices, salt) / n;
    return 0;
}