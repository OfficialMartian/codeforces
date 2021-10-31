typedef long long int ll;
#define push_back pb
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char op;
    ll n, kids = 0, ice, c;
    cin >> n >> ice;
    for (int i = 0; i < n; ++i)
    {
        cin >> op >> c;
        if (op == '+')
            ice += c;
        else
            c > ice ? kids++ : ice -= c;
    }
    cout << ice << " " << kids << endl;
    return 0;
}