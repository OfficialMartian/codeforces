typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int A[3];
        cin >> A[0] >> A[1] >> A[2];
        sort(A, A + 3);
        int count = 0;
        if (A[0])
            count++, A[0]--;
        if (A[1])
            count++, A[1]--;
        if (A[2])
            count++, A[2]--;
        if (A[0] > 0 && A[2] > 0)
            count++, A[0]--, A[2]--;
        if (A[1] > 0 && A[2] > 0)
            count++, A[1]--, A[2]--;
        if (A[0] > 0 && A[1] > 0)
            count++, A[0]--, A[1]--;
        if (A[0] > 0 && A[1] > 0 && A[2] > 0)
            count++;
        cout << count << endl;
    }
    return 0;
}