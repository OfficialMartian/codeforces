typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ll n, m, total = 0, prev = 1;
    cin >> n >> m;
    while (m--)
    {
        int temp;
        cin >> temp;
        if (temp >= prev)
            total += temp - prev;
        else if (temp < prev)
            total += n - (prev - temp);
        prev = temp;
    }
    cout << total;
    return 0;
}