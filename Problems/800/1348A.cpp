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
        int pile1 = 0, pile2 = 0;
        for (int i = 1; i < n; ++i)
            i < n / 2 ? pile1 += pow(2, i) : pile2 += pow(2, i);
        pile1 += pow(2, n);
        cout << pile1 - pile2 << endl;
    }
    return 0;
}