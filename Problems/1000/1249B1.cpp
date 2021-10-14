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
        int n;
        cin >> n;
        int A[n + 1];
        for (int i = 1; i <= n; ++i)
            cin >> A[i];
        // cout << "ANSWER: ";
        for (int i = 1; i <= n; ++i)
        {
            int temp = i, count = 1;
            while (A[temp] != i)
            {
                temp = A[temp];
                count++;
            }
            cout << count << " ";
        }
        cout << endl;
    }
    return 0;
}