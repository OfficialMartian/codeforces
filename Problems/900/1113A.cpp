typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, v, total = 0;
    cin >> n >> v;
    if (n > v)
    {
        total = v;
        int a = n - v - 1, i = 2;
        while (a--)
        {
            total += i;
            i++;
        }
        cout << total;
    }
    else
        cout << n - 1;
    return 0;
}