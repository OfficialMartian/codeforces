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
        int a, b, c;
        cin >> a >> b >> c;
        cout << (c <= a ? -1 : 1) << " " << ((c / b) >= a ? -1 : b) << endl;
    }
    return 0;
}