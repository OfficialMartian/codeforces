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
        cout << (n >= 2020 && n % 2020 <= n / 2020 ? "YES" : "NO") << endl;
    }
    return 0;
}