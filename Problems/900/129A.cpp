typedef long long int ll;
#define push_back pb
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, odd = 0, even = 0;
    cin >> n;
    while (n--)
    {
        cin >> a;
        a % 2 == 0 ? even++ : odd++;
    }
    cout << (odd % 2 ? odd : even) << endl;
    return 0;
}