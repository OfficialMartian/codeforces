#include <iostream>
using namespace std;
int main()
{
    int n, k = 0, A[3];
    cin >> n;
    while (n--)
    {
        for (int i = 0; i < 3; i++)
            cin >> A[i];
        if (A[0] + A[1] + A[2] >= 2)
            k++;
    }
    cout << k;
    return 0;
}