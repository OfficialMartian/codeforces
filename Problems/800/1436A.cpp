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
        int n, m, sum = 0;
        cin >> n >> m;
        for (int i = 0; i < n; ++i)
        {
            int temp;
            cin >> temp;
            sum += temp;
        }
        cout << (sum == m ? "YES" : "NO") << endl;
    }
    return 0;
}