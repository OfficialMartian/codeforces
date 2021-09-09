#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, p, q, count = 0;
    // map<int, int> a;
    // cin >> n >> p;
    // for (int i = 1; i <= p; ++i)
    // {
    //     cin >> temp;
    //     a[temp]++;
    // }
    // cin >> q;
    // for (int i = 1; i <= q; ++i)
    // {
    //     cin >> temp;
    //     a[temp]++;
    // }
    cin >> n >> p;
    int A[2 * n];
    for (int i = 0; i < p; ++i)
        cin >> A[i];
    cin >> q;
    for (int i = p; i < p + q; ++i)
        cin >> A[i];
    sort(A, A + (p + q));
    for (int i = 0; i < p + q; ++i)
        if (A[i] != A[i + 1])
            count++;
    if (count >= n)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
    return 0;
}