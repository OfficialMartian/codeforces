typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, count = 0, maxCount = 0;
    cin >> n;
    int A[2 * n];
    for (ll i = 0; i < n; i++)
    {
        cin >> A[i];
        A[i + n] = A[i];
    }
    for (int i = 0; i < 2 * n; ++i)
    {
        if (A[i] == 0)
            count = 0;
        else
            count++;
        if (maxCount < count)
            maxCount = count;
    }
    cout << maxCount;
    return 0;
}