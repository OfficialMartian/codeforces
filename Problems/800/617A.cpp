#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x, steps;
    cin >> x;
    steps = x / 5;
    if (x % 5)
        ++steps;
    cout << steps;
    return 0;
}