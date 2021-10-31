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
        int n, c = 1;
        cin >> n;
        while (pow(c, 2) < n)
            c++;
        cout << c << endl;
    }
    return 0;
}