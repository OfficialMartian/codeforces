typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll n;
    cin >> n;
    int rem = n % 4;
    if (n == 0)
        cout << 1;
    else
        switch (rem)
        {
        case 1:
            cout << 8;
            break;
        case 2:
            cout << 4;
            break;
        case 3:
            cout << 2;
            break;
        case 0:
            cout << 6;
            break;
        default:
            break;
        }
    return 0;
}