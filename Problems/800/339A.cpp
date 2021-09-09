#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin >> a;
    int size = (a.length() / 2) + 1;
    char A[size - 1];
    for (int i = 0, j = 0; i < a.length(); i += 2, j++)
        A[j] = a[i];
    sort(A, A + size);
    for (int i = 0; i < size; i++)
    {
        if (i + 1 == size)
        {
            cout << A[i];
            break;
        }
        cout << A[i] << "+";
    }
    return 0;
}