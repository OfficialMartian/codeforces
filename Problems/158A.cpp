#include <iostream>
using namespace std;
int main()
{
    int n, A[100], k, sol = 0;
    cin >> n;
    cin >> k;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < n; i++)
        if (A[i] > 0 && i < k)
            sol++;
        else if (A[i] == A[k - 1] && i >= k)
            sol++;
        else
            break;
    cout << sol << endl;
    return 0;
}