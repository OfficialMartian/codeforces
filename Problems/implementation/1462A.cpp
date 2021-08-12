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
        int A[n], front = 0, back = n - 1;
        for (int i = 0; i < n; ++i)
            cin >> A[i];
        while (front <= back)
        {
            if (front == back)
            {
                cout << A[front] << endl;
                break;
            }
            cout << A[front] << " " << A[back] << " ";
            front++;
            back--;
        }
        cout << endl;
    }
    return 0;
}