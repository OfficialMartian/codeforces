typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; ++i)
        cin >> A[i];
    sort(A, A + n);
    for (int i = 0; i < n; ++i)
        cout << A[i] << " ";
    return 0;
}