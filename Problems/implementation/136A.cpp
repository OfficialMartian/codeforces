typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> A(n + 1);
    for (int i = 1; i <= n; ++i)
    {
        int temp;
        cin >> temp;
        A[temp] = i;
    }
    cout << A[1];
    for (int i = 2; i <= n; ++i)
        cout << " " << A[i];
    cout << endl;
    return 0;
}