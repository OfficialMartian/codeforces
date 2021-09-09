#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, low, high, lowindex, highindex;
    cin >> n;
    int A[n];
    cin >> A[0];
    low = A[0];
    high = A[0];
    lowindex = 0;
    highindex = 0;
    for (int i = 1; i < n; ++i)
    {
        cin >> A[i];
        if (A[i] > high)
        {
            high = A[i];
            highindex = i;
        }
        if (A[i] <= low)
        {
            low = A[i];
            lowindex = i;
        }
    }
    int steps;
    if (highindex > lowindex)
        steps = highindex + abs(lowindex - n + 1) - 1;
    else
        steps = highindex + abs(lowindex - n + 1);
    cout << steps;
    return 0;
}