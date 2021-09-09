typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, max = INT_MIN;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
        if (max < A[i])
            max = A[i];
    }
    int total = 0;
    for (int i = 0; i < n; ++i)
        total += max - A[i];
    cout << total;
    return 0;
}