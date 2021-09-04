typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    ll A[n], min = INT_MAX, minIndex = -1;
    for (int i = 0; i < n; ++i)
    {
        cin >> A[i];
        if (min > A[i])
        {
            minIndex = i + 1;
            min = A[i];
        }
    }
    int count = 0;
    for (int i = 0; i < n; ++i)
        if (A[i] == min)
            count++;
    if (count == 1)
        cout << minIndex;
    else
        cout << "Still Rozdil";
    return 0;
}