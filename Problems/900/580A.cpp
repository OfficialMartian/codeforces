typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 1, max = 1;
    ll temp, prev;
    cin >> n >> prev;
    for (int i = 1; i < n; ++i)
    {
        cin >> temp;
        if (temp >= prev)
            count++;
        else if (temp < prev)
            count = 1;
        if (count > max)
            max = count;
        prev = temp;
    }
    cout << max;
    return 0;
}