typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, sereja = 0, dima = 0, turn = false;
    cin >> n;
    int A[n], first = 0, last = n - 1;
    for (int i = 0; i < n; ++i)
        cin >> A[i];

    while (first <= last)
    {
        if (A[first] > A[last])
        {
            if (!turn)
            {
                sereja += A[first];
                turn = !turn;
            }
            else
            {
                dima += A[first];
                turn = !turn;
            }
            first++;
        }
        else
        {
            if (!turn)
            {
                sereja += A[last];
                turn = !turn;
            }
            else
            {
                dima += A[last];
                turn = !turn;
            }
            last--;
        }
    }
    cout << sereja << " " << dima;
    return 0;
}