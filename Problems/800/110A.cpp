#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, A[5];
    cin >> n;
    while (true)
    {
        ++n;
        A[0] = n % 10;
        A[1] = (n / 10) % 10;
        A[2] = (n / 100) % 10;
        A[3] = (n / 1000) % 10;
        if (A[0] != A[1] && A[0] != A[2] && A[0] != A[3] && A[1] != A[2] && A[1] != A[3] && A[2] != A[3])
            break;
    }
    cout << n;
    return 0;
}