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
        int a[4];
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        int f1 = max(a[0], a[1]), f2 = max(a[2], a[3]);
        sort(a, a + 4);
        cout << (((a[3] == f2 and a[2] == f1) or (a[3] == f1 and a[2] == f2)) ? "YES" : "NO");
        cout << endl;
    }
    return 0;
}