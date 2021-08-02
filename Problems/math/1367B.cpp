#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int A[n], odd = 0, even = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> A[i];
            if (i % 2 != A[i] % 2)
            {
                if (i % 2)
                    ++odd;
                else
                    ++even;
            }
        }
        if (odd == even)
            cout << odd << endl;
        else
            cout << "-1" << endl;
    }
    return 0;
}