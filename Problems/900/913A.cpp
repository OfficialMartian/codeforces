typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll n, m;
    cin >> n >> m;
    cout << m % ll(pow(2, n));
    return 0;
}