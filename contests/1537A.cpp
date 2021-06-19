#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> num;
    while (t--)
    {
        int n, sum = 0;
        cin >> n;
        int A[n - 1];
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
            sum += A[i];
        }
        if (sum == n)
            num.push_back(0);
        else if (sum < n)
            num.push_back(1);
        else if (sum > n)
            num.push_back(sum - n);
    }
    for (int i = 0; i < num.size(); i++)
        cout << num[i] << endl;
    return 0;
}