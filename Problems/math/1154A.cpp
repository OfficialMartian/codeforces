typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int A[4];
    for (int i = 0; i < 4; ++i)
        cin >> A[i];
    sort(A, A + 4);
    cout << A[3] - A[0] << " " << A[3] - A[1] << " " << A[3] - A[2];
    return 0;
}