#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, q;
    string song;
    cin >> l >> q >> song;

    vector<int> v(l + 1, 0);
    for (int i = 0; i < l; i++)
        v[i + 1] = v[i] + song[i] - 96;
    vector<int> sums;
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        sums.push_back(v[r] - v[l - 1]);
    }
    for (int i = 0; i < sums.size(); i++)
        cout << sums[i] << endl;
    return 0;
}