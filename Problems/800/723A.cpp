typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[3];
    cin >> A[0] >> A[1] >> A[2];
    sort(A, A + 3);
    cout << (A[1] - A[0]) + (A[2] - A[1]);
    return 0;
}