typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    cin >> a >> b;
    int n = min(a.length(), b.length()), count = 0, i = a.length() - 1, j = b.length() - 1;
    while (n--)
    {
        if (a[i] == b[j])
            count++, j--, i--;
        else
            break;
    }
    cout << a.length() + b.length() - 2 * count;
    return 0;
}