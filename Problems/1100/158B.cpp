typedef long long int ll;
#define push_back pb
#define nl '\n'
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[4] = {0};
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a[temp % 4]++;
    }
    int total = a[0] + a[3] + a[2] / 2;
    a[1] -= a[3];
    if (a[2] % 2)
    {
        total += 1;
        a[1] -= 2;
    }
    if (a[1])
        total += (a[1] + 3) / 4;
    cout << total << nl;
    return 0;
}