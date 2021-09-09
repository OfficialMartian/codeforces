#include <bits/stdc++.h>
using namespace std;
int impostor(int A[], int n)
{
    if (A[0] == A[1] && A[0] != A[2])
        return 2;
    if (A[0] == A[2] && A[0] != A[1])
        return 1;
    if (A[1] == A[2] && A[0] != A[1])
        return 0;
    for (int i = 3; i < n; i++)
        if (A[i] != A[i - 1])
            return i;
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for (int j = 0; j < n; j++)
            cin >> A[j];
        cout << impostor(A, n) + 1 << endl;
    }
    return 0;
}