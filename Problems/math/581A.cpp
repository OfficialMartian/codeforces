typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    (a > b) ? cout << b : cout << a;
    cout << " " << abs(a - b) / 2;
    return 0;
}